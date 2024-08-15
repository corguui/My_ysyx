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
    val r_exu_mem = Flipped(new EXUtoMem) 
    val r_mem_exu = (new MemtoEXU)
    val m_waddr = Input(UInt(32.W))
    val m_wdata = Input(UInt(32.W))
    val m_wmask = Input(UInt(32.W))
    val m_wen = Input(Bool())
}

class LSU_mem extends Module {
    val io = IO(new Bundle {
        val mem = (new IO_mem)
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
      })

		addPath("./src/main/Mem.v")
  	}

    val m = Module(new Mem)
    m.io.clock := clock
    m.io.m_waddr := io.mem.m_waddr
    m.io.m_wdata := io.mem.m_wdata
    m.io.m_wmask := io.mem.m_wmask
    m.io.m_wen := io.mem.m_wen

    io.mem.r_exu_mem.arready := false.B
    io.mem.r_mem_exu.rdata := 0.U
    io.mem.r_mem_exu.rvalid := false.B

    val lastraddr = RegNext(io.mem.r_exu_mem.raddr,0.U)
    when(io.mem.r_exu_mem.arvalid &(io.mem.r_exu_mem.raddr =/= lastraddr)){ 
        io.mem.r_exu_mem.arready := true.B
        m.io.m_raddr := io.mem.r_exu_mem.raddr
        m.io.m_rmask := io.mem.r_exu_mem.rmask
        m.io.m_ren := io.mem.r_exu_mem.arvalid
        io.mem.r_mem_exu.rdata := m.io.m_rdata
        io.mem.r_mem_exu.rvalid := true.B
    }.elsewhen(io.r_mem_exu.rready){
        io.mem.r_mem_exu.rvalid := false.B
    }


}