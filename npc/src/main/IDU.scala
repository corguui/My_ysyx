package npc 

import chisel3._



class IDU extends Module {
	val io = IO(new Bundle{
		val in = Flipped(Decoupled(new IFUtoIDU()))
	})
}