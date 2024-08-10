package npc 

import chisel3._
import chisel3.util._


class EXUtoALU extends Bundle {
    val src1 = Output(UInt(32.W))
    val src2 = Output(UInt(32.W))
    val alu_op = Output(UInt(4.W))
}


class EXU extends Module {
    val io = IO(new Bundle {
        val IDU2in = Flipped(Decoupled(new IDUtoEXU))
        val out2alu = Decoupled(new EXUtoALU)// 2 means to out to alu
    })

    //EXU recive ALU 
	val alu2s_idle :: alu2s_wait_ready :: Nil = Enum(2)
	val alu2s_state = RegInit(alu2s_idle)
	alu2s_state :=MuxLookup(alu2s_state,alu2s_idle)(List(
		alu2s_idle -> Mux(io.out.valid,alu2s_wait_ready,alu2s_idle),
		alu2s_wait_ready -> Mux(io.out.ready,alu2s_idle,alu2s_wait_ready)
	))


    val alu_data = Wire(new EXUtoALU)
    io.out2alu.bits := alu_data
    io.out2alu.valid := (alu_data.src1 =/= ) | (alu_data.src2 =/= ) | (alu_data.alu_op =/= )


    //EXU to IDU
    val m2IDUidle :: m2IDUwait_valid :: Nil = Enum(2)
	val state = RegInit(m2IDUidle)
	state :=MuxLookup(state,m2IDUidle)(List(
		m2IDUidle -> Mux(io.IFU2in.ready,m2IDUidle,m2IDUwait_valid),
		m2IDUwait_valid -> Mux(io.IFU2in.valid,m2IDUwait_valid,m2IDUidle)
	))
    val IDU2in_data =Wire(new IDUtoEXU)
    IDU2in_data := io.IDU2in.bits
    val lastIDUsrc1 = RegNext(IDU2in_data.src1,0.U)
    val lastIDUsrc2 = RegNext(IDU2in_data.src2,0.U)
    val lastIDUalu_op = RegNext(IDU2in_data.alu_op,0.U)
    io.IDU2in.ready := (lastIDUsrc1 =/= IDU2in_data.src1) | (lastIDUsrc2 =/= IDU2in_data.src2) | (lastIDUalu_op =/= IDU2in_data.alu_op)



}