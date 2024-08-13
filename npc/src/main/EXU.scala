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
class EXUtoIFU extends Bundle {
    val dnpc = Output(Bool())
}

class EXU extends Module {
    val io = IO(new Bundle {
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
        val out2ifu = Decoupled(new EXUtoIFU)
        val reg_wdata = Output(UInt(32.W))
        val reg_wen = Output(Bool())
        val reg_waddr = Output(UInt(5.W))
        val csr_waddr_1 = Output(UInt(2.W))
        val csr_wdata_1 = Output(UInt(32.W))
        val csr_wen_1 = Output(Bool())
        val csr_waddr_2 = Output(UInt(2.W))
        val csr_wdata_2 = Output(UInt(32.W))
        val csr_wen_2 = Output(Bool())
    })

    //EXU receive IFU
    val ifu2s_idle :: ifu2s_wait_ready :: Nil = Enum(2)
	val ifu2s_state = RegInit(ifu2s_idle)
	ifu2s_state :=MuxLookup(ifu2s_state,ifu2s_idle)(List(
		ifu2s_idle -> Mux(io.out2ifu.valid,ifu2s_wait_ready,ifu2s_idle),
		ifu2s_wait_ready -> Mux(io.out2ifu.ready,ifu2s_idle,ifu2s_wait_ready)
	))

    val ifu_outdata = Wire(new EXUtoIFU)
    val lastdnpc = RegNext(ifu_outdata.dnpc,0.U)
    io.out2ifu.valid := (lastdnpc =/= ifu_outdata.dnpc)
    io.out2ifu.bits := ifu_outdata


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

    //val mem = Module(new Memory)   //yosys
    val mem = Module(new Mem)
    mem.io.m_waddr :=0.U
    mem.io.m_wdata :=0.U
    mem.io.m_wmask :=0.U
    mem.io.m_wen :=0.U
    mem.io.m_raddr :=0.U
    mem.io.m_rmask :=0.U
    mem.io.m_ren :=0.U
    mem.io.clock := clock  //yosys 要注释
    val alu = Module(new ALU)
    alu.io.src1 :=0.U
    alu.io.src2 :=0.U
    alu.io.alu_op :=15.U
    ifu_outdata.dnpc := 0.U 
    io.reg_wdata := 0.U
    io.reg_wen := 0.U
    io.reg_waddr := 0.U
    io.csr_waddr_1 := 0.U
    io.csr_wdata_1 := 0.U
    io.csr_wen_1 := 0.U
    io.csr_waddr_2 := 0.U
    io.csr_wdata_2 := 0.U
    io.csr_wen_2 := 0.U
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
        ifu_outdata.dnpc := io.idu2in.bits.snpc 
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
                ifu_outdata.dnpc :=  Mux((alu.io.result===1.U),(io.idu2in.bits.pc+io.idu2in.bits.imm),io.idu2in.bits.snpc)
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
                alu.io.src2 := io.idu2in.bits.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.reg_wdata := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //j type
            is(8.U){
                io.reg_wdata := io.idu2in.bits.snpc
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.pc
                alu.io.alu_op := io.idu2in.bits.alu_op
                ifu_outdata.dnpc := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //jr type
            is(9.U){
                io.reg_wdata := io.idu2in.bits.snpc
                alu.io.src1 := io.idu2in.bits.imm
                alu.io.src2 := io.idu2in.bits.src1
                alu.io.alu_op := io.idu2in.bits.alu_op
                ifu_outdata.dnpc := alu.io.result 
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //csrrw
            is(10.U){
                io.reg_wdata := io.idu2in.bits.csr
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
                io.csr_wdata_1 := io.idu2in.bits.src1
                io.csr_wen_1  := true.B 
                switch(io.idu2in.bits.imm) {
                is(0x341.U) { io.csr_waddr_1 := 0.U } // mepc
                is(0x342.U) { io.csr_waddr_1 := 1.U } // mcause
                is(0x300.U) { io.csr_waddr_1 := 2.U } // mstatus
                is(0x305.U) { io.csr_waddr_1 := 3.U } // mtvec
                }
            }
            //csrrs
            is(11.U){
                io.reg_wdata := io.idu2in.bits.csr
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
                alu.io.src1 := io.idu2in.bits.csr
                alu.io.src2 := io.idu2in.bits.src1
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.csr_wdata_1 := alu.io.result
                io.csr_wen_1  := true.B 
                switch(io.idu2in.bits.imm) {
                is(0x341.U) { io.csr_waddr_1 := 0.U } // mepc
                is(0x342.U) { io.csr_waddr_1 := 1.U } // mcause
                is(0x300.U) { io.csr_waddr_1 := 2.U } // mstatus
                is(0x305.U) { io.csr_waddr_1 := 3.U } // mtvec
                }
            }
            //ecall
            is(12.U){
                io.csr_wdata_1 := io.idu2in.bits.csr_a5    //mcause
                io.csr_wen_1  := true.B 
                io.csr_waddr_1 := 1.U
                io.csr_wdata_2 := io.idu2in.bits.pc      //mepc
                io.csr_wen_2  := true.B 
                io.csr_waddr_2 := 0.U
                ifu_outdata.dnpc := io.idu2in.bits.csr //mtvec
            }
            //mret
            is(13.U){
                io.csr_wdata_1 := io.idu2in.bits.mstatus    //mstaus
                io.csr_wen_1  := true.B 
                io.csr_waddr_1 := 2.U
                ifu_outdata.dnpc := io.idu2in.bits.csr //mepc
            }
        }
    }
}