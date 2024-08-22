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

class LSU extends Module {
    val io = IO(new Bundle {
        val ar_exu_mem = (new EXUtoMem_ar)
        val r_mem_exu = Flipped(new MemtoEXU_r)
        val w_exu_mem = (new EXUtoMem_w)
        val aw_exu_mem = (new EXUtoMem_aw)
        val b_mem_exu = Flipped(new MemtoEXU_b)
    })

    when(io.idu2in.bits.inst_type === 3.U)
    {
    io.out2ifu.valid :=  io.r_mem_exu.rready
    }
    .elsewhen(io.idu2in.bits.inst_type === 4.U)
    {
    io.out2ifu.valid :=  io.b_mem_exu.bready
    }


    //Mem read member
    val rready_reg = RegInit(0.U)
    val mem_raddr_reg = RegEnable(alu.io.result,0.U,io.idu2in.valid)
    val mem_rmask_reg = RegEnable(io.idu2in.bits.m_rmask,0.U,io.idu2in.valid)
    val mem_ren_reg = RegEnable(io.idu2in.bits.mem_ren,0.U,(io.idu2in.valid | io.r_mem_exu.rready))

    io.ar_exu_mem.rmask := 0.U
    io.ar_exu_mem.raddr := 0.U 
    //io.r_mem_exu.rready := rready_reg 
    //io.ar_exu_mem.arvalid := mem_ren_reg           

    //ar valid delay
    val idu2in_valid = RegNext(io.idu2in.valid,0.U)
    val delay_ar = Module(new DelayModule)
    delay_ar.io.inData := 0.U 
    delay_ar.io.inValid := 0.U 
    io.ar_exu_mem.arvalid := delay_ar.io.outData & mem_ren_reg 
    when(io.idu2in.bits.inst_type === 3.U)
    {
    delay_ar.io.inData := mem_ren_reg 
    delay_ar.io.inValid := idu2in_valid 
    }
    //r ready delay
    val rvalid_reg =RegNext(io.r_mem_exu.rvalid,0.U)
    val delay_r = Module(new DelayModule)
    delay_r.io.inData := 0.U
    delay_r.io.inValid := 0.U
    io.r_mem_exu.rready := delay_r.io.outData & rready_reg



    //Mem write member
    val bready_reg = RegInit(0.U)
    val mem_awaddr_reg = RegEnable(alu.io.result,0.U,io.idu2in.valid)
    val mem_wmask_reg = RegEnable(io.idu2in.bits.m_wmask,0.U,io.idu2in.valid)
    val mem_wdata_reg = RegEnable(io.idu2in.bits.src2,0.U,io.idu2in.valid)
    val mem_wen_reg = RegEnable(io.idu2in.bits.mem_wen,0.U,(io.idu2in.valid | io.b_mem_exu.bready))
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
    when(io.idu2in.bits.inst_type === 4.U)
    {
        delay_aw.io.inData := mem_wen_reg
        delay_aw.io.inValid := idu2in_valid
    }
    //w valid delay
    val delay_w = Module(new DelayModule)
    delay_w.io.inData := 0.U
    delay_w.io.inValid := 0.U
    //得延迟m_wen_reg一个周期,不然会打印两次
    io.w_exu_mem.wvalid := delay_w.io.outData & m_wen_reg_delay
    when(io.idu2in.bits.inst_type === 4.U)
    {
        delay_w.io.inData := mem_wen_reg
        delay_w.io.inValid := idu2in_valid
    }
    //b ready delay
    val bvalid_reg = RegNext(io.b_mem_exu.bvalid,0.U)
    val delay_b = Module(new DelayModule)
    delay_b.io.inData := 0.U
    delay_b.io.inValid := 0.U
    io.b_mem_exu.bready := delay_b.io.outData & bready_reg





    //IL type
            is(3.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
                when((io.ar_exu_mem.arready)&(io.ar_exu_mem.arvalid))
                {                    
                    io.ar_exu_mem.rmask := mem_rmask_reg
                    io.ar_exu_mem.raddr := mem_raddr_reg 
                    
                    when(io.r_mem_exu.rvalid === 1.U)
                    {
                       rready_reg  := 1.U
                       //m2IDUstate := m2IDUidle
                       //r delay
                        delay_r.io.inData := 1.U
                        delay_r.io.inValid := Mux(rvalid_reg =/= io.r_mem_exu.rvalid & io.r_mem_exu.rvalid === 1.U,0.U,1.U)  

                       when(io.r_mem_exu.rresp === 1.U)
                       {
                       io.reg_wen := reg_wen_reg
                       io.reg_waddr := reg_waddr_reg
                       when(io.idu2in.bits.il_us === true.B)
                       {
                        io.reg_wdata := io.r_mem_exu.rdata.asUInt
                       }.otherwise{
                        when(mem_rmask_reg === 1.U)
                        {
                            io.reg_wdata := Cat(Fill(24,io.r_mem_exu.rdata(7)),(io.r_mem_exu.rdata(7,0)).asSInt).asUInt
                        }.elsewhen(mem_rmask_reg === 2.U)
                        {
                            io.reg_wdata := Cat(Fill(16,io.r_mem_exu.rdata(15)),(io.r_mem_exu.rdata(15,0)).asSInt).asUInt
                        }.otherwise
                        {
                            io.reg_wdata := (io.r_mem_exu.rdata.asSInt).asUInt
                        }
                       }
                       ifu_outdata.dnpc := io.idu2in.bits.snpc
                       }.otherwise{
                        ifu_outdata.dnpc := 0x80000000.S.asUInt
                       }
                    }.otherwise{
                        rready_reg := 0.U
                    }
                }.otherwise{
                    io.ar_exu_mem.rmask := 0.U 
                    io.ar_exu_mem.raddr := 0.U 
                    rready_reg := 0.U
                    
                }


                
            }
            //s type
            is(4.U){
                alu.io.src1 := io.idu2in.bits.src1
                alu.io.src2 := io.idu2in.bits.imm
                alu.io.alu_op := io.idu2in.bits.alu_op
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
                    //m2IDUstate := m2IDUidle
                    //b ready delay
                    delay_b.io.inData := 1.U
                    delay_b.io.inValid := Mux(bvalid_reg =/= io.b_mem_exu.bvalid & io.b_mem_exu.bvalid === 1.U,0.U,1.U)  

                    when(io.b_mem_exu.bresp === 1.U)
                    {
                        ifu_outdata.dnpc := io.idu2in.bits.snpc
                    }.otherwise{
                        ifu_outdata.dnpc := 0x80000000.S.asUInt
                    }
                }.otherwise{
                    bready_reg := 0.U
                }
            }
}


