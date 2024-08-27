package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class CLINT extends Module {
    val io = IO(new Bundle {
        val axi_ar = Flipped(new AXI_ar) 
        val axi_r = (new AXI_r)
        val axi_w = Flipped(new AXI_w) 
        val axi_aw = Flipped(new AXI_aw) 
        val axi_b = (new AXI_b)
    })

    val mtime = Reg(UInt(64.W)) 
    mtime := mtime + 1.U

    val rtc_raddr = Wire(UInt(32.W))
    val rtc_rdata = Wire(UInt(32.W))
    val rtc_rmask = Wire(UInt(4.W))
    val rtc_ren = Wire(Bool())
    rtc_raddr := 0.U
    rtc_rdata := 0.U
    rtc_rmask := 0.U
    rtc_ren := false.B

    when(rtc_raddr === 0xa0000048.S.asUInt && rtc_ren){
        rtc_rdata := mtime(31,0)
    }
    .elsewhen(rtc_raddr === 0xa000004c.S.asUInt && rtc_ren){
        rtc_rdata := mtime(63,32)
    }
    .otherwise{
        rtc_rdata := 0.U
    }

    //write part    
    io.axi_aw.awready := false.B
    io.axi_w.wready := false.B
    io.axi_b.bvalid := false.B
    io.axi_b.bresp := 0.U

    //read_delay
    val delay = Module(new DelayModule)
    delay.io.inData := 0.U
    delay.io.inValid :=0.U
    
    //AXI-lite read member
    val resp = Wire(UInt(2.W))
    resp := 0.U
    val rvalid_en = Wire(Bool())
    rvalid_en := false.B

    val rdata_reg = RegEnable(delay.io.outData ,0.U,io.axi_ar.arvalid)
    val rvalid_reg = RegEnable(rvalid_en,0.U, (rvalid_en | io.axi_r.rready))
    val rresp_reg = RegEnable(resp,0.U,io.axi_ar.arvalid)
    val arvalid_reg =RegNext(io.axi_ar.arvalid,0.U)

    io.axi_ar.arready := true.B
    io.axi_r.rdata := 2.U 
    io.axi_r.rresp := 3.U
    io.axi_r.rvalid := rvalid_reg

     //AXI-lite read part
    when(io.axi_ar.arvalid){ 
        rtc_raddr := io.axi_ar.raddr
        rtc_rmask := io.axi_ar.rmask
        rtc_ren := io.axi_ar.arvalid
        delay.io.inData := rtc_rdata
        // invalid的限制是在w和aw拉高时拉高一周期而已
        delay.io.inValid := Mux(arvalid_reg=/=io.axi_ar.arvalid & io.axi_ar.arvalid === 1.U,true.B,false.B)
        rvalid_en := Mux(delay.io.delayDone,true.B,false.B)

        when(((rtc_raddr >= 0xa0000048.S.asUInt)&(rtc_raddr <= 0xa000004f.S.asUInt))){
            when(rtc_rmask === 1.U){
            resp := Mux((rtc_rdata(31,8) === 0.U),1.U,0.U)
            }.elsewhen(rtc_rmask === 2.U){
            resp := Mux((rtc_rdata(31,16) === 0.U),1.U,0.U)
            }.elsewhen(rtc_rmask === 4.U){
            resp := 1.U
            }.otherwise{
            resp := 0.U
            }
        }.otherwise{
            resp := 0.U
        }
        when((io.axi_r.rready)&(io.axi_r.rvalid)){
            io.axi_r.rdata := rdata_reg 
            io.axi_r.rresp := rresp_reg 
            rvalid_en := false.B
        }.otherwise{
            io.axi_r.rdata := 0.U 
            io.axi_r.rresp := 0.U
        }
    }.otherwise{
        rvalid_en := false.B   
    }

}