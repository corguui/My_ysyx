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

    val m = Module(new Mem)
    m.io.clock := clock
    m.io.m_waddr := 0.U
    m.io.m_wdata := 0.U 
    m.io.m_wmask := 0.U 
    m.io.m_wen := false.B
    m.io.m_raddr := 0.U
    m.io.m_rmask := 0.U
    m.io.m_ren := false.B

    io.w_exu_mem.wready := false.B
    io.aw_exu_mem.awready := false.B

    io.b_mem_exu.bresp := 0.U
    io.b_mem_exu.bvalid := false.B


    //val lastraddr = RegNext(io.ar_exu_mem.raddr,0.U)
    val lastawaddr = RegNext(io.aw_exu_mem.awaddr,0.U)
    val lastwdata = RegNext(io.w_exu_mem.wdata,0.U)

    val resp = Wire(UInt(2.W))
    resp := 0.U
    val rvalid_en = Wire(Bool())
    rvalid_en := false.B
    val rdata_reg = RegEnable(m.io.m_rdata,0.U,io.ar_exu_mem.arvalid)
    //val rvalid_reg = RegEnable(rvalid_en,0.U,io.ar_exu_mem.arvalid)   
    val rvalid_reg = RegNext(rvalid_en,0.U)
    val rresp_reg = RegEnable(resp,0.U,io.ar_exu_mem.arvalid)

    io.ar_exu_mem.arready := true.B
    io.r_mem_exu.rdata := 0.U 
    io.r_mem_exu.rresp := 0.U
    io.r_mem_exu.rvalid := rvalid_reg 


    when(io.ar_exu_mem.arvalid){ 
        m.io.m_raddr := io.ar_exu_mem.raddr
        m.io.m_rmask := io.ar_exu_mem.rmask
        m.io.m_ren := io.ar_exu_mem.arvalid
        rvalid_en := true.B
        when((m.io.m_raddr >= 0x80000000.S.asUInt)&(m.io.m_raddr < 0x8fffffff.S.asUInt)){
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
            rvalid_en := false.B
        }.otherwise{
            io.r_mem_exu.rdata := 0.U 
            io.r_mem_exu.rresp := 0.U
        }
    }.otherwise{
        rvalid_en := false.B   
    }

    when(io.aw_exu_mem.awvalid&(io.aw_exu_mem.awaddr =/= lastawaddr)){
        io.aw_exu_mem.awready := 1.U  
        m.io.m_waddr := io.aw_exu_mem.awaddr
        
    }
    when(io.w_exu_mem.wvalid&(io.w_exu_mem.wdata =/= lastwdata)){
        io.w_exu_mem.wready := m.io.m_wready
        m.io.m_wdata := io.w_exu_mem.wdata
        m.io.m_wmask := io.w_exu_mem.wmask
        m.io.m_wen := io.w_exu_mem.wvalid
        io.b_mem_exu.bvalid := Mux(io.w_exu_mem.wready === 1.U , 1.U, 0.U)
        when(io.aw_exu_mem.awaddr >= 0x80000000.S.asUInt & io.aw_exu_mem.awaddr < 0x8fffffff.S.asUInt){

            when(io.w_exu_mem.wmask === 1.U){
                io.b_mem_exu.bresp := Mux((io.w_exu_mem.wdata(31,8) === 0.U),1.U,0.U)
            }.elsewhen(io.w_exu_mem.wmask === 2.U){
                io.b_mem_exu.bresp := Mux((io.w_exu_mem.wdata(31,16) === 0.U),1.U,0.U)
            }.elsewhen(io.w_exu_mem.wmask === 4.U){
                io.b_mem_exu.bresp := 1.U
            }.otherwise{
                io.b_mem_exu.bresp := 0.U
            }
        }.otherwise{
                io.b_mem_exu.bresp := 0.U
        }
                
    }

}