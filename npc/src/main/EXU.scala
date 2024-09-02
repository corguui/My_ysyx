package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._


class EXUtoLSU extends Bundle {
    val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val mem_ren = Output(Bool())
	val mem_wen = Output(Bool())
	val m_rmask = Output(UInt(32.W))
	val m_wmask = Output(UInt(32.W))
	val reg_waddr = Output(UInt(5.W))
	val reg_wen = Output(Bool())
	val src1  = Output(UInt(32.W))
	val src2  = Output(UInt(32.W))
	val csr   = Output(UInt(32.W))
	val csr_a5 = Output(UInt(32.W))
	val mstatus = Output(UInt(32.W))
	val imm   = Output(UInt(32.W))
	val inst_type = Output(UInt(4.W))
	val il_us = Output(Bool())
    val alu_result = Output(UInt(32.W))
}


class EXU extends Module {
    val io = IO(new Bundle {
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
        val out2lsu = Decoupled(new EXUtoLSU)
    })

    /*
    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	//val m2IDUstate = RegInit(m2IDUidle)
    val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))
    */
    /*
    //EXU receive EXU
	val lsu2s_idle :: lsu2s_wait_ready :: Nil = Enum(2)
	val lsu2s_state = RegInit(lsu2s_idle)
	lsu2s_state :=MuxLookup(lsu2s_state,lsu2s_idle)(List(
		lsu2s_idle -> Mux(io.out2lsu.valid,lsu2s_wait_ready,lsu2s_idle),
		lsu2s_wait_ready -> Mux(io.out2lsu.ready,lsu2s_idle,lsu2s_wait_ready)
	))
    */

    val alu = Module(new ALU)
    alu.io.src1 :=0.U
    alu.io.src2 :=0.U
    alu.io.alu_op :=15.U

    val valid_reg = RegInit(false.B)
    io.out2lsu.valid := valid_reg
    io.out2lsu.bits := 0.U.asTypeOf(new EXUtoLSU)

    val lsu_data = Reg(new EXUtoLSU)
    when(io.out2lsu.valid & io.out2lsu.ready){
        io.out2lsu.bits := lsu_data
        valid_reg := false.B
    }.otherwise{
        io.out2lsu.bits := 0.U.asTypeOf(new EXUtoLSU)
    }

    val in_data = Reg(new IDUtoEXU)
    val state = RegInit(false.B) 
    io.idu2in.ready := false.B
    when(io.idu2in.valid)
    {
        io.idu2in.ready := true.B
        when(io.idu2in.valid & io.idu2in.ready){
            in_data := io.idu2in.bits
            state := true.B
        }.otherwise{
            state := false.B
            in_data := 0.U.asTypeOf(new IDUtoEXU)
        }
    }.otherwise{
        io.idu2in.ready := false.B
    }

    lsu_data.mem_ren := false.B
    lsu_data.mem_wen := false.B

    when(state)
    {
        state := false.B
        valid_reg := true.B
        switch(in_data.inst_type)
        {
            //R type
            is(1.U){
                alu.io.src1 := in_data.src1
                alu.io.src2 := in_data.src2
                alu.io.alu_op := in_data.alu_op
            }
            //I type
            is(2.U){
                alu.io.src1 := in_data.src1 
                alu.io.src2 := in_data.imm
                alu.io.alu_op := in_data.alu_op
            }
            //IL type
            is(3.U){
                alu.io.src1 := in_data.src1
                alu.io.src2 := in_data.imm
                alu.io.alu_op := in_data.alu_op
            }
            //s type
            is(4.U){
                alu.io.src1 := in_data.src1
                alu.io.src2 := in_data.imm
                alu.io.alu_op := in_data.alu_op
            }
            //b type
            is(5.U){
                alu.io.src1 := in_data.src1
                alu.io.src2 := in_data.src2
                alu.io.alu_op := in_data.alu_op
            }
            //u type
            //upc type
            is(7.U){
                alu.io.src1 := in_data.imm
                alu.io.src2 := in_data.pc
                alu.io.alu_op := in_data.alu_op
            }
            //j type
            is(8.U){
                alu.io.src1 := in_data.imm
                alu.io.src2 := in_data.pc
                alu.io.alu_op := in_data.alu_op
            }
            //jr type
            is(9.U){
                alu.io.src1 := in_data.imm
                alu.io.src2 := in_data.src1
                alu.io.alu_op := in_data.alu_op
            }
            //csrrw
            //csrrs
            is(11.U){
                alu.io.src1 := in_data.csr
                alu.io.src2 := in_data.src1
                alu.io.alu_op := in_data.alu_op
            }
            //ecall
            //mret
        }
        lsu_data.alu_result := alu.io.result
        (lsu_data: Data).waiveAll :<>= (in_data: Data).waiveAll

    }
}