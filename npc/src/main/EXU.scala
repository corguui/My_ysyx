package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._



class EXU extends Module {
    val io = IO(new Bundle {
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
        val reg_wdata = Output(UInt(32.W))
        val reg_wen = Output(Bool())
        val reg_waddr = Output(UInt(5.W))
        val dnpc = Output(UInt(32.W))
        val snpc = Input(UInt(32.W))
        val pc   = Input(UInt(32.W))
    })


    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))

    class Mem extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
        val clock = Input(Clock())
        val m_waddr = Input(UInt(32.W))
        val m_wdata = Input(UInt(32.W))
        val m_wmask = Input(UInt(32.W))
        val m_wen = Input(Bool())
        val m_raddr = Input(UInt(32.W))
        val m_rdata = Output(UInt(32.W))
        val m_rmask = Input(UInt(32.W))
        val m_ren = Input(Bool())
      })

		addPath("./src/main/Mem.v")
  	}

    val mem = Module(new Mem)
    mem.io.m_waddr :=0.U
    mem.io.m_wdata :=0.U
    mem.io.m_wmask :=0.U
    mem.io.m_wen :=0.U
    mem.io.m_raddr :=0.U
    mem.io.m_rmask :=0.U
    mem.io.m_ren :=0.U
    mem.io.clock := clock
    val alu = Module(new ALU)
    alu.io.src1 :=0.U
    alu.io.src2 :=0.U
    alu.io.alu_op :=15.U
    io.dnpc := io.snpc 
    io.reg_wdata := 0.U
    io.reg_wen := 0.U
    io.reg_waddr := 0.U
    /*
    val data_all = Wire(new IDUtoEXU)
    data_all.alu_op := 15.U
    data_all.inst_type := 0.U
    data_all.imm := 0.U
    data_all.src1 := 0.U
    data_all.src2 := 0.U
    data_all.reg_wen := 0.U
    data_all.reg_waddr := 0.U
    data_all.m_wmask := 0.U
    data_all.m_rmask := 0.U
    data_all.mem_ren := 0.U
    data_all.mem_wen := 0.U
    */



    io.idu2in.ready := ( m2IDUstate===m2IDUidle )
    when(m2IDUstate === m2IDUprocess)
    {
        //io.idu2in.bits <> data_all  
        switch(io.idu2in.bits.inst_type)
        {
            //R type
            is(1.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.src2
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.reg_wdata := alu.io.result
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //I type
            is(2.U){
                alu.io.src1 := io.idu2in.bits.src1 
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.reg_wdata := alu.io.result
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //IL type
            is(3.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
                mem.io.m_raddr := alu.io.result
                mem.io.m_ren := io.idu2in.bits.mem_ren
                mem.io.m_rmask := io.idu2in.bits.m_rmask
                when((io.idu2in.bits.m_rmask===1.U)&&(io.idu2in.bits.il_us===false.B))
                {
                io.reg_wdata := ((Cat(Fill(24,mem.io.m_rdata(7)),mem.io.m_rdata(7,0))).asSInt).asUInt
                }.elsewhen((io.idu2in.bits.m_rmask===2.U)&&(io.idu2in.bits.il_us===false.B))
                {
                io.reg_wdata := ((Cat(Fill(16,mem.io.m_rdata(15)),mem.io.m_rdata(15,0))).asSInt).asUInt
                }.elsewhen((io.idu2in.bits.m_rmask===1.U)&&(io.idu2in.bits.il_us===true.B))
                {
                io.reg_wdata := ((Cat(0.U(24.W),mem.io.m_rdata(7,0)))).asUInt
                }.elsewhen((io.idu2in.bits.m_rmask===2.U)&&(io.idu2in.bits.il_us===true.B))
                {
                io.reg_wdata := ((Cat(0.U(16.W),mem.io.m_rdata(15,0)))).asUInt
                }.otherwise
                {
                io.reg_wdata := (mem.io.m_rdata.asSInt).asUInt
                }
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //s type
            is(4.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
                mem.io.m_waddr := alu.io.result
                mem.io.m_wdata := io.idu2in.bits.src2
                mem.io.m_wmask := io.idu2in.bits.m_wmask
                mem.io.m_wen := io.idu2in.bits.mem_wen
            }
            //b type
            is(5.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.src2
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.dnpc :=  Mux(alu.io.result===1.U,io.pc+io.idu2in.bits.imm,io.snpc)
            }
            //u type
            is(6.U){
                io.reg_wdata := io.idu2in.bits.imm
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //upc type
            is(7.U){
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.reg_wdata := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //j type
            is(8.U){
                io.reg_wdata := io.snpc
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.dnpc := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //jr type
            is(9.U){
                io.reg_wdata := io.snpc
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.src1
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.dnpc := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
        }
    }
}