package npc 

import chisel3._
import chisel3.util._



class PC extends Module {
	val io = IO(new Bundle{
		val pc = Output(UInt(32.W))
		val dnpc = Input(UInt(32.W))
		val snpc = Output(UInt(32.W))
	})
	//更新pc
	io.pc := RegNext(io.dnpc.asSInt, 0x80000000.S).asUInt

	io.snpc := io.pc + 4.U

}
