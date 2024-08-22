package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

/*
class Memory extends Module {
    val io = IO(new Bundle {
        val m_raddr = Input(UInt(32.W))
        val m_rdata = Output(UInt(32.W))
        val m_waddr = Input(UInt(32.W))
        val m_wdata = Input(UInt(32.W))
        val m_wmask = Input(UInt(3.W))
        val m_wen = Input(Bool())
        val m_ren = Input(Bool())
        val m_rmask = Input(UInt(3.W))
    })

    val mem = Mem(256, UInt(32.W))
    val raddr = io.m_raddr(7,0)  
    val waddr = io.m_waddr(7,0) 

    io.m_rdata := 0.U

    when(io.m_wen) {
    when(io.m_rmask ===1.U) {
        io.m_rdata := (mem.read(raddr.asUInt)  & 0x000000ff.U)                 
    }.elsewhen(io.m_rmask ===2.U) {
        io.m_rdata := (mem.read(raddr.asUInt)  & 0x0000ffff.U)
    }.otherwise {
        io.m_rdata := mem.read(raddr.asUInt) 
    }
    }

    when(io.m_wen) {
        when(io.m_wmask ===1.U) {
        mem.write(waddr.asUInt, io.m_wdata & 0x000000ff.U)                 
    }.elsewhen(io.m_wmask ===2.U) {
        mem.write(waddr.asUInt, io.m_wdata & 0x0000ffff.U)
    }.otherwise {
        mem.write(waddr.asUInt, io.m_wdata )
    }
    }


}
*/
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

    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	//val m2IDUstate = RegInit(m2IDUidle)
    val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))
    //EXU receive EXU
	val lsu2s_idle :: lsu2s_wait_ready :: Nil = Enum(2)
	val lsu2s_state = RegInit(lsu2s_idle)
	lsu2s_state :=MuxLookup(lsu2s_state,lsu2s_idle)(List(
		lsu2s_idle -> Mux(io.out2lsu.valid,lsu2s_wait_ready,lsu2s_idle),
		lsu2s_wait_ready -> Mux(io.out2lsu.ready,lsu2s_idle,lsu2s_wait_ready)
	))

    val state_reg = RegNext(m2IDUstate,m2IDUidle)
    val alu = Module(new ALU)
    alu.io.src1 :=0.U
    alu.io.src2 :=0.U
    alu.io.alu_op :=15.U

    val lsu_data = Reg(new EXUtoLSU)
    io.out2lsu.bits := lsu_data

    io.out2lsu.valid := (state_reg === m2IDUprocess)
    io.idu2in.ready := ( m2IDUstate===m2IDUidle )
    lsu_data.mem_ren := false.B
    lsu_data.mem_wen := false.B
    when(m2IDUstate === m2IDUprocess)
    {
        lsu_data.snpc := io.idu2in.bits.snpc
        lsu_data.pc := io.idu2in.bits.pc
        lsu_data.mem_ren := io.idu2in.bits.mem_ren
        lsu_data.mem_wen := io.idu2in.bits.mem_wen
        lsu_data.m_rmask := io.idu2in.bits.m_rmask
        lsu_data.m_wmask := io.idu2in.bits.m_wmask
        lsu_data.reg_waddr := io.idu2in.bits.reg_waddr
        lsu_data.reg_wen := io.idu2in.bits.reg_wen
        lsu_data.src1 := io.idu2in.bits.src1
        lsu_data.src2 := io.idu2in.bits.src2
        lsu_data.csr := io.idu2in.bits.csr
        lsu_data.csr_a5 := io.idu2in.bits.csr_a5
        lsu_data.mstatus := io.idu2in.bits.mstatus
        lsu_data.imm := io.idu2in.bits.imm
        lsu_data.inst_type := io.idu2in.bits.inst_type
        lsu_data.il_us := io.idu2in.bits.il_us
        switch(io.idu2in.bits.inst_type)
        {
            //R type
            is(1.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.src2
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //I type
            is(2.U){
                alu.io.src1 := io.idu2in.bits.src1 
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //IL type
            is(3.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //s type
            is(4.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //b type
            is(5.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.src2
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //u type
            //upc type
            is(7.U){
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //j type
            is(8.U){
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //jr type
            is(9.U){
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.src1
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //csrrw
            //csrrs
            is(11.U){
                alu.io.src1 := io.idu2in.bits.csr
                alu.io.src2 := io.idu2in.bits.src1
                alu.io.alu_op := io.idu2in.bits.alu_op
            }
            //ecall
            //mret
        }
        lsu_data.alu_result := alu.io.result
    }
}