package npc 

import chisel3._
import chisel3.util._


class IDU extends Module {
	val io = IO(new Bundle{
		val in = Flipped(Decoupled(new IFUtoIDU))
	})
    
    //IDU to IFU
	val m_idle :: m_wait_valid :: Nil = Enum(2)
	val state = RegInit(m_idle)
	state :=MuxLookup(state,m_idle)(List(
		m_idle -> Mux(io.in.ready,m_idle,m_wait_valid),
		m_wait_valid -> Mux(io.in.valid,m_wait_valid,m_idle)
	))
    val in_data = Wire(new IFUtoIDU) 
    in_data := io.in.bits
    val lastinst = RegInit(0.U)
    io.in.ready := (lastinst =/= in_data.inst)

}