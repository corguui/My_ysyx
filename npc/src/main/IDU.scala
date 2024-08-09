package npc 

import chisel3._
import chisel3.util._


class IDU extends Module {
	val io = IO(new Bundle{
		val in = Flipped(Decoupled(new IFUtoIDU))
	})

	val m_idle :: m_wait_valid :: Nil = Enum(2)
	val state = RegInit(m_idle)
	state :=MuxLookup(state,m_idle)(List(
		m_idle -> Mux(io.in.ready,m_idle,m_wait_valid),
		m_wait_valid -> Mux(io.in.valid,m_wait_valid,m_idle)
	))

    io.in.ready :=1.U
    val inst = io.in.bits

}