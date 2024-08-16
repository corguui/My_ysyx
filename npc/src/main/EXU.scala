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
class EXUtoMem_ar extends Bundle {
    val raddr = Output(UInt(32.W))
    val rmask = Output(UInt(3.W))
    val arvalid = Output(Bool())
    val arready = Input(Bool())
}
class EXUtoMem_w extends Bundle {
    val wdata = Output(UInt(32.W))
    val wmask = Output(UInt(3.W))
    val wvalid = Output(Bool())
    val wready = Input(Bool())
}
class EXUtoMem_aw extends Bundle {
    val awaddr = Output(UInt(32.W))
    val awvalid = Output(Bool())
    val awready = Input(Bool())
}


class EXUtoIFU extends Bundle {
    val dnpc = Output(UInt(32.W))
}

class EXU extends Module {
    val io = IO(new Bundle {
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
        val out2ifu = Decoupled(new EXUtoIFU)
        val ar_exu_mem = (new EXUtoMem_ar)
        val r_mem_exu = Flipped(new MemtoEXU_r)
        val w_exu_mem = (new EXUtoMem_w)
        val aw_exu_mem = (new EXUtoMem_aw)
        val b_mem_exu = Flipped(new MemtoEXU_b)
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
    when(io.idu2in.bits.inst_type =/= 3.U)
    {
    io.out2ifu.valid := (lastdnpc =/= ifu_outdata.dnpc)
    }.elsewhen(io.idu2in.bits.inst_type === 4.U)
    {
    io.out2ifu.valid :=  io.b_mem_exu.bready
    }.otherwise
    {
    io.out2ifu.valid :=  io.r_mem_exu.rready
    }
    io.out2ifu.bits := ifu_outdata


    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))


    

    //val mem = Module(new Memory)   //yosys

    val alu = Module(new ALU)
    alu.io.src1 :=0.U
    alu.io.src2 :=0.U
    alu.io.alu_op :=15.U
    ifu_outdata.dnpc := 0x80000000.S.asUInt
    io.reg_wdata := 0.U
    io.reg_wen := 0.U
    io.reg_waddr := 0.U
    io.csr_waddr_1 := 0.U
    io.csr_wdata_1 := 0.U
    io.csr_wen_1 := 0.U
    io.csr_waddr_2 := 0.U
    io.csr_wdata_2 := 0.U
    io.csr_wen_2 := 0.U

    io.ar_exu_mem.arvalid := false.B
    io.ar_exu_mem.rmask := 0.U
    io.ar_exu_mem.raddr := 0.U
    io.r_mem_exu.rready := 0.U

    io.aw_exu_mem.awaddr := 0.U
    io.aw_exu_mem.awvalid := 0.U
    io.w_exu_mem.wdata := 0.U
    io.w_exu_mem.wmask := 0.U
    io.w_exu_mem.wvalid := 0.U

    io.b_mem_exu.bready := 0.U

    val reg_ens_en = Wire(Bool())
    reg_ens_en := false.B
    val reg_wen_reg = RegEnable(io.idu2in.bits.reg_wen,0.U,reg_ens_en)
    val mem_ren_reg = RegEnable(io.idu2in.bits.mem_ren,0.U,reg_ens_en)

    val memwen_reg_en = Wire(Bool())
    memwen_reg_en := false.B
    val mem_wen_reg = RegEnable(io.idu2in.bits.mem_wen,0.U,memwen_reg_en)


    io.idu2in.ready := ( m2IDUstate===m2IDUidle )
    when(m2IDUstate === m2IDUprocess)
    {
        switch(io.idu2in.bits.inst_type)
        {
            //R type
            is(1.U){
                ifu_outdata.dnpc := io.idu2in.bits.snpc 
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.src2
                //alu.io.src2 := io.idu2in.bits.imm // error difftest test
                alu.io.alu_op := io.idu2in.bits.alu_op
                io.reg_wdata := alu.io.result
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //I type
            is(2.U){
                ifu_outdata.dnpc := io.idu2in.bits.snpc
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
                io.reg_wen := reg_wen_reg 
                //io.reg_wen := Mux(io.idu2in.bits.reg_wen === 1.U,io.idu2in.bits.reg_wen,reg_wen_reg)
                //io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr

                //只有一次,如果发送后接收不到再次发送应该是0.U了
                io.ar_exu_mem.rmask := io.idu2in.bits.m_rmask
                io.ar_exu_mem.raddr := alu.io.result 
                io.ar_exu_mem.arvalid := Mux(io.idu2in.bits.mem_ren ===1.U,io.idu2in.bits.mem_ren,mem_ren_reg)               
                when(io.ar_exu_mem.arready === 1.U)
                {
                    when((io.r_mem_exu.rvalid === 1.U)&(io.r_mem_exu.rresp === 1.U))
                    {
                       io.r_mem_exu.rready := 1.U
                       when(io.idu2in.bits.il_us === false.B)
                       {
                        io.reg_wdata := io.r_mem_exu.rdata.asSInt.asUInt
                       }.otherwise{
                        io.reg_wdata := io.r_mem_exu.rdata.asUInt
                       }
                       ifu_outdata.dnpc := io.idu2in.bits.snpc
                       /*
                       when((io.idu2in.bits.m_rmask===1.U)&&(io.idu2in.bits.il_us===false.B))
                       {
                       io.reg_wdata := ((Cat(Fill(24,io.mem.m_rdata(7)),io.mem.m_rdata(7,0))).asSInt).asUInt
                       }.elsewhen((io.idu2in.bits.m_rmask===2.U)&&(io.idu2in.bits.il_us===false.B))
                       {
                       io.reg_wdata := ((Cat(Fill(16,io.mem.m_rdata(15)),io.mem.m_rdata(15,0))).asSInt).asUInt
                       }.elsewhen((io.idu2in.bits.m_rmask===1.U)&&(io.idu2in.bits.il_us===true.B))
                       {
                       io.reg_wdata := ((Cat(0.U(24.W),io.mem.m_rdata(7,0)))).asUInt
                       }.elsewhen((io.idu2in.bits.m_rmask===2.U)&&(io.idu2in.bits.il_us===true.B))
                       {
                       io.reg_wdata := ((Cat(0.U(16.W),io.mem.m_rdata(15,0)))).asUInt
                       }.otherwise
                       {
                       io.reg_wdata := (io.mem.m_rdata.asSInt).asUInt
                       }
                       */
                    }.otherwise{
                        io.r_mem_exu.rready := 0.U
                    }
                }.otherwise{
                   reg_ens_en := true.B
                }


                
            }
            //s type
            is(4.U){
                ifu_outdata.dnpc := io.idu2in.bits.snpc
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op

                io.aw_exu_mem.awaddr := alu.io.result
                io.aw_exu_mem.awvalid := mem_wen_reg//Mux(io.idu2in.bits.mem_wen === 1.U,io.idu2in.bits.mem_wen,memwen_reg_en)
                io.w_exu_mem.wdata := io.idu2in.bits.src2
                io.w_exu_mem.wmask := io.idu2in.bits.m_wmask
                io.w_exu_mem.wvalid := Mux(io.idu2in.bits.mem_wen === 1.U,io.idu2in.bits.mem_wen,memwen_reg_en)
                memwen_reg_en := true.B
                when(io.b_mem_exu.bvalid === 1.U)
                {
                    io.b_mem_exu.bready := 1.U
                }.otherwise{
                    io.b_mem_exu.bready := 0.U              
                }

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
                ifu_outdata.dnpc := io.idu2in.bits.snpc
                io.reg_wdata := io.idu2in.bits.imm
                io.reg_wen := io.idu2in.bits.reg_wen
                io.reg_waddr := io.idu2in.bits.reg_waddr
            }
            //upc type
            is(7.U){
                ifu_outdata.dnpc := io.idu2in.bits.snpc
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
                ifu_outdata.dnpc := io.idu2in.bits.snpc
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
                ifu_outdata.dnpc := io.idu2in.bits.snpc
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