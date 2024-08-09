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
	val s_idle :: s_wait_ready :: Nil = Enum(2)
	val s_state = RegInit(s_idle)
	s_state :=MuxLookup(s_state,s_idle)(List(
		s_idle -> Mux(io.out.valid,s_wait_ready,s_idle),
		s_wait_ready -> Mux(io.out.ready,s_idle,s_wait_ready)
	))

	//IFU to PC
	val m_idle :: m_wait_valid :: Nil = Enum(2)
	val m_state = RegInit(m_idle)
	m_state :=MuxLookup(m_state,m_idle)(List(
		m_idle -> Mux(io.in.ready,m_idle,m_wait_valid),
		m_wait_valid -> Mux(io.in.valid,m_wait_valid,m_idle)
	))

   // 声明DPI-C函数的BlackBox模块
  class VlgPcRead extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
      val pc = Input(UInt(32.W))
      val inst = Output(UInt(32.W))
    })
	// 使用setInline来直接嵌入Verilog代码
    setInline("VlgPcRead.v",
      """
      |import "DPI-C" function int vlg_pc_read(input int pc);
      |
      |module VlgPcRead(
      |    input  [31:0] pc,
      |    output [31:0] inst
      |);
	  |    always @(*)begin
      |    		inst = vlg_pc_read(pc);
	  |	   end
      |endmodule
      """.stripMargin)
  }

  
  val vlg_pc_read = Module(new VlgPcRead)

	val out_data =Wire(new IFUtoIDU)
	val in_data =Wire(new PCtoIFU)
	in_data := io.in.bits

	//取指令和生成ready,valid信号
	val lastpc = RegNext(in_data.pc,0.U)
	val lastinst = RegNext(out_data.inst,0.U)
	io.in.ready := (lastpc =/= in_data.pc)

	vlg_pc_read.io.pc := in_data.pc
	out_data.inst := vlg_pc_read.io.inst 

	io.out.valid := (lastinst =/= out_data.inst)

}

