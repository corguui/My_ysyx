package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class IO_mem extends Bundle {
    val m_waddr = Input(UInt(32.W))
    val m_wdata = Input(UInt(32.W))
    val m_wmask = Input(UInt(32.W))
    val m_wen = Input(Bool())
    val m_raddr = Input(UInt(32.W))
    val m_rdata = Output(UInt(32.W))
    val m_rmask = Input(UInt(32.W))
}

class LSU_mem extends Module {
    val io = IO(new Bundle {
        val mem = (new IO_mem)
        val m_ren = Input(Bool())
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
    m.io.m_ren := io.m_ren
    m.io.clock := io.clock
    m.io.m_waddr := io.mem.m_waddr
    m.io.m_wdata := io.mem.m_wdata
    m.io.m_wmask := io.mem.m_wmask
    m.io.m_wen := io.mem.m_wen
    m.io.m_raddr := io.mem.m_raddr
    io.mem.m_rdata := m.io.m_rdata
    io.mem.m_rmask := m.io.m_rmask


}