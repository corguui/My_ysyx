package npc 

import chisel3._
import chisel3.util._

class PCtoIFU extends Bundle {
	val pc = Output(UInt(32.W))
}

class PC extends Module {
	val io = IO(new Bundle{
		val dnpc = Input(UInt(32.W))
		val snpc = Output(UInt(32.W))
		val out = Decoupled(new PCtoIFU)
	})

	//PC recive IFU
	val ifu2s_idle :: IFU2swait_ready :: Nil = Enum(2)
	val state = RegInit(ifu2s_idle)
	state :=MuxLookup(state,ifu2s_idle)(List(
		ifu2s_idle -> Mux(io.out.valid,IFU2swait_ready,ifu2s_idle),
		IFU2swait_ready -> Mux(io.out.ready,ifu2s_idle,IFU2swait_ready)
	))

	val data = Wire(new PCtoIFU)

	//记录pc变化前值
	val lastpc = RegNext(data.pc,0.U)

	//更新pc
	data.pc := RegNext(io.dnpc.asSInt, 0x80000000.S).asUInt
	io.out.bits := data

	//判断是否输出数据
	io.out.valid := (data.pc =/= lastpc)

	io.snpc := data.pc + 4.U



}
