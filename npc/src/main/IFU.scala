package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

/*
class pcreadmem extends Module{
	val io = IO(new Bundle{
		val pc = Input(UInt(32.W))
		val inst = Output(UInt(32.W))
	})

	val mem_raddr = RegInit(0.U(8.W))
	mem_raddr := io.pc(7,0)
	val mem = Mem(256,UInt(32.W))

	io.inst := mem(mem_raddr.asUInt)
	
}
*/


class IFUtoIDU extends Bundle {
	val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val out = Decoupled(new IFUtoIDU)
		val exu2in = Flipped(Decoupled(new EXUtoIFU))
	})

	

	//IFU recive IDU 
	val idu2s_idle :: idu2s_wait_ready :: Nil = Enum(2)
	val idu2s_state = RegInit(idu2s_idle)
	idu2s_state :=MuxLookup(idu2s_state,idu2s_idle)(List(
		idu2s_idle -> Mux(io.out.valid,idu2s_wait_ready,idu2s_idle),
		idu2s_wait_ready -> Mux(io.out.ready,idu2s_idle,idu2s_wait_ready)
	))

	//IFU to EXU
    val m2EXUidle :: m2EXUprocess :: Nil = Enum(2)
	val m2EXUstate = RegInit(m2EXUidle)
	m2EXUstate :=MuxLookup(m2EXUstate,m2EXUidle)(List(
		m2EXUidle -> Mux(io.exu2in.valid,m2EXUprocess,m2EXUidle),
		m2EXUprocess -> Mux(io.exu2in.ready,m2EXUidle,m2EXUprocess)
	))
	io.exu2in.ready := (m2EXUstate === m2EXUidle)
	



	// 声明DPI-C函数的BlackBox模块
  	class VlgPcRead extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
		val clk = Input(Clock())
      	val pc = Input(UInt(32.W))
      	val inst = Output(UInt(32.W))
		val pc_en = Input(Bool())
      })

		addPath("./src/main/VlgPcRead.v")
  	}

  
  	//val vlg_pc_read = Module(new pcreadmem)   yosys 使用
	val vlg_pc_read = Module(new VlgPcRead)
	val out_data =Wire(new IFUtoIDU)
	

	//取指令和生成ready,valid信号
	val lastinst = RegNext(out_data.inst,0.U)
	io.out.valid := (lastinst =/= out_data.inst)
	vlg_pc_read.io.clk := clock

	vlg_pc_read.io.pc_en :=0.U 
	out_data.pc := RegNext(io.exu2in.bits.dnpc.asSInt, 0x80000000.S).asUInt
	out_data.snpc := out_data.pc + 4.U
	vlg_pc_read.io.pc := out_data.pc
	out_data.inst := vlg_pc_read.io.inst

	when(m2EXUstate === m2EXUprocess){
    	//取指令
		vlg_pc_read.io.pc_en := 1.U
		 
	}


	//传到IDU
	io.out.bits := out_data

}

