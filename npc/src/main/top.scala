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
  val Reg = Module(new Reg)

  IDU.io.ifu2in <> IFU.io.out
  EXU.io.idu2in <> IDU.io.out2exu
  IFU.io.exu2in <> EXU.io.out2ifu

  Reg.io.reg_read <> IDU.io.reg_data
  Reg.io.wen := EXU.io.reg_wen
  Reg.io.waddr := EXU.io.reg_waddr
  Reg.io.wdata := EXU.io.reg_wdata
  Reg.io.csr_wdata_1 := EXU.io.csr_wdata_1
  Reg.io.csr_wdata_2 := EXU.io.csr_wdata_2
  Reg.io.csr_waddr_1 := EXU.io.csr_waddr_1
  Reg.io.csr_waddr_2 := EXU.io.csr_waddr_2
  Reg.io.csr_wen_1 := EXU.io.csr_wen_1
  Reg.io.csr_wen_2 := EXU.io.csr_wen_2


  io.pc := IFU.io.out.bits.pc 
  io.inv_flag := IDU.io.inv_flag 

}


