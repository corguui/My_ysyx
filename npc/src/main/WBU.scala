package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class EXUtoIFU extends Bundle {
    val dnpc = Output(UInt(32.W))
}
class WBU extends Module {
    val io = IO(new Bundle {
        val lsu2in = Flipped(Decoupled(new LSUtoWBU))
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

    //WBU receive IFU
    val ifu2s_idle :: ifu2s_wait_ready :: Nil = Enum(2)
	val ifu2s_state = RegInit(ifu2s_idle)
	ifu2s_state :=MuxLookup(ifu2s_state,ifu2s_idle)(List(
		ifu2s_idle -> Mux(io.out2ifu.valid,ifu2s_wait_ready,ifu2s_idle),
		ifu2s_wait_ready -> Mux(io.out2ifu.ready,ifu2s_idle,ifu2s_wait_ready)
	))

    //WBU to IDU
    val m2LSUidle :: m2LSUprocess :: Nil = Enum(2)
	//val m2LSUstate = RegInit(m2LSUidle)
    val m2LSUstate = RegInit(m2LSUidle)
	m2LSUstate :=MuxLookup(m2LSUstate,m2LSUidle)(List(
		m2LSUidle -> Mux(io.lsu2in.valid,m2LSUprocess,m2LSUidle),
		m2LSUprocess -> Mux(io.lsu2in.ready,m2LSUidle,m2LSUprocess)
	))

    val ifu_outdata = Wire(new EXUtoIFU)
    val lastdnpc = RegNext(ifu_outdata.dnpc,0.U)
    //或是为了让他第一次能够启动ifu
    io.out2ifu.valid := ((lastdnpc =/= ifu_outdata.dnpc))//& (ifu_outdata.dnpc =/= 0x20000000.S.asUInt)) | (lastdnpc =/= ifu_outdata.dnpc && lastdnpc===0.U)//& (m2LSUstate === m2LSUprocess)
    io.out2ifu.bits := ifu_outdata

    io.lsu2in.ready := ( m2LSUstate===m2LSUidle )

    val reg_dnpc = 0x20000000.S.asUInt
    ifu_outdata.dnpc := reg_dnpc 
    io.reg_wdata := 0.U
    io.reg_wen := 0.U
    io.reg_waddr := 0.U
    io.csr_waddr_1 := 0.U
    io.csr_wdata_1 := 0.U
    io.csr_wen_1 := 0.U
    io.csr_waddr_2 := 0.U
    io.csr_wdata_2 := 0.U
    io.csr_wen_2 := 0.U

    when(m2LSUstate === m2LSUprocess)
    {
        switch(io.lsu2in.bits.inst_type)
        {
            //R type
            is(1.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc 
                io.reg_wdata := io.lsu2in.bits.alu_result
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //I type
            is(2.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc
                io.reg_wdata := io.lsu2in.bits.alu_result
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //IL type
            is(3.U){
                when(io.lsu2in.bits.mem_rresp === 1.U)
                {
                    io.reg_wen := io.lsu2in.bits.reg_wen 
                    io.reg_waddr := io.lsu2in.bits.reg_waddr 
                    io.reg_wdata := io.lsu2in.bits.mem_rdata 
                    ifu_outdata.dnpc := io.lsu2in.bits.snpc
                }.otherwise{
                    ifu_outdata.dnpc := 0x20000000.S.asUInt
                }
                
            }
            //s type
            is(4.U){
                    when(io.lsu2in.bits.mem_bresp === 1.U)
                    {
                        ifu_outdata.dnpc := io.lsu2in.bits.snpc
                    }.otherwise{
                        ifu_outdata.dnpc := 0x20000000.S.asUInt
                    }
            }
            //b type
            is(5.U){
                ifu_outdata.dnpc :=  Mux((io.lsu2in.bits.alu_result===1.U),(io.lsu2in.bits.pc+io.lsu2in.bits.imm),io.lsu2in.bits.snpc)
                //m2LSUstate := m2LSUidle
            }
            //u type
            is(6.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc
                io.reg_wdata := io.lsu2in.bits.imm
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //upc type
            is(7.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc
                io.reg_wdata := io.lsu2in.bits.alu_result 
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //j type
            is(8.U){
                io.reg_wdata := io.lsu2in.bits.snpc
                ifu_outdata.dnpc := io.lsu2in.bits.alu_result 
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //jr type
            is(9.U){
                io.reg_wdata := io.lsu2in.bits.snpc
                ifu_outdata.dnpc := io.lsu2in.bits.alu_result 
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                //m2LSUstate := m2LSUidle
            }
            //csrrw
            is(10.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc
                io.reg_wdata := io.lsu2in.bits.csr
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                io.csr_wdata_1 := io.lsu2in.bits.src1
                io.csr_wen_1  := true.B 
                switch(io.lsu2in.bits.imm) {
                is(0x341.U) { io.csr_waddr_1 := 0.U } // mepc
                is(0x342.U) { io.csr_waddr_1 := 1.U } // mcause
                is(0x300.U) { io.csr_waddr_1 := 2.U } // mstatus
                is(0x305.U) { io.csr_waddr_1 := 3.U } // mtvec
                }
                //m2LSUstate := m2LSUidle
            }
            //csrrs
            is(11.U){
                ifu_outdata.dnpc := io.lsu2in.bits.snpc
                io.reg_wdata := io.lsu2in.bits.csr
                io.reg_wen := io.lsu2in.bits.reg_wen
                io.reg_waddr := io.lsu2in.bits.reg_waddr
                io.csr_wdata_1 := io.lsu2in.bits.alu_result
                io.csr_wen_1  := true.B 
                switch(io.lsu2in.bits.imm) {
                is(0x341.U) { io.csr_waddr_1 := 0.U } // mepc
                is(0x342.U) { io.csr_waddr_1 := 1.U } // mcause
                is(0x300.U) { io.csr_waddr_1 := 2.U } // mstatus
                is(0x305.U) { io.csr_waddr_1 := 3.U } // mtvec
                }
                //m2LSUstate := m2LSUidle
            }
            //ecall
            is(12.U){
                io.csr_wdata_1 := io.lsu2in.bits.csr_a5    //mcause
                io.csr_wen_1  := true.B 
                io.csr_waddr_1 := 1.U
                io.csr_wdata_2 := io.lsu2in.bits.pc      //mepc
                io.csr_wen_2  := true.B 
                io.csr_waddr_2 := 0.U
                ifu_outdata.dnpc := io.lsu2in.bits.csr //mtvec
                //m2LSUstate := m2LSUidle
            }
            //mret
            is(13.U){
                io.csr_wdata_1 := io.lsu2in.bits.mstatus    //mstaus
                io.csr_wen_1  := true.B 
                io.csr_waddr_1 := 2.U
                ifu_outdata.dnpc := io.lsu2in.bits.csr //mepc
                //m2LSUstate := m2LSUidle
            }
        }
    }
}