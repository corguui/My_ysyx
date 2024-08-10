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
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
        val out2alu = Decoupled(new EXUtoALU)// 2 means to out to alu
    })

    //EXU recive ALU 
	val alu2s_idle :: alu2s_wait_ready :: Nil = Enum(2)
	val alu2s_state = RegInit(alu2s_idle)
	alu2s_state :=MuxLookup(alu2s_state,alu2s_idle)(List(
		alu2s_idle -> Mux(io.out2alu.valid,alu2s_wait_ready,alu2s_idle),
		alu2s_wait_ready -> Mux(io.out2alu.ready,alu2s_idle,alu2s_wait_ready)
	))
    
    val alu_data = Wire(new EXUtoALU)
    val lastsrc1 = RegNext(alu_data.src1,1.U)
	val lastsrc2 = RegNext(alu_data.src2,1.U)
	val lastalu_op = RegNext(alu_data.alu_op,1.U)

    io.out2alu.bits := alu_data
    io.out2alu.valid := (alu_data.src1 =/=lastsrc1 ) | (alu_data.src2 =/=lastsrc2 ) | (alu_data.alu_op =/=lastalu_op )


    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))

    io.idu2in.ready := ( m2IDUstate===m2IDUidle )
    when(m2IDUstate === m2IDUprocess)
    {
        io.idu2in.bits <> alu_data  
    }

}