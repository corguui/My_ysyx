package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class AXI_arbiter externds Module {
    val io = IO(new Bundle {
        val axi_ar = (new AXI_ar)
        val axi_r = Flipped(new AXI_r)
        val axi_aw = (new AXI_aw)
        val axi_w = (new AXI_w)
        val axi_b = Flipped(new AXI_b)
        val lsu_axi_ar = Flipped(new AXI_ar)
        val lsu_axi_r = (new AXI_r)
        val lsu_axi_aw = Flipped(new AXI_aw)
        val lsu_axi_w = Flipped(new AXI_w)
        val lsu_axi_b = (new AXI_b)
        val lsu_sta = Input(Bool())
        val ifu_axi_ar = Flipped(new AXI_ar)
        val ifu_axi_r = (new AXI_r)
        val ifu_axi_aw = Flipped(new AXI_aw)
        val ifu_axi_w = Flipped(new AXI_w)
        val ifu_axi_b = (new AXI_b)
        val ifu_sta = Input(Bool())
    })
    
    val axi_ar_reg = Reg(new AXI_ar)
    val axi_aw_reg = Reg(new AXI_aw)
    val axi_w_reg = Reg(new AXI_w)

    io.axi_ar <> axi_ar_reg
    io.axi_aw <> axi_aw_reg
    io.axi_w <> axi_w_reg

    when(io.ifu_sta) {
        io.axi_ar <> io.ifu_axi_ar
        io.axi_aw <> io.ifu_axi_aw
        io.axi_w <> io.ifu_axi_w
        io.ifu_axi_r <> io.axi_r
        io.ifu_axi_b <> io.axi_b
    }.elsewhen(io.lsu_sta&&(!io.ifu_sta)){
        io.axi_ar <> io.lsu_axi_ar
        io.axi_aw <> io.lsu_axi_aw
        io.axi_w <> io.lsu_axi_w
        io.lsu_axi_r <> io.axi_r
        io.lsu_axi_b <> io.axi_b
    }.otherwise{
        io.axi_ar <> axi_ar_reg
        io.axi_aw <> axi_aw_reg
        io.axi_w <> axi_w_reg
    }
}