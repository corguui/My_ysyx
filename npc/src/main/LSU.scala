package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._


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
        val lsu_axi_ar = (new AXI_ar)
        val lsu_axi_r = Flipped(new AXI_r)
        val lsu_axi_w = (new AXI_w)
        val lsu_axi_aw = (new AXI_aw)
        val lsu_axi_b = Flipped(new AXI_b)
        val lsu_sta = Output(Bool())
    })

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

    //val pc_reg = RegNext(io.out2wbu.bits.pc,0.U)
    val state_reg = RegNext(m2EXUstate,m2EXUidle)
    when(io.exu2in.bits.inst_type === 3.U)
    {
    io.out2wbu.valid :=  io.lsu_axi_r.rready
    }
    .elsewhen(io.exu2in.bits.inst_type === 4.U)
    {
    io.out2wbu.valid :=  io.lsu_axi_b.bready
    }
    .otherwise
    {
    io.out2wbu.valid := (state_reg === m2EXUprocess)//(pc_reg =/= io.out2wbu.bits.pc)
    }

    val exu2in_valid = RegNext(io.exu2in.valid,0.B)
    val exu2in_valid_reg = RegNext(exu2in_valid,0.U)
    //Mem read member
    val rready_reg = RegInit(0.U)
    val mem_raddr_reg = RegEnable(io.exu2in.bits.alu_result,0.U,exu2in_valid)
    val mem_rmask_reg = RegEnable(io.exu2in.bits.m_rmask,0.U,exu2in_valid)
    val mem_ren_reg = RegEnable(io.exu2in.bits.mem_ren,0.U,(exu2in_valid | io.lsu_axi_r.rready))

    io.lsu_axi_ar.araddr := 0.U 
    io.lsu_axi_ar.arid := 0.U
    io.lsu_axi_ar.arlen := 0.U
    io.lsu_axi_ar.arsize := 0.U
    io.lsu_axi_ar.arburst := 0.U

    //io.lsu_axi_r.rready := rready_reg 
    //io.lsu_axi_ar.arvalid := mem_ren_reg           

    //ar valid delay
    
    val delay_ar = Module(new DelayModule)
    delay_ar.io.inData := 0.U 
    delay_ar.io.inValid := 0.U 
    io.lsu_axi_ar.arvalid := delay_ar.io.outData & mem_ren_reg 
    when(io.exu2in.bits.inst_type === 3.U)
    {
    delay_ar.io.inData := mem_ren_reg 
    delay_ar.io.inValid := exu2in_valid_reg 
    }
    //r ready delay
    val rvalid_reg =RegNext(io.lsu_axi_r.rvalid,0.U)
    val delay_r = Module(new DelayModule)
    delay_r.io.inData := 0.U
    delay_r.io.inValid := 0.U
    io.lsu_axi_r.rready := delay_r.io.outData & rready_reg



    //Mem write member
    val bready_reg = RegInit(0.U)
    val mem_awaddr_reg = RegEnable(io.exu2in.bits.alu_result,0.U,exu2in_valid)
    val mem_wstrb_reg = RegEnable(io.exu2in.bits.m_wmask,0.U,exu2in_valid)
    val mem_wdata_reg = RegEnable(io.exu2in.bits.src2,0.U,exu2in_valid)
    val mem_wen_reg = RegEnable(io.exu2in.bits.mem_wen,0.U,(exu2in_valid | io.lsu_axi_b.bready))
    io.lsu_axi_aw.awaddr := 0.U
    io.lsu_axi_aw.awid := 0.U
    io.lsu_axi_aw.awlen := 0.U
    io.lsu_axi_aw.awsize := 0.U
    io.lsu_axi_aw.awburst := 0.U
    io.lsu_axi_w.wdata := 0.U
    io.lsu_axi_w.wstrb := 0.U
    io.lsu_axi_w.wlast := 0.U
    //io.lsu_axi_w.wvalid := mem_wen_reg 
    //io.lsu_axi_aw.awvalid := mem_wen_reg 
    //io.lsu_axi_b.bready := bready_reg

    //aw valid delay
    val m_wen_reg_delay = RegNext(mem_wen_reg,0.U)
    val delay_aw = Module(new DelayModule)
    delay_aw.io.inData := 0.U
    delay_aw.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.lsu_axi_aw.awvalid := delay_aw.io.outData &  m_wen_reg_delay
    when(io.exu2in.bits.inst_type === 4.U)
    {
        delay_aw.io.inData := mem_wen_reg
        delay_aw.io.inValid := exu2in_valid_reg
    }
    //w valid delay
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.lsu_axi_w.wvalid := delay_w.io.outData & m_wen_reg_delay
    when(io.exu2in.bits.inst_type === 4.U)
    {
        delay_w.io.inData := mem_wen_reg
        delay_w.io.inValid := exu2in_valid_reg
    }
    //b ready delay
    /*
    val bvalid_reg = RegNext(io.lsu_axi_b.bvalid,0.U)
    val delay_b = Module(new DelayModule)
    delay_b.io.inData := 0.U
    delay_b.io.inValid := 0.U
    io.lsu_axi_b.bready := delay_b.io.outData & bready_reg
    */
    io.lsu_axi_b.bready := false.B 

    val wbu_data = Reg(new LSUtoWBU)
    io.out2wbu.bits := wbu_data

    //val mem_rdata = RegInit(0.U)
    //val mem_rresp = RegInit(0.U)
    //val mem_bresp = RegInit(0.U)

    io.lsu_sta := Mux(io.lsu_axi_ar.arvalid | (io.lsu_axi_aw.awvalid && io.lsu_axi_w.wvalid) ,1.U,0.U)

    io.exu2in.ready := ( m2EXUstate===m2EXUidle )
    when(io.out2wbu.valid)
    {
        wbu_data.snpc := io.exu2in.bits.snpc
        wbu_data.pc := io.exu2in.bits.pc
        wbu_data.reg_waddr := io.exu2in.bits.reg_waddr
        wbu_data.reg_wen := io.exu2in.bits.reg_wen
        wbu_data.src1 := io.exu2in.bits.src1
        wbu_data.src2 := io.exu2in.bits.src2
        wbu_data.csr := io.exu2in.bits.csr
        wbu_data.csr_a5 := io.exu2in.bits.csr_a5
        wbu_data.mstatus := io.exu2in.bits.mstatus
        wbu_data.imm := io.exu2in.bits.imm
        wbu_data.inst_type := io.exu2in.bits.inst_type
        wbu_data.alu_result := io.exu2in.bits.alu_result
        //wbu_data.mem_rdata :=  mem_rdata 
        //wbu_data.mem_rresp :=  mem_rresp 
        //wbu_data.mem_bresp :=  mem_bresp 
    }
    when(m2EXUstate === m2EXUprocess)
    {
        //switch(io.exu2in.bits.inst_type){
            //IL type
            //is(3.U){
            when(io.exu2in.bits.inst_type === 3.U){
                when(/*(io.lsu_axi_ar.arready)&*/(io.lsu_axi_ar.arvalid))
                {                    
                    io.lsu_axi_ar.araddr := mem_raddr_reg 
                    when(io.lsu_axi_r.rvalid === 1.U)
                    {
                        rready_reg  := 1.U
                        //m2exustate := m2exuidle
                        //r delay
                        delay_r.io.inData := 1.U
                        delay_r.io.inValid := Mux(rvalid_reg =/= io.lsu_axi_r.rvalid & io.lsu_axi_r.rvalid === 1.U,0.U,1.U)  
                        wbu_data.mem_rresp := io.lsu_axi_r.rresp
                        when(io.exu2in.bits.il_us === true.B)
                        {
                           when(mem_rmask_reg === 1.U)
                           {
                            wbu_data.mem_rdata := Cat(Fill(24,0.U),io.lsu_axi_r.rdata(7,0)).asUInt
                           }
                           .elsewhen(mem_rmask_reg === 2.U)
                           {
                            wbu_data.mem_rdata := Cat(Fill(16,0.U),io.lsu_axi_r.rdata(15,0)).asUInt
                           }.otherwise
                           {
                            wbu_data.mem_rdata := 0.U
                           }
                        }.otherwise{
                        when(mem_rmask_reg === 1.U)
                        {
                           wbu_data.mem_rdata := Cat(Fill(24,io.lsu_axi_r.rdata(7)),(io.lsu_axi_r.rdata(7,0)).asSInt).asUInt
                        }.elsewhen(mem_rmask_reg === 2.U)
                        {
                            wbu_data.mem_rdata := Cat(Fill(16,io.lsu_axi_r.rdata(15)),(io.lsu_axi_r.rdata(15,0)).asSInt).asUInt
                        }.otherwise
                        {
                            wbu_data.mem_rdata := (io.lsu_axi_r.rdata.asSInt).asUInt
                        }
                        }
                    }.otherwise{
                        rready_reg := 0.U
                    }
                }.otherwise{
                    io.lsu_axi_ar.araddr := 0.U 
                    rready_reg := 0.U
                }
            }
            //s type
            //is(4.U){
            .elsewhen(io.exu2in.bits.inst_type === 4.U){
                when(/*io.lsu_axi_aw.awready &*/ io.lsu_axi_aw.awvalid)
                {
                    io.lsu_axi_aw.awaddr := mem_awaddr_reg 
                }.otherwise{
                    io.lsu_axi_aw.awaddr := 0.U
                    bready_reg := 0.U
                }
                when(/*io.lsu_axi_w.wready &*/ io.lsu_axi_w.wvalid)
                {
                    io.lsu_axi_w.wdata := mem_wdata_reg 
                    io.lsu_axi_w.wstrb := mem_wstrb_reg 
                }.otherwise{
                    io.lsu_axi_w.wdata := 0.U
                    io.lsu_axi_w.wstrb := 0.U
                    bready_reg := 0.U
                }
                when(io.lsu_axi_b.bvalid) 
                {
                    //bready_reg := 1.U
                    //m2exustate := m2exuidle
                    //b ready delay
                    io.lsu_axi_b.bready := 1.U
                    when(io.lsu_axi_b.bvalid & io.lsu_axi_b.bready)
                    {
                    //delay_b.io.inData := 1.U
                    //delay_b.io.inValid := Mux(bvalid_reg =/= io.lsu_axi_b.bvalid & io.lsu_axi_b.bvalid === 1.U,0.U,1.U)  
                    wbu_data.mem_bresp := io.lsu_axi_b.bresp 
                    }.otherwise{
                    //delay_b.io.inData := 0.U
                    //delay_b.io.inValid := 0.U
                    wbu_data.mem_bresp := 0.U
                    }
                }.otherwise{
                    //bready_reg := 0.U
                    io.lsu_axi_b.bvalid := 0.U
                }
              }
              .otherwise{
                m2EXUstate := m2EXUidle
              }
            //}
        }
}


