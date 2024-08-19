package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class MemtoEXU_r extends Bundle {
    val rdata = Output(UInt(32.W))
    val rresp = Output(UInt(2.W))
    val rvalid = Output(Bool())
    val rready = Input(Bool())
}

class MemtoEXU_b extends Bundle {
    val bresp = Output(UInt(2.W))
    val bvalid = Output(Bool())
    val bready = Input(Bool())
}


class LSU_mem extends Module {
    val io = IO(new Bundle {
        val ar_exu_mem = Flipped(new EXUtoMem_ar) 
        val r_mem_exu = (new MemtoEXU_r)
        val w_exu_mem = Flipped(new EXUtoMem_w) 
        val aw_exu_mem = Flipped(new EXUtoMem_aw) 
        val b_mem_exu = (new MemtoEXU_b)
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
        val m_wready = Output(Bool())
      })

		addPath("./src/main/Mem.v")
  	}
    //Mem init
    val m = Module(new Mem)
    m.io.clock := clock
    m.io.m_waddr := 0.U
    m.io.m_wdata := 0.U 
    m.io.m_wmask := 0.U 
    m.io.m_wen := false.B
    m.io.m_raddr := 0.U
    m.io.m_rmask := 0.U
    m.io.m_ren := false.B

    //AXI-lite read member
    val resp = Wire(UInt(2.W))
    resp := 0.U
    val rvalid_en = Wire(Bool())
    rvalid_en := false.B
    val rdata_reg = RegEnable(m.io.m_rdata,0.U,io.ar_exu_mem.arvalid)
    val rvalid_reg = RegNext(rvalid_en,0.U)//io.ar_exu_mem.arvalid)   
    val rresp_reg = RegEnable(resp,0.U,io.ar_exu_mem.arvalid)

    io.ar_exu_mem.arready := true.B
    io.r_mem_exu.rdata := 0.U 
    //io.r_mem_exu.rresp := 3.U
    io.r_mem_exu.rvalid := rvalid_reg 

    //AXI-lite write member
    val bresp = Wire(UInt(2.W))
    bresp := 0.U
    val bvalid_en = Wire(Bool())
    bvalid_en := false.B
    val bvalid_reg = RegNext(bvalid_en,0.U)
    val bresp_reg = RegEnable(bresp,0.U,(io.w_exu_mem.wvalid | io.aw_exu_mem.awvalid))
    io.aw_exu_mem.awready := true.B
    io.w_exu_mem.wready := true.B
    //io.b_mem_exu.bresp := 3.U 
    io.b_mem_exu.bvalid := bvalid_reg

    //AXI-lite read part
    when(io.ar_exu_mem.arvalid){ 
        m.io.m_raddr := io.ar_exu_mem.raddr
        m.io.m_rmask := io.ar_exu_mem.rmask
        m.io.m_ren := io.ar_exu_mem.arvalid
        rvalid_en := true.B
        when((m.io.m_raddr >= 0x80000000.S.asUInt)&(m.io.m_raddr < 0x8fffffff.S.asUInt)&(m.io.m_raddr >= 0xa00003f8.S.asUInt)&(m.io.m_raddr <= 0xa00003ff.S.asUInt)&(m.io.m_raddr >= 0xa0000048.S.asUInt)&(m.io.m_raddr <= 0xa000004f.S.asUInt)){
            when(m.io.m_rmask === 1.U){
            resp := Mux((m.io.m_rdata(31,8) === 0.U),1.U,0.U)
            }.elsewhen(m.io.m_rmask === 2.U){
            resp := Mux((m.io.m_rdata(31,16) === 0.U),1.U,0.U)
            }.elsewhen(m.io.m_rmask === 4.U){
            resp := 1.U
            }.otherwise{
            resp := 0.U
            }
        }.otherwise{
            resp := 0.U
        }
        when((io.r_mem_exu.rready)&(io.r_mem_exu.rvalid)){
            io.r_mem_exu.rdata := rdata_reg 
            io.r_mem_exu.rresp := rresp_reg 
        }.otherwise{
            io.r_mem_exu.rdata := 0.U 
            io.r_mem_exu.rresp := 0.U
        }
    }.otherwise{
        rvalid_en := false.B   
    }
    //AXI-lite write part
    when(io.aw_exu_mem.awvalid){
        m.io.m_waddr := io.aw_exu_mem.awaddr
    }.otherwise{
        m.io.m_waddr := 0.U
    }
    when(io.w_exu_mem.wvalid){
        m.io.m_wdata := io.w_exu_mem.wdata
        m.io.m_wmask := io.w_exu_mem.wmask
    }.otherwise{
        m.io.m_wdata := 0.U
        m.io.m_wmask := 0.U
    }
    when(io.w_exu_mem.wvalid & io.aw_exu_mem.awvalid){
        m.io.m_wen := true.B
        bvalid_en := true.B
        when((io.aw_exu_mem.awaddr >= 0x80000000.S.asUInt) &( io.aw_exu_mem.awaddr < 0x8fffffff.S.asUInt) &( io.aw_exu_mem.awaddr >= 0xa00003f8.S.asUInt) &( io.aw_exu_mem.awaddr <= 0xa00003ff.S.asUInt) &( io.aw_exu_mem.awaddr >= 0xa0000048.S.asUInt) &( io.aw_exu_mem.awaddr <= 0xa000004f.S.asUInt)){
            when(io.w_exu_mem.wmask === 1.U){
                bresp := Mux((io.w_exu_mem.wdata(31,8) === 0.U),1.U,0.U)
            }.elsewhen(io.w_exu_mem.wmask === 2.U){
                bresp := Mux((io.w_exu_mem.wdata(31,16) === 0.U),1.U,0.U)
            }.elsewhen(io.w_exu_mem.wmask === 4.U){
                bresp := 1.U
            }.otherwise{
                bresp := 0.U
            }
        }.otherwise{
                bresp := 0.U
        }
        when(io.b_mem_exu.bready & io.b_mem_exu.bvalid){
            io.b_mem_exu.bresp := bresp_reg
        }.otherwise{
            io.b_mem_exu.bresp := 0.U
        }
    }.otherwise{
        m.io.m_wen := false.B
        bvalid_en := false.B
    } 

}