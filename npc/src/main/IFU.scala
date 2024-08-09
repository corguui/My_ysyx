package npc 

import chisel3._

class IFUtoIDU extends Module {
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val out = Decoupled(new IFUtoIDU)
	})
}

