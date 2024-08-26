package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class AXI_arbiter extends Module {
    val io = IO(new Bundle {
        val axi_ar = (new AXI_ar)
        val axi_r = Flipped(new AXI_r)
        val axi_aw = (new AXI_aw)
        val axi_w = (new AXI_w)
        val axi_b = Flipped(new AXI_b)
        val uart_axi_ar = (new AXI_ar)
        val uart_axi_r = Flipped(new AXI_r)
        val uart_axi_aw = (new AXI_aw)
        val uart_axi_w = (new AXI_w)
        val uart_axi_b = Flipped(new AXI_b)
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
    
    io.axi_ar.raddr := 0.U
    io.axi_ar.rmask := 0.U
    io.axi_ar.arvalid := false.B
    io.axi_r.rready := false.B
    io.axi_w.wdata := 0.U
    io.axi_w.wmask := 0.U
    io.axi_w.wvalid := false.B
    io.axi_aw.awaddr := 0.U
    io.axi_aw.awvalid := false.B
    io.axi_b.bready := false.B

    io.uart_axi_ar.raddr := 0.U
    io.uart_axi_ar.rmask := 0.U
    io.uart_axi_ar.arvalid := false.B
    io.uart_axi_r.rready := false.B
    io.uart_axi_w.wdata := 0.U
    io.uart_axi_w.wmask := 0.U
    io.uart_axi_w.wvalid := false.B
    io.uart_axi_aw.awaddr := 0.U
    io.uart_axi_aw.awvalid := false.B
    io.uart_axi_b.bready := false.B

    io.lsu_axi_ar.arready := false.B
    io.lsu_axi_r.rdata := 0.U
    io.lsu_axi_r.rresp := 0.U
    io.lsu_axi_r.rvalid := false.B
    io.lsu_axi_aw.awready := false.B
    io.lsu_axi_w.wready := false.B
    io.lsu_axi_b.bvalid := false.B
    io.lsu_axi_b.bresp := 0.U

    io.ifu_axi_ar.arready := false.B
    io.ifu_axi_r.rdata := 0.U
    io.ifu_axi_r.rresp := 0.U
    io.ifu_axi_r.rvalid := false.B
    io.ifu_axi_aw.awready := false.B
    io.ifu_axi_w.wready := false.B
    io.ifu_axi_b.bvalid := false.B
    io.ifu_axi_b.bresp := 0.U

    

    when(io.ifu_sta) {
        io.axi_ar <> io.ifu_axi_ar
        io.axi_aw <> io.ifu_axi_aw
        io.axi_w <> io.ifu_axi_w
        io.ifu_axi_r <> io.axi_r
        io.ifu_axi_b <> io.axi_b
    }.elsewhen(io.lsu_sta&&(!io.ifu_sta)){
        //uart
        when((io.lsu_axi_aw.awaddr >= 0xa00003f8.S.asUInt) & (io.lsu_axi_aw.awaddr <= 0xa00003ff.S.asUInt)) {
            io.uart_axi_ar <> io.lsu_axi_ar
            io.uart_axi_aw <> io.lsu_axi_aw
            io.uart_axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.uart_axi_r
            io.lsu_axi_b <> io.uart_axi_b
        }
        //SRAM
        .elsewhen(((io.lsu_axi_ar.raddr >= 0x80000000.S.asUInt) & (io.lsu_axi_ar.raddr <= 0x8fffffff.S.asUInt)) | ((io.lsu_axi_aw.awaddr >= 0x80000000.S.asUInt) & (io.lsu_axi_aw.awaddr <= 0x8fffffff.S.asUInt))) {
            io.axi_ar <> io.lsu_axi_ar
            io.axi_aw <> io.lsu_axi_aw
            io.axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.axi_r
            io.lsu_axi_b <> io.axi_b
        }.otherwise{
            io.lsu_axi_aw.awready := true.B
            io.lsu_axi_w.wready := true.B
            io.lsu_axi_b.bvalid := true.B
            io.lsu_axi_b.bresp := 0.U
        }
    }
}

