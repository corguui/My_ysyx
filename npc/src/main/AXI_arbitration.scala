package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class AXI_arbiter extends Module {
    val io = IO(new Bundle {
        //SRAM
        val axi_ar = (new AXI_ar)
        val axi_r = Flipped(new AXI_r)
        val axi_aw = (new AXI_aw)
        val axi_w = (new AXI_w)
        val axi_b = Flipped(new AXI_b)
        /*
        //UART
        val uart_axi_ar = (new AXI_ar)
        val uart_axi_r = Flipped(new AXI_r)
        val uart_axi_aw = (new AXI_aw)
        val uart_axi_w = (new AXI_w)
        val uart_axi_b = Flipped(new AXI_b)
        */
        //RTC
        val rtc_axi_ar = (new AXI_ar)
        val rtc_axi_r = Flipped(new AXI_r)
        val rtc_axi_aw = (new AXI_aw)
        val rtc_axi_w = (new AXI_w)
        val rtc_axi_b = Flipped(new AXI_b)
        val lsu_axi_ar = Flipped(new AXI_ar)
        val lsu_axi_r = (new AXI_r)
        val lsu_axi_aw = Flipped(new AXI_aw)
        val lsu_axi_w = Flipped(new AXI_w)
        val lsu_axi_b = (new AXI_b)
        val lsu_addr = Input(UInt(32.W))
        val lsu_sta = Input(Bool())
        val uart_flag =Output(Bool())
        val ifu_axi_ar = Flipped(new AXI_ar)
        val ifu_axi_r = (new AXI_r)
        val ifu_axi_aw = Flipped(new AXI_aw)
        val ifu_axi_w = Flipped(new AXI_w)
        val ifu_axi_b = (new AXI_b)
        val ifu_sta = Input(Bool())
    })

    val axi_aw_null = Wire(new AXI_aw)
    axi_aw_null.awaddr := 0.U
    axi_aw_null.awvalid := false.B
    axi_aw_null.awid := 0.U
    axi_aw_null.awlen := 0.U
    axi_aw_null.awsize := 0.U
    axi_aw_null.awburst := 0.U

    val axi_w_null = Wire(new AXI_w)
    axi_w_null.wdata := 0.U
    axi_w_null.wstrb := 0.U
    axi_w_null.wvalid := false.B
    axi_w_null.wlast := false.B

    val axi_b_null = Wire(new AXI_b)
    axi_b_null.bid := 0.U
    axi_b_null.bresp := 0.U
    axi_b_null.bvalid := false.B

    val axi_ar_null = Wire(new AXI_ar)
    axi_ar_null.araddr := 0.U
    axi_ar_null.arvalid := false.B
    axi_ar_null.arid := 0.U
    axi_ar_null.arlen := 0.U
    axi_ar_null.arsize := 0.U
    axi_ar_null.arburst := 0.U

    val axi_r_null = Wire(new AXI_r)
    axi_r_null.rdata := 0.U
    axi_r_null.rresp := 0.U
    axi_r_null.rvalid := false.B
    axi_r_null.rlast := false.B
    axi_r_null.rid := 0.U

    io.axi_ar <> axi_ar_null
    io.axi_r.rready := false.B
    io.axi_w <> axi_w_null
    io.axi_aw <> axi_aw_null
    io.axi_b.bready := false.B

    /*
    io.uart_axi_ar <> axi_ar_null
    io.uart_axi_r.rready := false.B
    io.uart_axi_w <> axi_w_null
    io.uart_axi_aw <> axi_aw_null
    io.uart_axi_b.bready := false.B
    */

    io.rtc_axi_ar <> axi_ar_null
    io.rtc_axi_r.rready := false.B
    io.rtc_axi_w <> axi_w_null
    io.rtc_axi_aw <> axi_aw_null
    io.rtc_axi_b.bready := false.B

    io.lsu_axi_ar.arready := false.B
    io.lsu_axi_r <> axi_r_null
    io.lsu_axi_aw.awready := false.B
    io.lsu_axi_w.wready := false.B
    io.lsu_axi_b <> axi_b_null

    io.ifu_axi_ar.arready := false.B
    io.ifu_axi_r <> axi_r_null
    io.ifu_axi_aw.awready := false.B
    io.ifu_axi_w.wready := false.B
    io.ifu_axi_b <> axi_b_null

    io.uart_flag := false.B
    dontTouch(io.uart_flag)

    when(io.ifu_sta) {
        io.axi_ar <> io.ifu_axi_ar
        io.axi_aw <> io.ifu_axi_aw
        io.axi_w <> io.ifu_axi_w
        io.ifu_axi_r <> io.axi_r
        io.ifu_axi_b <> io.axi_b
    }.elsewhen(io.lsu_sta&&(!io.ifu_sta)){
        //uart
        //when((io.lsu_axi_aw.awaddr >= 0xa00003f8.S.asUInt) & (io.lsu_axi_aw.awaddr <= 0xa00003ff.S.asUInt)) {
        when((io.lsu_addr >= 0x10000000.S.asUInt) & (io.lsu_addr <= 0x10000fff.S.asUInt)) {
            io.uart_flag :=true.B
            /*
            io.uart_axi_ar <> io.lsu_axi_ar
            io.uart_axi_aw <> io.lsu_axi_aw
            io.uart_axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.uart_axi_r
            io.lsu_axi_b <> io.uart_axi_b
            */
            io.axi_ar <> io.lsu_axi_ar
            io.axi_aw <> io.lsu_axi_aw
            io.axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.axi_r
            io.lsu_axi_b <> io.axi_b
        }
        //MROM
        //.elsewhen(((io.lsu_axi_ar.araddr >= 0x80000000.S.asUInt) & (io.lsu_axi_ar.araddr <= 0x8fffffff.S.asUInt)) | ((io.lsu_axi_aw.awaddr >= 0x80000000.S.asUInt) & (io.lsu_axi_aw.awaddr <= 0x8fffffff.S.asUInt))) {
        .elsewhen(((io.lsu_addr >= 0x20000000.S.asUInt) & (io.lsu_addr <= 0x20000fff.S.asUInt))) {
            io.axi_ar <> io.lsu_axi_ar
            io.axi_aw <> io.lsu_axi_aw
            io.axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.axi_r
            io.lsu_axi_b <> io.axi_b
        }
        //SRAM
        .elsewhen(((io.lsu_addr >= 0x0f000000.S.asUInt) & (io.lsu_addr <= 0x0fffffff.S.asUInt))) {
            io.axi_ar <> io.lsu_axi_ar
            io.axi_aw <> io.lsu_axi_aw
            io.axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.axi_r
            io.lsu_axi_b <> io.axi_b
        }
        //RTC CLINT
        .elsewhen(((io.lsu_addr >= 0xa0000048.S.asUInt) & io.lsu_addr <= 0xa000004f.S.asUInt)){
            io.rtc_axi_ar <> io.lsu_axi_ar
            io.rtc_axi_aw <> io.lsu_axi_aw
            io.rtc_axi_w <> io.lsu_axi_w
            io.lsu_axi_r <> io.rtc_axi_r
            io.lsu_axi_b <> io.rtc_axi_b
        }
        .otherwise{
            io.lsu_axi_ar.arready := true.B
            io.lsu_axi_r.rdata := 0.U
            io.lsu_axi_r.rresp := 0.U
            io.lsu_axi_aw.awready := true.B
            io.lsu_axi_w.wready := true.B
            io.lsu_axi_b.bvalid := true.B
            io.lsu_axi_b.bresp := 0.U
        }
    }
}

