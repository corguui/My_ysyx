package ysyx

import chisel3._
import chisel3.util._

import freechips.rocketchip.amba.apb._
import org.chipsalliance.cde.config.Parameters
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util._

class SPIIO(val ssWidth: Int = 8) extends Bundle {
  val sck = Output(Bool())
  val ss = Output(UInt(ssWidth.W))
  val mosi = Output(Bool())
  val miso = Input(Bool())
}

class spi_top_apb extends BlackBox {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val in = Flipped(new APBBundle(APBBundleParameters(addrBits = 32, dataBits = 32)))
    val spi = new SPIIO
    val spi_irq_out = Output(Bool())
  })
}

class flash extends BlackBox {
  val io = IO(Flipped(new SPIIO(1)))
}

class APBSPI(address: Seq[AddressSet])(implicit p: Parameters) extends LazyModule {
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
    val spi_bundle = IO(new SPIIO)

    val mspi = Module(new spi_top_apb)
    mspi.io.clock := clock
    mspi.io.reset := reset
    spi_bundle <> mspi.io.spi

    val idle :: ssh :: div :: ssl :: ctrl :: tx :: bsy :: rx :: Nil = Enum(8)
    val state = RegInit(idle)
    val pwdata_reg = Reg(UInt(32.W))
    val paddr_reg = Reg(UInt(32.W))
    val addr_reg = Reg(UInt(32.W))
    val pstrb = Reg(UInt(4.W))
    val psel = Reg(Bool())
    val penable = Reg(Bool())
    val write = Reg(Bool())

    mspi.io.in.psel := 0.U
    mspi.io.in.penable := 0.U
    mspi.io.in.pwrite := 0.U
    mspi.io.in.paddr := 0.U
    mspi.io.in.pprot := 0.U
    mspi.io.in.pwdata := 0.U
    mspi.io.in.pstrb := 0.U

    when(state =/= idle )
    {
        mspi.io.in.paddr :=  paddr_reg
        mspi.io.in.pwrite := write  
        mspi.io.in.pwdata := pwdata_reg
        mspi.io.in.pstrb := pstrb
        mspi.io.in.psel := psel
        mspi.io.in.penable := penable

    }
    when(state =/= idle && state =/= rx)
    {
      in.prdata := 0.U
      in.pslverr := 0.U
      in.pready := false.B
    }
    

    switch(state)
    {
      is(idle)
      {
        when(in.paddr>=0x30000000.S.asUInt && in.paddr <= 0x3fffffff.S.asUInt && in.penable)
        {
          addr_reg := in.paddr
          state :=ssh
          pwdata_reg := 0x0.U
          paddr_reg :=  0x10001018.S.asUInt
          psel := true.B
          pstrb := 15.U
          in.prdata := 0.U
          in.pslverr := 0.U
          in.pready := false.B
          mspi.io.in.psel := 0.U
          mspi.io.in.pstrb := 0.U 
          mspi.io.in.penable := 0.U
          mspi.io.in.pwrite := 0.U
        }.otherwise{
          mspi.io.in <> in
        }
      }
      is(ssh){
        when(mspi.io.in.pready)
        {
        penable := false.B
        write := false.B
        state := div 
        pwdata_reg := 0x01.U
        paddr_reg := 0x10001014.S.asUInt
        }.otherwise{
        penable :=true.B
        write := true.B
        }
      }
      is(div){
        when(mspi.io.in.pready)
        {
        state := ssl 
        pwdata_reg := 0x01.U
        paddr_reg := 0x10001018.S.asUInt
        penable := false.B
        write := false.B
        }.otherwise{
        penable := true.B
        write := true.B
        }
      }
      is(ssl){
        when(mspi.io.in.pready)
        {
        state := ctrl 
        pwdata_reg := 0x40.U
        paddr_reg := 0x10001010.S.asUInt
        penable := false.B
        write := false.B
        }.otherwise{
        penable := true.B
        write := true.B
        }
      }
      is(ctrl){
        when(mspi.io.in.pready)
        {
        state := tx 
        pwdata_reg := ((addr_reg & 0x00ffffff.S.asUInt) | 0x03000000.S.asUInt) 
        paddr_reg := 0x10001004.S.asUInt
        penable := false.B
        write := false.B
        }.otherwise{
        penable := true.B
        write := true.B
        }
      }
      is(tx){
        when(mspi.io.in.pready)
        {
        state := bsy 
        pwdata_reg := 0x140.S.asUInt 
        paddr_reg := 0x10001010.S.asUInt
        penable := false.B
        write := false.B
        }.otherwise{
        penable := true.B
        write := true.B
        }
      }
      is(bsy){
        when(mspi.io.in.pready)
        {
        state := rx  
        paddr_reg := 0x10001010.S.asUInt
        penable := false.B
        write := false.B
        }.otherwise{
        penable := true.B
        write := true.B
        }
      }
      is(rx)
      {
        when(mspi.io.in.prdata === 0x40.U)
        {
          paddr_reg := 0x10001000.S.asUInt
        }
        .elsewhen(mspi.io.in.paddr === 0x10001000.S.asUInt)
        {
        in.prdata := Cat(mspi.io.in.prdata(7,0),mspi.io.in.prdata(15,8),mspi.io.in.prdata(23,16),mspi.io.in.prdata(31,24))
        state := idle
        in.pslverr := 0.U
        in.pready := true.B
        }.otherwise{
        in.prdata := 0.U
        in.pslverr := 0.U
        in.pready := false.B
        }
      }
    }


  }
}
