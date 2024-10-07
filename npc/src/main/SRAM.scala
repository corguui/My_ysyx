package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

/*
class Memory extends Module {
    val io = IO(new Bundle {
        val m_raddr = Input(UInt(32.W))
        val m_rdata = Output(UInt(32.W))
        val m_waddr = Input(UInt(32.W))
        val m_wdata = Input(UInt(32.W))
        val m_wstrb = Input(UInt(3.W))
        val m_wen = Input(Bool())
        val m_ren = Input(Bool())
        val m_rmask = Input(UInt(3.W))
    })

    val mem = Mem(256, UInt(32.W))
    val raddr = io.m_raddr(7,0)  
    val waddr = io.m_waddr(7,0) 

    io.m_rdata := 0.U

    when(io.m_wen) {
    when(io.m_rmask ===1.U) {
        io.m_rdata := (mem.read(raddr.asUInt)  & 0x000000ff.U)                 
    }.elsewhen(io.m_rmask ===2.U) {
        io.m_rdata := (mem.read(raddr.asUInt)  & 0x0000ffff.U)
    }.otherwise {
        io.m_rdata := mem.read(raddr.asUInt) 
    }
    }

    when(io.m_wen) {
        when(io.m_wstrb ===1.U) {
        mem.write(waddr.asUInt, io.m_wdata & 0x000000ff.U)                 
    }.elsewhen(io.m_wstrb ===2.U) {
        mem.write(waddr.asUInt, io.m_wdata & 0x0000ffff.U)
    }.otherwise {
        mem.write(waddr.asUInt, io.m_wdata )
    }
    }


}
*/

class AXI_r extends Bundle {
    val rdata = Output(UInt(32.W))
    val rresp = Output(UInt(2.W))
    val rvalid = Output(Bool())
    val rready = Input(Bool())
    val rid = Output(UInt(4.W))
    val rlast = Output(Bool())
}

class AXI_b extends Bundle {
    val bresp = Output(UInt(2.W))
    val bid = Output(UInt(4.W))
    val bvalid = Output(Bool())
    val bready = Input(Bool())
}
class AXI_ar extends Bundle {
    val araddr = Output(UInt(32.W))
    val arvalid = Output(Bool())
    val arready = Input(Bool())
    val arid = Output(UInt(4.W))
    val arlen = Output(UInt(8.W))
    val arsize = Output(UInt(3.W))
    val arburst = Output(UInt(2.W))
}
class AXI_w extends Bundle {
    val wdata = Output(UInt(32.W))
    val wstrb = Output(UInt(4.W))
    val wlast = Output(Bool())
    val wvalid = Output(Bool())
    val wready = Input(Bool())
}
class AXI_aw extends Bundle {
    val awaddr = Output(UInt(32.W))
    val awvalid = Output(Bool())
    val awready = Input(Bool())
    val awid = Output(UInt(4.W))
    val awlen = Output(UInt(8.W))
    val awsize = Output(UInt(3.W))
    val awburst = Output(UInt(2.W))
}

class SRAM extends Module {
    val io = IO(new Bundle {
        val axi_ar = Flipped(new AXI_ar) 
        val axi_r = (new AXI_r)
        val axi_w = Flipped(new AXI_w) 
        val axi_aw = Flipped(new AXI_aw) 
        val axi_b = (new AXI_b)
    })

    class Mem extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
        val clock = Input(Clock())
        val m_waddr = Input(UInt(32.W))
        val m_wdata = Input(UInt(32.W))
        val m_wmask = Input(UInt(32.W))
        val m_wen = Input(Bool())
        val m_raddr = Input(UInt(32.W))
        val m_rdata = Output(UInt(32.W))
        val m_rmask = Input(UInt(32.W))
        val m_ren = Input(Bool())
        //val m_wready = Output(Bool())
      })

		addPath("./src/main/Mem.v")
  	}

    //Mem init
    val m = Module(new Mem)
    //val m = Module(new Memory)
    m.io.clock := clock
    m.io.m_waddr := 0.U
    m.io.m_wdata := 0.U 
    m.io.m_wmask := 0.U 
    m.io.m_wen := false.B
    m.io.m_raddr := 0.U
    m.io.m_rmask := 0.U
    m.io.m_ren := false.B

    //read_delay
    val delay = Module(new DelayModule)
    delay.io.inData := 0.U
    delay.io.inValid :=0.U
    //write_delay
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid :=0.U
    //val wready_reg = RegEnable(m.io.m_wready,0.U,(io.axi_w.wvalid & io.axi_aw.awvalid))

    //AXI-lite read member
    val resp = Wire(UInt(2.W))
    resp := 0.U
    val rvalid_en = Wire(Bool())
    rvalid_en := false.B

    val rdata_reg = RegEnable(delay.io.outData ,0.U,io.axi_ar.arvalid)
    val rvalid_reg = RegEnable(rvalid_en,0.U, (rvalid_en | io.axi_r.rready))
    val rresp_reg = RegEnable(resp,0.U,io.axi_ar.arvalid)
    val arvalid_reg =RegNext(io.axi_ar.arvalid,0.U)

    io.axi_ar.arready := true.B
    io.axi_r.rdata := 2.U 
    io.axi_r.rresp := 3.U
    io.axi_r.rid := 0.U
    io.axi_r.rlast := 0.U
    io.axi_r.rvalid := rvalid_reg 

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

    //AXI-lite read part
    when(io.axi_ar.arvalid){ 
        m.io.m_raddr := io.axi_ar.araddr
        m.io.m_rmask := 4.U
        m.io.m_ren := io.axi_ar.arvalid
        delay.io.inData := m.io.m_rdata
        // invalid的限制是在w和aw拉高时拉高一周期而已
        delay.io.inValid := Mux(arvalid_reg=/=io.axi_ar.arvalid & io.axi_ar.arvalid === 1.U,true.B,false.B)
        rvalid_en := Mux(delay.io.delayDone,true.B,false.B)

        when(((m.io.m_raddr >= 0x80000000.S.asUInt)&(m.io.m_raddr < 0x8fffffff.S.asUInt)) | ((m.io.m_raddr >= 0xa0000048.S.asUInt)&(m.io.m_raddr <= 0xa000004f.S.asUInt))){
            when(m.io.m_rmask === 4.U){
            resp := 1.U
            }.otherwise{
            resp := 0.U
            }
        }.otherwise{
            resp := 0.U
        }
        when((io.axi_r.rready)&(io.axi_r.rvalid)){
            io.axi_r.rdata := rdata_reg 
            io.axi_r.rresp := rresp_reg 
            rvalid_en := false.B
        }.otherwise{
            io.axi_r.rdata := 0.U 
            io.axi_r.rresp := 0.U
        }
    }.otherwise{
        rvalid_en := false.B   
    }
    //AXI-lite write part
    when(io.axi_aw.awvalid){
        m.io.m_waddr := io.axi_aw.awaddr
    }.otherwise{
        m.io.m_waddr := 0.U
    }
    when(io.axi_w.wvalid){
        m.io.m_wdata := io.axi_w.wdata
        m.io.m_wmask := io.axi_w.wstrb
    }.otherwise{
        m.io.m_wdata := 0.U
        m.io.m_wmask := 0.U
    }
    when(io.axi_w.wvalid & io.axi_aw.awvalid){
        delay_w.io.inData := true.B
        // invalid的限制是在w和aw拉高时拉高一周期而已
        delay_w.io.inValid :=Mux((io.axi_w.wvalid =/= wvalid_reg & io.axi_w.wvalid === 1.U & io.axi_aw.awvalid =/= awvalid_reg & io.axi_aw.awvalid === 1.U),true.B,false.B) 
        m.io.m_wen := Mux((io.axi_w.wstrb =/= wstrb_reg) & (io.axi_aw.awaddr =/= waddr_reg) ,true.B,false.B)
        bvalid_en := Mux(delay_w.io.delayDone,true.B,false.B)
        when(((io.axi_aw.awaddr >= 0x80000000.S.asUInt) & ( io.axi_aw.awaddr < 0x8fffffff.S.asUInt)) /* | (( io.axi_aw.awaddr >= 0xa00003f8.S.asUInt) &( io.axi_aw.awaddr <= 0xa00003ff.S.asUInt)) */| (( io.axi_aw.awaddr >= 0x02000048.S.asUInt) &( io.axi_aw.awaddr <= 0x0200004f.S.asUInt))){
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
        m.io.m_wen := false.B
        bvalid_en := false.B
    } 

}