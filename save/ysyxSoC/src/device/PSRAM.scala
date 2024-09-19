package ysyx

import chisel3._
import chisel3.util._
import chisel3.experimental.Analog

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class PsramDPI extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val addr = Input(UInt(24.W))
    val data_in = Input(UInt(32.W))
    val data_out = Output(UInt(32.W))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
  })

  setInline("PsramDPI.v",
    """module PsramDPI (
      |  input [31:0] addr,   
      |  input [31:0] data_in,  
      |  output reg [31:0] data_out,
      |  input write_en,
      |  input read_en
      |);
      |
      |import "DPI-C" function void psram_write(input int addr, input int data);
      |import "DPI-C" function int psram_read(input int addr);
      |
      |always @(*) begin
      |  if (write_en) begin
      |    psram_write(addr, data_in);  
      |  end
      |  if (read_en) begin
      |    data_out = psram_read(addr);  
      |  end
      |end
      |endmodule
    """.stripMargin)
}

class QSPIIO extends Bundle {
  val sck = Output(Bool())
  val ce_n = Output(Bool())
  val dio = Analog(4.W)
}

class psram_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val in = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val qspi = new QSPIIO
  })
}

class psram extends BlackBox {
  val io = IO(Flipped(new QSPIIO))
}

class psramChisel extends RawModule {
  val io = IO(Flipped(new QSPIIO))

  val cmd :: wait_r :: write :: Nil = Enum(3)
  val state = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(RegInit(cmd))

  val cnt = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(RegInit(0.U(4.W)))
  val r_cmd = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(Reg(UInt(8.W))) 
  val r_addr = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(Reg(UInt(24.W)))
  val data_out = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(Reg(UInt(32.W)))
  val data_in = withClockAndReset(io.sck.asClock,io.ce_n.asAsyncReset)(Reg(UInt(32.W)))
  val out_en = Wire(Bool())
  out_en := false.B

  val psram_rw = (Module(new PsramDPI))

  val di = TriStateInBuf(io.dio, data_out(31,28), out_en) // change this if you need

  psram_rw.io.read_en := false.B
  psram_rw.io.write_en := false.B
  psram_rw.io.data_in := 0.U
  psram_rw.io.addr := 0.U

  when(!io.ce_n)
  {
  switch(state)
  {
    is(cmd)
    {
        when(cnt < 8.U)
        {
          r_cmd := (r_cmd << 1.U) | di(0)
          cnt := cnt + 1.U
        }.elsewhen(cnt >= 8.U && cnt < 14.U)
        {
          r_addr := (r_addr << 4.U) | di 
          cnt := cnt + 1.U
        }.elsewhen(cnt === 14.U)
        {
          state := Mux( r_cmd === 0xEB.U, wait_r, Mux( r_cmd === 0x38.U, write, cmd))
          when(r_cmd === 0xEB.U)
          {
            state := wait_r
            psram_rw.io.addr := r_addr
            data_out := psram_rw.io.data_out
            psram_rw.io.read_en := true.B
            cnt := 0.U
          }.elsewhen(r_cmd === 0x38.U)
          {
            state := write
            data_in := (data_in << 4.U) | di
          }
        }
    }
    is(wait_r)
    {
      when(cnt < 6.U)
      {
        cnt := cnt + 1.U
      }.elsewhen(cnt === 6.U)
      {
        out_en := true.B
        data_out := data_out << 4.U
      }
    }
    is(write)
    {
      data_in := (data_in << 4.U) | di
    }
  }
  }.elsewhen(io.ce_n)
  {
    switch(state)
    {
      is(wait_r)
      {
        state := cmd
        data_out := 0.U
        cnt := 0.U
      }
      is(write)
      {
        psram_rw.io.addr := r_addr
        psram_rw.io.data_in := data_in
        psram_rw.io.write_en := true.B
        data_in := 0.U
        cnt := 0.U
        state := cmd
      }
    }
  }
}

class APBPSRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val node = APBSlaveNode(Seq(APBSlavePortParameters(
    Seq(APBSlaveParameters(
      address       = address,
      executable    = true,
      supportsRead  = true,
      supportsWrite = true)),
    beatBytes  = 4)))

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _) = node.in(0)
    val qspi_bundle = IO(new QSPIIO)

    val mpsram = Module(new psram_top_apb)
    mpsram.io.clock := clock
    mpsram.io.reset := reset
    mpsram.io.in <> in
    qspi_bundle <> mpsram.io.qspi
  }
}
