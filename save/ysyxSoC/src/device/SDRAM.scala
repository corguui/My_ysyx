package ysyx

import chisel3._
import chisel3.util._
import chisel3.experimental.Analog

import freechips.rocketchip.amba.axi4._
import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class SDRAMDPI extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val row_addr = Input(UInt(13.W))
    val col_addr = Input(UInt(13.W))
    val bank     = Input(UInt(2.W))
    val data_in  = Input(UInt(16.W))
    val data_out = Output(UInt(16.W))
    val write_en = Input(Bool())
    val read_en  = Input(Bool())
    val clk      = Input(Bool())
  })

  setInline("SDRAMDPI.v",
    """module SDRAMDPI (
      |  input        clk, 
      |  input [31:0] row_addr,   
      |  input [31:0] col_addr,  
      |  input [31:0] bank,
      |  input [31:0] data_in,
      |  output reg [31:0] data_out,
      |  input write_en,
      |  input read_en
      |);
      |
      |import "DPI-C" function void sdram_write(input int row_addr, input int col_addr, input int data_in,input int bank);
      |import "DPI-C" function int sdram_read(input int row_addr, input int col_addr, input int bank);
      |
      |always @(posedge clk) begin
      |  if (write_en) begin
      |    sdram_write(row_addr,col_addr,data_in,bank);  
      |  end
      |  if (read_en) begin
      |    data_out = sdram_read(row_addr,col_addr,bank);  
      |  end
      |end
      |endmodule
    """.stripMargin)

}

class SDRAMIO extends Bundle {
  val clk = Output(Bool())
  val cke = Output(Bool())
  val cs  = Output(Bool())
  val ras = Output(Bool())
  val cas = Output(Bool())
  val we  = Output(Bool())
  val a   = Output(UInt(13.W))
  val ba  = Output(UInt(2.W))
  val dqm = Output(UInt(2.W))
  val dq  = Analog(16.W)
}

class sdram_top_axi extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val in = Flipped(new AXI4Bundle(AXI4BundleParameters(addrBits = 32, dataBits = 32, idBits = 4)))
    val sdram = new SDRAMIO
  })
}

class sdram_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val in = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val sdram = new SDRAMIO
  })
}

class sdram extends BlackBox {
  val io = IO(Flipped(new SDRAMIO))
}

class sdramChisel extends RawModule {
  val io = IO(Flipped(new SDRAMIO))

  val idle :: active :: read :: write :: Nil = Enum(4)
  val rv_cke = Wire(Bool())
      rv_cke := !io.cke
  val state = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(4.W)))

  //行
  val row_addr = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(13.W)))
  //列
  val col_addr = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(13.W)))
  val bank = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(2.W)))
  val dqm = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(2.W)))


  val cnt = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(2.W)))
  val r_cnt = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(2.W)))

  val out_en = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(Reg(Bool()))
  val data_out = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(16.W)))
  val data_in = withClockAndReset(io.clk.asClock,rv_cke.asAsyncReset)(RegInit(0.U(32.W)))

  val dq = TriStateInBuf(io.dq,data_out,out_en) //en 后 data_out值会输入到io.dq

  val cmd = Wire(UInt(4.W))
  cmd := Cat(io.cs,io.ras,io.cas,io.we)

  val sdram_dpi = (Module(new SDRAMDPI))

  sdram_dpi.io.read_en  := false.B
  sdram_dpi.io.write_en := false.B 
  sdram_dpi.io.data_in  := 0.U
  sdram_dpi.io.row_addr := 0.U
  sdram_dpi.io.col_addr := 0.U
  sdram_dpi.io.bank     := 0.U
  sdram_dpi.io.clk      := io.clk

  when(io.cke){
    switch(state)
    {
      is(idle)
      {
        when(cmd === 3.U)//active
        {
          row_addr := io.a
          bank := io.ba 
          state := active
        }
      }
      is(active)
      {
        when(cmd === 5.U)//read
        {
          when(io.ba === bank)
          {
            col_addr := io.a
            state := read
            dqm := io.dqm
            cnt := 2.U
          }
          .otherwise{
            col_addr := 0.U
            cnt := 0.U
            dqm := 0.U
          }
        }.elsewhen(cmd === 4.U)
        {
          when(io.ba === bank)
          {
            col_addr := io.a
            state := write
            dqm := io.dqm
            data_in := Cat(Fill(16,0.U),dq)
            cnt := 1.U
          }
          .otherwise{
            col_addr := 0.U
            cnt := 0.U
            dqm := 0.U
          }
        }
      }
      is(read)
      {
        when(cnt === 2.U)
        {
          //read
          when(r_cnt < 2.U)
          {
            sdram_dpi.io.row_addr := row_addr
            sdram_dpi.io.col_addr := col_addr
            sdram_dpi.io.bank     := bank
            sdram_dpi.io.read_en  := true.B
            when(dqm === 0.U)
            {
            data_out := sdram_dpi.io.data_out
            }.elsewhen(dqm === 1.U)
            {
            data_out := Cat(sdram_dpi.io.data_out(15,8),Fill(8,0.U))
            }.elsewhen(dqm === 2.U)
            {
            data_out := Cat(Fill(8,0.U),sdram_dpi.io.data_out(7,0))
            }.otherwise{
            data_out := 0.U
            }
            out_en := true.B
            r_cnt := r_cnt+1.U
            col_addr := col_addr+1.U
          }.elsewhen(r_cnt === 2.U)
          {
            out_en := false.B
            state  := idle
            r_cnt  := 0.U
          }
        }.otherwise
        {
        cnt := cnt+1.U
        }

      }
      is(write)
      {
        when(cnt === 2.U)
        {
          when(r_cnt < 2.U)
          {
            sdram_dpi.io.row_addr := row_addr
            sdram_dpi.io.col_addr := col_addr
            sdram_dpi.io.bank     := bank
            sdram_dpi.io.write_en := true.B
            when(dqm === 0.U)
            {
              sdram_dpi.io.data_in:= data_in(15,0)
            }.elsewhen(dqm === 1.U)
            {
              sdram_dpi.io.data_in:= Cat(data_in(15,8),Fill(8,0.U))
            }.elsewhen(dqm === 2.U)
            {
              sdram_dpi.io.data_in:= Cat(Fill(8,0.U),data_in(7,0))
            }.otherwise{
              sdram_dpi.io.data_in:= 0.U
            }
            r_cnt := r_cnt+1.U
            data_in := data_in>>16.U
            col_addr := col_addr+1.U
          }.elsewhen(r_cnt === 2.U)
          {
            state := idle
            r_cnt := 0.U
          }
        }
        .otherwise{
          cnt := cnt + 1.U
          data_in := Cat(data_in(15,0),dq)
        }
      }
    }
  }

}

class AXI4SDRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
  val beatBytes = 4
  val node = AXI4SlaveNode(Seq(AXI4SlavePortParameters(
    Seq(AXI4SlaveParameters(
        address       = address,
        executable    = true,
        supportsWrite = TransferSizes(1, beatBytes),
        supportsRead  = TransferSizes(1, beatBytes),
        interleavedId = Some(0))
    ),
    beatBytes  = beatBytes)))

  lazy val module = new Impl
  class Impl extends LazyModuleImp(this) {
    val (in, _) = node.in(0)
    val sdram_bundle = IO(new SDRAMIO)

    val msdram = Module(new sdram_top_axi)
    msdram.io.clock := clock
    msdram.io.reset := reset.asBool
    msdram.io.in <> in
    sdram_bundle <> msdram.io.sdram
  }
}

class APBSDRAM(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val sdram_bundle = IO(new SDRAMIO)

    val msdram = Module(new sdram_top_apb)
    msdram.io.clock := clock
    msdram.io.reset := reset.asBool
    msdram.io.in <> in
    sdram_bundle <> msdram.io.sdram
  }
}
