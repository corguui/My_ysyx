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
	val IDU2s_idle :: IDU2s_wait_ready :: Nil = Enum(2)
	val IDU2s_state = RegInit(IDU2s_idle)
	IDU2s_state :=MuxLookup(IDU2s_state,IDU2s_idle)(List(
		IDU2s_idle -> Mux(io.out.valid,IDU2s_wait_ready,IDU2s_idle),
		IDU2s_wait_ready -> Mux(io.out.ready,IDU2s_idle,IDU2s_wait_ready)
	))

	//IFU to PC
	val m2PCidle :: m2PCwait_valid :: Nil = Enum(2)
	val m2PCstate = RegInit(m2PCidle)
	m2PCstate :=MuxLookup(m2PCstate,m2PCidle)(List(
		m2PCidle -> Mux(io.in.ready,m2PCidle,m2PCwait_valid),
		m2PCwait_valid -> Mux(io.in.valid,m2PCwait_valid,m2PCidle)
	))

	// 声明DPI-C函数的BlackBox模块
  	class VlgPcRead extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
      	val pc = Input(UInt(32.W))
      	val inst = Output(UInt(32.W))
      })

		addPath("./src/main/VlgPcRead.v")
  	}


   /*
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
      |    output reg [31:0] inst
      |);
	  |    always @(*)begin
      |    		inst = vlg_pc_read(pc);
	  |	   end
      |endmodule
      """.stripMargin)
  }
  */

  
  val vlg_pc_read = Module(new VlgPcRead)

	val out_data =Wire(new IFUtoIDU)
	val in_data =Wire(new PCtoIFU)
	in_data := io.in.bits

	//取指令和生成ready,valid信号
	val lastpc = RegNext(in_data.pc,0.U)
	val lastinst = RegNext(out_data.inst,0.U)
	io.in.ready := (lastpc =/= in_data.pc)

    //取指令
	vlg_pc_read.io.pc := in_data.pc
	out_data.inst := vlg_pc_read.io.inst 

	io.out.valid := (lastinst =/= out_data.inst)
	//传到IDU
	io.out.bits := out_data

}

