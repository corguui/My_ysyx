package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class IFUtoIDU extends Bundle {
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val in = Flipped(Decoupled(new PCtoIFU))
		val out = Decoupled(new IFUtoIDU)
	})

	//IFU recive IDU 
	val idu2s_idle :: idu2s_wait_ready :: Nil = Enum(2)
	val idu2s_state = RegInit(idu2s_idle)
	idu2s_state :=MuxLookup(idu2s_state,idu2s_idle)(List(
		idu2s_idle -> Mux(io.out.valid,idu2s_wait_ready,idu2s_idle),
		idu2s_wait_ready -> Mux(io.out.ready,idu2s_idle,idu2s_wait_ready)
	))

	//IFU to PC
	val m2PCidle :: m2PCprocess :: Nil = Enum(2)
	val m2PCstate = RegInit(m2PCidle)
	m2PCstate :=MuxLookup(m2PCstate,m2PCidle)(List(
		m2PCidle -> Mux(io.in.valid,m2PCprocess,m2PCidle),
		m2PCprocess -> Mux(io.in.ready,m2PCidle,m2PCprocess)
	))

	// 声明DPI-C函数的BlackBox模块
  	class VlgPcRead extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
      	val pc = Input(UInt(32.W))
      	val inst = Output(UInt(32.W))
      })

		addPath("./src/main/VlgPcRead.v")
  	}

  
  	val vlg_pc_read = Module(new VlgPcRead)
	val out_data =Wire(new IFUtoIDU)
	val in_data =Wire(new PCtoIFU)
	in_data := io.in.bits

	//取指令和生成ready,valid信号
	val lastinst = RegNext(out_data.inst,1.U)
	io.in.ready := (m2PCstate === m2PCidle)
	io.out.valid := (lastinst =/= out_data.inst)

    //取指令
	out_data.inst := 0.U
	vlg_pc_read.io.pc := 0.U
	when(m2PCstate === m2PCprocess)
	{
	vlg_pc_read.io.pc := in_data.pc
	out_data.inst := vlg_pc_read.io.inst 
	}

	//传到IDU
	io.out.bits := out_data

}

