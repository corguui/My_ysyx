package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class MemtoEXU extends Bundle {
    val rdata = Output(UInt(32.W))
    val rvalid = Output(Bool())
    val rready = Input(Bool())
}

class IO_mem extends Bundle {

    val m_waddr = Input(UInt(32.W))
    val m_wdata = Input(UInt(32.W))
    val m_wmask = Input(UInt(32.W))
    val m_wen = Input(Bool())
}

class LSU_mem extends Module {
    val io = IO(new Bundle {
        val mem = (new IO_mem)
        val r_exu_mem = Flipped(new EXUtoMem) 
        val r_mem_exu = (new MemtoEXU)
        val w_exu_mem = Flipped(new EXUtoMem_w) 
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

    io.r_exu_mem.arready := false.B
    io.r_mem_exu.rdata := 0.U
    io.r_mem_exu.rvalid := false.B

    io.w_exu_mem.wready := false.B

    val lastraddr = RegNext(io.r_exu_mem.raddr,0.U)
    val lastwaddr = RegNext(io.w_exu_mem.waddr,0.U)

    when(io.r_exu_mem.arvalid &(io.r_exu_mem.raddr =/= lastraddr)){ 
        io.r_exu_mem.arready := true.B
        m.io.m_raddr := io.r_exu_mem.raddr
        m.io.m_rmask := io.r_exu_mem.rmask
        m.io.m_ren := io.r_exu_mem.arvalid
        io.r_mem_exu.rdata := m.io.m_rdata
        io.r_mem_exu.rvalid := true.B
    }.elsewhen(io.r_mem_exu.rready){
        io.r_exu_mem.arready := false.B
        io.r_mem_exu.rvalid := false.B
    }
    when(io.w_exu_mem.wvalid&(io.w_exu_mem.waddr =/= lastwaddr)){
        io.w_exu_mem.wready := m.io.m_wready 
        m.io.m_waddr := io.w_exu_mem.waddr
        m.io.m_wdata := io.w_exu_mem.wdata
        m.io.m_wmask := io.w_exu_mem.wmask
        m.io.m_wen := io.w_exu_mem.wvalid
    }


}