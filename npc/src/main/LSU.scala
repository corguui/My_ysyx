package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._


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
class LSUtoWBU extends Bundle {
    val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val reg_waddr = Output(UInt(5.W))
	val reg_wen = Output(Bool())
	val src1  = Output(UInt(32.W))
	val src2  = Output(UInt(32.W))
	val csr   = Output(UInt(32.W))
	val csr_a5 = Output(UInt(32.W))
	val mstatus = Output(UInt(32.W))
	val imm   = Output(UInt(32.W))
	val inst_type = Output(UInt(4.W))
    val mem_rdata = Output(UInt(32.W))
    val mem_bresp = Output(UInt(2.W))
    val mem_rresp = Output(UInt(2.W))
    val alu_result = Output(UInt(32.W))
}

class LSU extends Module {
    val io = IO(new Bundle {
        val exu2in = Flipped(Decoupled(new EXUtoLSU))
        val out2wbu = Decoupled(new LSUtoWBU)
        val ar_exu_mem = (new EXUtoMem_ar)
        val r_mem_exu = Flipped(new MemtoEXU_r)
        val w_exu_mem = (new EXUtoMem_w)
        val aw_exu_mem = (new EXUtoMem_aw)
        val b_mem_exu = Flipped(new MemtoEXU_b)
    })

    when(io.exu2in.bits.inst_type === 3.U)
    {
    io.out2wbu.valid :=  io.r_mem_exu.rready
    }
    .elsewhen(io.exu2in.bits.inst_type === 4.U)
    {
    io.out2wbu.valid :=  io.b_mem_exu.bready
    }
    .otherwise
    {
    io.out2wbu.valid := 1.U
    }
    //LSU to EXU
    val m2EXUidle :: m2EXUprocess :: Nil = Enum(2)
	//val m2EXUstate = RegInit(m2EXUidle)
    val m2EXUstate = RegInit(m2EXUidle)
	m2EXUstate :=MuxLookup(m2EXUstate,m2EXUidle)(List(
		m2EXUidle -> Mux(io.exu2in.valid,m2EXUprocess,m2EXUidle),
		m2EXUprocess -> Mux(io.exu2in.ready,m2EXUidle,m2EXUprocess)
	))

	//LSU recive WBU 
	val wbu2s_idle :: wbu2s_wait_ready :: Nil = Enum(2)
	val wbu2s_state = RegInit(wbu2s_idle)
	wbu2s_state :=MuxLookup(wbu2s_state,wbu2s_idle)(List(
		wbu2s_idle -> Mux(io.out2wbu.valid,wbu2s_wait_ready,wbu2s_idle),
		wbu2s_wait_ready -> Mux(io.out2wbu.ready,wbu2s_idle,wbu2s_wait_ready)
	))

    val state_reg = RegNext(m2EXUstate,m2EXUidle)
    //Mem read member
    val rready_reg = RegInit(0.U)
    val mem_raddr_reg = RegEnable(io.exu2in.bits.alu_result,0.U,io.exu2in.valid)
    val mem_rmask_reg = RegEnable(io.exu2in.bits.m_rmask,0.U,io.exu2in.valid)
    val mem_ren_reg = RegEnable(io.exu2in.bits.mem_ren,0.U,(io.exu2in.valid | io.r_mem_exu.rready))

    io.ar_exu_mem.rmask := 0.U
    io.ar_exu_mem.raddr := 0.U 
    //io.r_mem_exu.rready := rready_reg 
    //io.ar_exu_mem.arvalid := mem_ren_reg           

    //ar valid delay
    val exu2in_valid = RegNext(io.exu2in.valid,0.U)
    val delay_ar = Module(new DelayModule)
    delay_ar.io.inData := 0.U 
    delay_ar.io.inValid := 0.U 
    io.ar_exu_mem.arvalid := delay_ar.io.outData & mem_ren_reg 
    when(io.exu2in.bits.inst_type === 3.U)
    {
    delay_ar.io.inData := mem_ren_reg 
    delay_ar.io.inValid := exu2in_valid 
    }
    //r ready delay
    val rvalid_reg =RegNext(io.r_mem_exu.rvalid,0.U)
    val delay_r = Module(new DelayModule)
    delay_r.io.inData := 0.U
    delay_r.io.inValid := 0.U
    io.r_mem_exu.rready := delay_r.io.outData & rready_reg



    //Mem write member
    val bready_reg = RegInit(0.U)
    val mem_awaddr_reg = RegEnable(io.exu2in.bits.alu_result,0.U,io.exu2in.valid)
    val mem_wmask_reg = RegEnable(io.exu2in.bits.m_wmask,0.U,io.exu2in.valid)
    val mem_wdata_reg = RegEnable(io.exu2in.bits.src2,0.U,io.exu2in.valid)
    val mem_wen_reg = RegEnable(io.exu2in.bits.mem_wen,0.U,(io.exu2in.valid | io.b_mem_exu.bready))
    io.aw_exu_mem.awaddr := 0.U
    io.w_exu_mem.wdata := 0.U
    io.w_exu_mem.wmask := 0.U
    //io.w_exu_mem.wvalid := mem_wen_reg 
    //io.aw_exu_mem.awvalid := mem_wen_reg 
    //io.b_mem_exu.bready := bready_reg

    //aw valid delay
    val m_wen_reg_delay = RegNext(mem_wen_reg,0.U)
    val delay_aw = Module(new DelayModule)
    delay_aw.io.inData := 0.U
    delay_aw.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.aw_exu_mem.awvalid := delay_aw.io.outData &  m_wen_reg_delay
    when(io.exu2in.bits.inst_type === 4.U)
    {
        delay_aw.io.inData := mem_wen_reg
        delay_aw.io.inValid := exu2in_valid
    }
    //w valid delay
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.w_exu_mem.wvalid := delay_w.io.outData & m_wen_reg_delay
    when(io.exu2in.bits.inst_type === 4.U)
    {
        delay_w.io.inData := mem_wen_reg
        delay_w.io.inValid := exu2in_valid
    }
    //b ready delay
    val bvalid_reg = RegNext(io.b_mem_exu.bvalid,0.U)
    val delay_b = Module(new DelayModule)
    delay_b.io.inData := 0.U
    delay_b.io.inValid := 0.U
    io.b_mem_exu.bready := delay_b.io.outData & bready_reg

    val wbu_data = Reg(new LSUtoWBU)
    io.out2wbu.bits := wbu_data

    io.out2wbu.valid := (state_reg === m2EXUprocess)
    io.exu2in.ready := ( m2EXUstate===m2EXUidle )
    when(m2EXUstate === m2EXUprocess)
    {
        wbu_data <> io.exu2in.bits
        wbu_data.mem_rdata := 0.U 
        wbu_data.mem_rresp := 0.U 
        wbu_data.mem_bresp := 0.U
        switch(io.exu2in.bits.inst_type){
            //IL type
            is(3.U){
                when((io.ar_exu_mem.arready)&(io.ar_exu_mem.arvalid))
                {                    
                    io.ar_exu_mem.rmask := mem_rmask_reg
                    io.ar_exu_mem.raddr := mem_raddr_reg 
                    when(io.r_mem_exu.rvalid === 1.U)
                    {
                        rready_reg  := 1.U
                        //m2exustate := m2exuidle
                        //r delay
                        delay_r.io.inData := 1.U
                        delay_r.io.inValid := Mux(rvalid_reg =/= io.r_mem_exu.rvalid & io.r_mem_exu.rvalid === 1.U,0.U,1.U)  
                        wbu_data.mem_rresp := io.r_mem_exu.rresp
                        when(io.exu2in.bits.il_us === true.B)
                        {
                            wbu_data.mem_rdata := io.r_mem_exu.rdata.asUInt
                        }.otherwise{
                        when(mem_rmask_reg === 1.U)
                        {
                            wbu_data.mem_rdata := Cat(Fill(24,io.r_mem_exu.rdata(7)),(io.r_mem_exu.rdata(7,0)).asSInt).asUInt
                        }.elsewhen(mem_rmask_reg === 2.U)
                        {
                            wbu_data.mem_rdata := Cat(Fill(16,io.r_mem_exu.rdata(15)),(io.r_mem_exu.rdata(15,0)).asSInt).asUInt
                        }.otherwise
                        {
                            wbu_data.mem_rdata := (io.r_mem_exu.rdata.asSInt).asUInt
                        }
                        }
                    }.otherwise{
                    io.ar_exu_mem.rmask := 0.U 
                    io.ar_exu_mem.raddr := 0.U 
                    rready_reg := 0.U
                    }
                }
            //s type
            is(4.U){
                when(io.aw_exu_mem.awready & io.aw_exu_mem.awvalid)
                {
                    io.aw_exu_mem.awaddr := mem_awaddr_reg 
                }.otherwise{
                    io.aw_exu_mem.awaddr := 0.U
                    bready_reg := 0.U
                }
                when(io.w_exu_mem.wready & io.w_exu_mem.wvalid)
                {
                    io.w_exu_mem.wdata := mem_wdata_reg 
                    io.w_exu_mem.wmask := mem_wmask_reg 
                }.otherwise{
                    io.w_exu_mem.wdata := 0.U
                    io.w_exu_mem.wmask := 0.U
                    bready_reg := 0.U
                }
                when(io.w_exu_mem.wvalid & io.w_exu_mem.wready & io.aw_exu_mem.awready & io.aw_exu_mem.awvalid & io.b_mem_exu.bvalid) 
                {
                    bready_reg := 1.U
                    //m2exustate := m2exuidle
                    //b ready delay
                    delay_b.io.inData := 1.U
                    delay_b.io.inValid := Mux(bvalid_reg =/= io.b_mem_exu.bvalid & io.b_mem_exu.bvalid === 1.U,0.U,1.U)  
                    wbu_data.mem_bresp := io.b_mem_exu.bresp 
                }.otherwise{
                    bready_reg := 0.U
                }
              }
            }
        }
    }
}


