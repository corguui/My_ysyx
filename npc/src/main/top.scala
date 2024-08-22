package npc 

import chisel3._
import chisel3.util._

class top extends Module {
  val io = IO(new Bundle {
    val pc = Output(UInt(32.W))
    val inv_flag = Output(Bool())
  })
  val IFU = Module(new IFU)
  val IDU = Module(new IDU)
  val EXU = Module(new EXU)
  val LSU = Module(new LSU)
  val WBU = Module(new WBU)
  val Reg = Module(new Reg)
  val Mem = Module(new LSU_mem)
  val Inst_fetch = Module(new Inst_fetch)

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

  Mem.io.ar_exu_mem <> LSU.io.ar_exu_mem
  LSU.io.r_mem_exu <> Mem.io.r_mem_exu
  Mem.io.w_exu_mem <> LSU.io.w_exu_mem
  Mem.io.aw_exu_mem <> LSU.io.aw_exu_mem
  LSU.io.b_mem_exu <> Mem.io.b_mem_exu

  Inst_fetch.io.axi_ar <> IFU.io.axi_ar
  IFU.io.axi_r <> Inst_fetch.io.axi_r
  Inst_fetch.io.axi_aw <> IFU.io.axi_aw
  Inst_fetch.io.axi_w <> IFU.io.axi_w
  IFU.io.axi_b <> Inst_fetch.io.axi_b
  

  io.pc := IFU.io.out.bits.pc 
  io.inv_flag := IDU.io.inv_flag 

}


