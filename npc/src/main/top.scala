package npc 

import chisel3._
import chisel3.util._

class AXI extends Bundle {
    val awready = Input(Bool())
    val awvalid = Output(Bool())
    val awaddr = Output(UInt(32.W))
    val awid = Output(UInt(4.W))
    val awlen = Output(UInt(8.W))
    val awsize = Output(UInt(3.W))
    val awburst = Output(UInt(2.W))
    val wready = Input(Bool())
    val wvalid = Output(Bool())
    val wdata = Output(UInt(32.W))
    val wstrb = Output(UInt(4.W))
    val wlast = Output(Bool())
    val bready = Output(Bool())
    val bvalid = Input(Bool())
    val bresp = Input(UInt(2.W))
    val bid = Input(UInt(4.W))
    val arready = Input(Bool())
    val arvalid = Output(Bool())
    val araddr = Output(UInt(32.W))
    val arid = Output(UInt(4.W))
    val arlen = Output(UInt(8.W))
    val arsize = Output(UInt(3.W))
    val arburst = Output(UInt(2.W))
    val rready = Output(Bool())
    val rvalid = Input(Bool())
    val rresp = Input(UInt(2.W))
    val rdata = Input(UInt(32.W))
    val rlast = Input(Bool())
    val rid = Input(UInt(4.W))
}

class top extends Module {
  val io = IO(new Bundle {
    val interrupt = Input(Bool())
    val master = (new AXI) 
    val slave = Flipped(new AXI)
  })
  val IFU = Module(new IFU)
  val IDU = Module(new IDU)
  val EXU = Module(new EXU)
  val LSU = Module(new LSU)
  val WBU = Module(new WBU)
  val Reg = Module(new Reg)
  val AXI_arbiter = Module(new AXI_arbiter)
  val RTC = Module(new CLINT)
  /*
  val SRAM = Module(new SRAM)
  val UART = Module(new UART)
  */
  //val Mem = Module(new LSU_mem)
  //val Inst_fetch = Module(new Inst_fetch)
  val pc=Wire(UInt(32.W))
  val inv_flag = Wire(Bool())

  IDU.io.ifu2in <> IFU.io.out
  EXU.io.idu2in <> IDU.io.out2exu
  LSU.io.exu2in <> EXU.io.out2lsu
  WBU.io.lsu2in <> LSU.io.out2wbu
  IFU.io.exu2in <> WBU.io.out2ifu

  Reg.io.reg_read <> IDU.io.reg_data
  Reg.io.wen := WBU.io.reg_wen
  Reg.io.waddr := WBU.io.reg_waddr
  Reg.io.wdata := WBU.io.reg_wdata
  Reg.io.csr_wdata_1 := WBU.io.csr_wdata_1
  Reg.io.csr_wdata_2 := WBU.io.csr_wdata_2
  Reg.io.csr_waddr_1 := WBU.io.csr_waddr_1
  Reg.io.csr_waddr_2 := WBU.io.csr_waddr_2
  Reg.io.csr_wen_1 := WBU.io.csr_wen_1
  Reg.io.csr_wen_2 := WBU.io.csr_wen_2

  AXI_arbiter.io.ifu_axi_ar <> IFU.io.ifu_axi_ar
  AXI_arbiter.io.ifu_axi_aw <> IFU.io.ifu_axi_aw
  AXI_arbiter.io.ifu_axi_w <> IFU.io.ifu_axi_w
  IFU.io.ifu_axi_r <> AXI_arbiter.io.ifu_axi_r
  IFU.io.ifu_axi_b <> AXI_arbiter.io.ifu_axi_b
  AXI_arbiter.io.ifu_sta := IFU.io.ifu_sta

  AXI_arbiter.io.lsu_axi_ar <> LSU.io.lsu_axi_ar
  AXI_arbiter.io.lsu_axi_aw <> LSU.io.lsu_axi_aw
  AXI_arbiter.io.lsu_axi_w <> LSU.io.lsu_axi_w
  LSU.io.lsu_axi_r <> AXI_arbiter.io.lsu_axi_r
  LSU.io.lsu_axi_b <> AXI_arbiter.io.lsu_axi_b
  AXI_arbiter.io.lsu_sta := LSU.io.lsu_sta

/*
  SRAM.io.axi_ar <> AXI_arbiter.io.axi_ar
  SRAM.io.axi_aw <> AXI_arbiter.io.axi_aw
  SRAM.io.axi_w <> AXI_arbiter.io.axi_w
  AXI_arbiter.io.axi_r <> SRAM.io.axi_r
  AXI_arbiter.io.axi_b <> SRAM.io.axi_b

  UART.io.axi_ar <> AXI_arbiter.io.uart_axi_ar
  UART.io.axi_aw <> AXI_arbiter.io.uart_axi_aw
  UART.io.axi_w <> AXI_arbiter.io.uart_axi_w
  AXI_arbiter.io.uart_axi_r <> UART.io.axi_r
  AXI_arbiter.io.uart_axi_b <> UART.io.axi_b
  */

  RTC.io.axi_ar <> AXI_arbiter.io.rtc_axi_ar
  RTC.io.axi_aw <> AXI_arbiter.io.rtc_axi_aw
  RTC.io.axi_w <> AXI_arbiter.io.rtc_axi_w
  AXI_arbiter.io.rtc_axi_r <> RTC.io.axi_r
  AXI_arbiter.io.rtc_axi_b <> RTC.io.axi_b

  pc := IFU.io.out.bits.pc 
  inv_flag := IDU.io.inv_flag 
  dontTouch(inv_flag)


  val axi_ar = Wire(Flipped(new AXI_ar))
  val axi_aw = Wire(Flipped(new AXI_aw))
  val axi_w = Wire(Flipped(new AXI_w))
  val axi_b  = Wire((new AXI_b))
  val axi_r  = Wire((new AXI_r))
  axi_ar <> AXI_arbiter.io.axi_ar
  axi_aw <> AXI_arbiter.io.axi_aw
  axi_w  <> AXI_arbiter.io.axi_w
  AXI_arbiter.io.axi_r <> axi_r
  AXI_arbiter.io.axi_b <> axi_b
  /*
  AXI_arbiter.io.axi_aw.awready := io.master.awready  
  io.master.awvalid := AXI_arbiter.io.axi_aw.awvalid  
  io.master.awaddr := AXI_arbiter.io.axi_aw.awaddr  
  io.master.awid := AXI_arbiter.io.axi_aw.awid  
  io.master.awlen := AXI_arbiter.io.axi_aw.awlen  
  io.master.awsize := AXI_arbiter.io.axi_aw.awsize  
  io.master.awburst := AXI_arbiter.io.axi_aw.awburst  
  AXI_arbiter.io.axi_w.wready := io.master.wready  
  io.master.wvalid := AXI_arbiter.io.axi_w.wvalid  
  io.master.wdata := AXI_arbiter.io.axi_w.wdata  
  io.master.wstrb := AXI_arbiter.io.axi_w.wstrb  
  io.master.wlast := AXI_arbiter.io.axi_w.wlast  
  io.master.bready := AXI_arbiter.io.axi_b.bready  
  AXI_arbiter.io.axi_b.bvalid := io.master.bvalid  
  AXI_arbiter.io.axi_b.bresp := io.master.bresp  
  AXI_arbiter.io.axi_b.bid := io.master.bid  
  AXI_arbiter.io.axi_ar.arready := io.master.arready  
  */

  (io.master:Data).waiveAll :<>= (axi_ar:Data).waiveAll
  (io.master:Data).waiveAll :<>= (axi_aw:Data).waiveAll
  (io.master:Data).waiveAll :<>= (axi_w:Data).waiveAll
  (axi_b:Data).waiveAll :<>= (io.master:Data).waiveAll
  (axi_r:Data).waiveAll :<>= (io.master:Data).waiveAll
}

