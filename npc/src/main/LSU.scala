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
        val lsu_addr = Output(UInt(32.W))
        val lsu_sta = Output(Bool())
    })

    /*
    //LSU to EXU
    val m2EXUidle :: m2EXUprocess :: Nil = Enum(2)
	//val m2EXUstate = RegInit(m2EXUidle)
    val m2EXUstate = RegInit(m2EXUidle)
	m2EXUstate :=MuxLookup(m2EXUstate,m2EXUidle)(List(
		m2EXUidle -> Mux(io.exu2in.valid,m2EXUprocess,m2EXUidle),
		m2EXUprocess -> Mux(io.exu2in.ready,m2EXUidle,m2EXUprocess)
	))
    */
    /*
	//LSU recive WBU 
	val wbu2s_idle :: wbu2s_wait_ready :: Nil = Enum(2)
	val wbu2s_state = RegInit(wbu2s_idle)
	wbu2s_state :=MuxLookup(wbu2s_state,wbu2s_idle)(List(
		wbu2s_idle -> Mux(io.out2wbu.valid,wbu2s_wait_ready,wbu2s_idle),
		wbu2s_wait_ready -> Mux(io.out2wbu.ready,wbu2s_idle,wbu2s_wait_ready)
	))
    */

    val in_data = Reg(new EXUtoLSU)
    val state = RegInit(false.B)
    io.exu2in.ready := false.B
    when(io.exu2in.valid)
    {
        io.exu2in.ready := true.B
        when(io.exu2in.ready & io.exu2in.valid){
            in_data := io.exu2in.bits
            state := true.B
        }.otherwise{
            state := false.B
            in_data := 0.U.asTypeOf(new EXUtoLSU)
        }
    }.otherwise{
        io.exu2in.ready := false.B
        in_data.mem_ren := false.B//确保en拉高一周期让 aw ar valid 拉高后可以拉低
        in_data.mem_wen := false.B
    }


    //两个寄存器记录aw w or ar 先发送过, 有才能说明发送过来的valid有效
    val ready_reg = RegInit(0.B)
    val ready_reg_1 = RegInit(0.B)
    val valid_reg = RegInit(0.B)
    /*
    when(in_data.inst_type === 3.U)
    {
    io.out2wbu.valid :=  io.lsu_axi_r.rready
    }
    .elsewhen(in_data.inst_type === 4.U)
    {
    io.out2wbu.valid :=  io.lsu_axi_b.bready
    }
    .otherwise
    {
    io.out2wbu.valid := valid_reg //(pc_reg =/= io.out2wbu.bits.pc)
    }
    */
    io.out2wbu.valid := valid_reg
    io.out2wbu.bits := 0.U.asTypeOf(new LSUtoWBU)

    val out_data = Reg(new LSUtoWBU)
    when(io.out2wbu.valid & io.out2wbu.ready)
    {
        io.out2wbu.bits := out_data
        valid_reg := false.B 
    }.otherwise{
        io.out2wbu.bits := 0.U.asTypeOf(new LSUtoWBU)
    }

    val exu2in_valid = RegNext(io.exu2in.valid,0.B)
    val exu2in_valid_reg = RegNext(exu2in_valid,0.U)
    //Mem read member
    //val rready_reg = RegInit(0.U)
    val mem_raddr_reg = RegEnable(in_data.alu_result,0.U,exu2in_valid)
    val mem_rmask_reg = RegEnable(in_data.m_rmask,0.U,exu2in_valid)
    val mem_ren_reg = RegEnable(in_data.mem_ren,0.U,(exu2in_valid | io.lsu_axi_ar.arready))

    io.lsu_axi_ar.araddr := 0.U 
    io.lsu_axi_ar.arid := 0.U
    io.lsu_axi_ar.arlen := 0.U
    io.lsu_axi_ar.arsize := 0.U
    io.lsu_axi_ar.arburst := 0.U

    io.lsu_axi_r.rready := false.B//rready_reg 
    io.lsu_axi_ar.arvalid := mem_ren_reg           

    //ar valid delay
    
    /*
    val delay_ar = Module(new DelayModule)
    delay_ar.io.inData := 0.U 
    delay_ar.io.inValid := 0.U 
    io.lsu_axi_ar.arvalid := delay_ar.io.outData & mem_ren_reg 
    when(in_data.inst_type === 3.U)
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
    */



    //Mem write member
    //val bready_reg = RegInit(0.U)
    val mem_awaddr_reg = RegEnable(in_data.alu_result,0.U,exu2in_valid)
    val mem_wstrb_reg = RegEnable(in_data.m_wmask,0.U,exu2in_valid)
    val mem_wdata_reg = RegEnable(in_data.src2,0.U,exu2in_valid)
    val awvalid_reg= RegEnable(in_data.mem_wen,0.U,(exu2in_valid | io.lsu_axi_aw.awready))
    val wvalid_reg = RegEnable(in_data.mem_wen,0.U,(exu2in_valid | io.lsu_axi_w.wready)) 
    io.lsu_axi_aw.awaddr := 0.U
    io.lsu_axi_aw.awid := 0.U
    io.lsu_axi_aw.awlen := 0.U
    io.lsu_axi_aw.awsize := 0.U
    io.lsu_axi_aw.awburst := 0.U
    io.lsu_axi_w.wdata := 0.U
    io.lsu_axi_w.wstrb := 0.U
    io.lsu_axi_w.wlast := 0.U
    io.lsu_axi_w.wvalid := wvalid_reg 
    io.lsu_axi_aw.awvalid := awvalid_reg 
    //io.lsu_axi_b.bready := bready_reg

    //aw valid delay
    /*
    val m_wen_reg_delay = RegNext(awvalid_reg,0.U)
    val delay_aw = Module(new DelayModule)
    delay_aw.io.inData := 0.U
    delay_aw.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.lsu_axi_aw.awvalid := delay_aw.io.outData &  m_wen_reg_delay
    when(in_data.inst_type === 4.U)
    {
        delay_aw.io.inData := awvalid_reg 
        delay_aw.io.inValid := exu2in_valid_reg
    }
    */

    //w valid delay
    /*
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.lsu_axi_w.wvalid := delay_w.io.outData & m_wen_reg_delay
    when(in_data.inst_type === 4.U)
    {
        delay_w.io.inData := wvalid_reg
        delay_w.io.inValid := exu2in_valid_reg
    }
    */

    //b ready delay
    /*
    val bvalid_reg = RegNext(io.lsu_axi_b.bvalid,0.U)
    val delay_b = Module(new DelayModule)
    delay_b.io.inData := 0.U
    delay_b.io.inValid := 0.U
    io.lsu_axi_b.bready := delay_b.io.outData & bready_reg
    */
    io.lsu_axi_b.bready := false.B 

    io.lsu_addr := RegEnable(in_data.alu_result,0.U,exu2in_valid)
    val sta_reg = RegEnable(exu2in_valid,false.B,io.lsu_axi_r.rready | io.lsu_axi_b.bready | exu2in_valid)
    io.lsu_sta := Mux(sta_reg && (in_data.inst_type === 3.U | in_data.inst_type === 4.U) ,true.B,false.B)

    when(state)
    {
            //IL type
            when(in_data.inst_type === 3.U){
                when((io.lsu_axi_ar.arready)&(io.lsu_axi_ar.arvalid))
                {                    
                    io.lsu_axi_ar.araddr := mem_raddr_reg 
                    ready_reg := 1.B
                }.otherwise{
                    io.lsu_axi_ar.araddr := 0.U 
                    ready_reg := 0.B
                }
                when(io.lsu_axi_r.rvalid & ready_reg)
                {
                        //rready_reg  := 1.U
                        //m2exustate := m2exuidle
                        //r delay
                        io.lsu_axi_r.rready := true.B
                        /*
                        delay_r.io.inData := 1.U
                        delay_r.io.inValid := Mux(rvalid_reg =/= io.lsu_axi_r.rvalid & io.lsu_axi_r.rvalid === 1.U,0.U,1.U)  
                        */
                    when(io.lsu_axi_r.rvalid & io.lsu_axi_r.rready)
                    {
                        out_data.mem_rresp := io.lsu_axi_r.rresp
                        state := false.B
                        valid_reg := true.B
                        when(in_data.il_us === true.B)
                        {
                           when(mem_rmask_reg === 1.U)
                           {
                            out_data.mem_rdata := Cat(Fill(24,0.U),io.lsu_axi_r.rdata(7,0)).asUInt
                           }
                           .elsewhen(mem_rmask_reg === 3.U)
                           {
                            out_data.mem_rdata := Cat(Fill(16,0.U),io.lsu_axi_r.rdata(15,0)).asUInt
                           }.otherwise
                           {
                            out_data.mem_rdata := 0.U
                           }
                        }.otherwise{
                        when(mem_rmask_reg === 1.U)
                        {
                           out_data.mem_rdata := Cat(Fill(24,io.lsu_axi_r.rdata(7)),(io.lsu_axi_r.rdata(7,0)).asSInt).asUInt
                        }.elsewhen(mem_rmask_reg === 3.U)
                        {
                            out_data.mem_rdata := Cat(Fill(16,io.lsu_axi_r.rdata(15)),(io.lsu_axi_r.rdata(15,0)).asSInt).asUInt
                        }.otherwise
                        {
                            out_data.mem_rdata := (io.lsu_axi_r.rdata.asSInt).asUInt
                        }
                        }
                    }.otherwise{
                        out_data.mem_rresp := 3.U
                        out_data.mem_rdata := 0.U
                        state := false.B
                    }
                }.otherwise{
                        //rready_reg := 0.U
                        io.lsu_axi_r.rready := false.B
                }
                    
            }
            //s type
            .elsewhen(in_data.inst_type === 4.U){
                when(io.lsu_axi_aw.awready & io.lsu_axi_aw.awvalid)
                {
                    io.lsu_axi_aw.awaddr := mem_awaddr_reg 
                    ready_reg := 1.B
                }.otherwise{
                    io.lsu_axi_aw.awaddr := 0.U
                    ready_reg := 0.B
                    //bready_reg := 0.U
                }
                when(io.lsu_axi_w.wready & io.lsu_axi_w.wvalid)
                {
                    io.lsu_axi_w.wdata := mem_wdata_reg 
                    io.lsu_axi_w.wstrb := mem_wstrb_reg 
                    ready_reg_1 := 1.B
                }.otherwise{
                    io.lsu_axi_w.wdata := 0.U
                    io.lsu_axi_w.wstrb := 0.U
                    ready_reg_1 := 0.B
                    //bready_reg := 0.U
                }
                when(io.lsu_axi_b.bvalid & ready_reg & ready_reg_1 )  
                {
                    //bready_reg := 1.U
                    //m2exustate := m2exuidle
                    //b ready delay
                    io.lsu_axi_b.bready := true.B 
                    when(io.lsu_axi_b.bvalid & io.lsu_axi_b.bready)
                    {
                    //delay_b.io.inData := 1.U
                    //delay_b.io.inValid := Mux(bvalid_reg =/= io.lsu_axi_b.bvalid & io.lsu_axi_b.bvalid === 1.U,0.U,1.U)  
                    out_data.mem_bresp := io.lsu_axi_b.bresp 
                    state := false.B
                    valid_reg := true.B
                    }.otherwise{
                    //delay_b.io.inData := 0.U
                    //delay_b.io.inValid := 0.U
                    out_data.mem_bresp := 3.U
                    state := false.B
                    valid_reg := true.B
                    }
                }.otherwise{
                    //bready_reg := 0.U
                    io.lsu_axi_b.bready := false.B 
                }
              }
              .otherwise{
                ready_reg := 0.B
                ready_reg_1 := 0.B
                state := false.B
                valid_reg := true.B
              }
            (out_data:Data).waiveAll :<>= (in_data:Data).waiveAll
        }
}


