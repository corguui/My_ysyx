package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class AXI_r extends Bundle {
    val inst = Output(UInt(32.W))
    val rresp = Output(UInt(2.W))
    val rvalid = Output(Bool())
    val rready = Input(Bool())
}

class Inst_fetch extends Module {
    val io = IO(new Bundle {
        val axi_r = (new AXI_r)
        val axi_ar = Flipped(new AXI_ar)
    })

	// 声明DPI-C函数的BlackBox模块
  	class VlgPcRead extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
		val clk = Input(Clock())
      	val pc = Input(UInt(32.W))
      	val inst = Output(UInt(32.W))
		val pc_en = Input(Bool())
      })

		addPath("./src/main/VlgPcRead.v")
  	}

    val vlg_pc_read = Module(new VlgPcRead)
    vlg_pc_read.io.clk := clock
    vlg_pc_read.io.pc := 0.U
    vlg_pc_read.io.pc_en := false.B



    val resp = Wire(UInt(2.W))
    resp := 0.U
    val rvalid_en = Wire(Bool())
    rvalid_en := false.B
    val rdata_reg = RegEnable(vlg_pc_read.io.inst,0.U,io.axi_ar.arvalid)
    val rvalid_reg = RegNext(rvalid_en,false.B)
    val rresp_reg = RegEnable(resp,0.U,io.axi_ar.arvalid)

    io.axi_ar.arready := true.B
    io.axi_r.inst := 0.U 
    io.axi_r.rresp := 0.U 
    io.axi_r.rvalid := rvalid_reg

    when(io.axi_ar.arvalid) {
        rvalid_en := true.B
        vlg_pc_read.io.pc_en := true.B
        vlg_pc_read.io.pc := io.axi_ar.pc
        resp := 1.U
        when((io.axi_r.rready) & (io.axi_r.rvalid)) {
            io.axi_r.inst := rdata_reg
            io.axi_r.rresp := rresp_reg
        }.otherwise{
            io.axi_r.inst := rdata_reg 
            io.axi_r.rresp := 0.U 
        }
    }.otherwise {
        rvalid_en := false.B
    }


}
