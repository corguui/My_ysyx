package npc 

import chisel3._
import chisel3.util._

class IFUtoIDU extends Bundle {
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val out = Decoupled(new IFUtoIDU)
	})

	val s_idle :: s_wait_ready :: Nil = Enum(2)
	val state = RegInit(s_idle)
	state :=MuxLookup(state,s_idle)(List(
		s_idle -> Mux(io.out.valid,s_wait_ready,s_idle),
		s_wait_ready -> Mux(io.out.ready,s_idle,s_wait_ready)
	))

	io.out.valid :=1.U
	io.out.bits = RegInit(0.U)
}

