package main

import chisel3._

class ModuleA extends Module {
	val io = IO(new Bundle{
		val src0 = Input(UInt(64.W))
		val src1 = Input(UInt(64.W))
		val result = Output(UInt(64.W))
	})
	io.result := io.src0 + io.src1
}
