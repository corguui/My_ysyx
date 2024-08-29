package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class UART extends Module {
    val io = IO(new Bundle {
        val axi_ar = Flipped(new AXI_ar) 
        val axi_r = (new AXI_r)
        val axi_w = Flipped(new AXI_w) 
        val axi_aw = Flipped(new AXI_aw) 
        val axi_b = (new AXI_b)
    })

    class Uart extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
        val clock = Input(Clock())
        val wen = Input(Bool())
        val addr = Input(UInt(32.W))
        val data = Input(UInt(32.W))
        val mask = Input(UInt(32.W))
      })

		addPath("./src/main/Uart.v")
  	}

    val uart = Module(new Uart)

    uart.io.clock := clock
    uart.io.wen := 0.U
    uart.io.addr := 0.U
    uart.io.data := 0.U
    uart.io.mask := 0.U

    //read part
    io.axi_ar.arready := false.B
    io.axi_r.rvalid := false.B
    io.axi_r.rdata := 0.U
    io.axi_r.rresp := 0.U
    io.axi_r.rid := 0.U
    io.axi_r.rlast := 0.U


    //write_delay
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid :=0.U

    //AXI-lite write member
    val bresp = Wire(UInt(2.W))
    bresp := 0.U
    val bvalid_en = Wire(Bool())
    bvalid_en := false.B
    val bvalid_reg = RegEnable(bvalid_en,0.U,(bvalid_en | io.axi_b.bready))
    val bresp_reg = RegEnable(bresp,0.U,(io.axi_w.wvalid | io.axi_aw.awvalid))
    val waddr_reg = RegNext(io.axi_aw.awaddr,0.U)
    val wstrb_reg = RegNext(io.axi_w.wstrb,0.U)
    val awvalid_reg =RegNext(io.axi_aw.awvalid,0.U)
    val wvalid_reg = RegNext(io.axi_w.wvalid,0.U)
    io.axi_aw.awready := true.B
    io.axi_w.wready := true.B
    io.axi_b.bresp :=  3.U 
    io.axi_b.bid := 0.U
    io.axi_b.bvalid := bvalid_reg

    //AXI-lite write part
    when(io.axi_aw.awvalid){
        uart.io.addr := io.axi_aw.awaddr
    }.otherwise{
        uart.io.addr := 0.U
    }
    when(io.axi_w.wvalid){
        uart.io.data := io.axi_w.wdata
        uart.io.mask := io.axi_w.wstrb
    }.otherwise{
        uart.io.data := 0.U
        uart.io.mask := 0.U
    }
    when(io.axi_w.wvalid & io.axi_aw.awvalid){
        delay_w.io.inData := true.B //m.io.m_wready:
        // invalid的限制是在w和aw拉高时拉高一周期而已
        delay_w.io.inValid :=Mux((io.axi_w.wvalid =/= wvalid_reg & io.axi_w.wvalid === 1.U & io.axi_aw.awvalid =/= awvalid_reg & io.axi_aw.awvalid === 1.U),true.B,false.B) 
        uart.io.wen := Mux((io.axi_w.wstrb =/= wstrb_reg) & (io.axi_aw.awaddr =/= waddr_reg) ,true.B,false.B)
        bvalid_en := Mux(delay_w.io.delayDone,true.B,false.B)
        when(((io.axi_aw.awaddr >= 0x80000000.S.asUInt) & ( io.axi_aw.awaddr < 0x8fffffff.S.asUInt)) | (( io.axi_aw.awaddr >= 0xa00003f8.S.asUInt) &( io.axi_aw.awaddr <= 0xa00003ff.S.asUInt)) | (( io.axi_aw.awaddr >= 0xa0000048.S.asUInt) &( io.axi_aw.awaddr <= 0xa000004f.S.asUInt))){
                bresp := 1.U
        }.otherwise{
                bresp := 0.U
        }
        when(io.axi_b.bready & io.axi_b.bvalid){
            io.axi_b.bresp := bresp_reg
        }.otherwise{
            io.axi_b.bresp := 0.U
        }
    }.otherwise{
        uart.io.wen := false.B
        bvalid_en := false.B
    } 

}
