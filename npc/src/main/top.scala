package npc 

import chisel3._
import chisel3.util._

class top extends Module {
  val io = IO(new Bundle {
    val pc = Output(UInt(32.W))
    val inv_flag = Output(Bool())
  })
  val PC  = Module(new PC)
  val IFU = Module(new IFU)
  val IDU = Module(new IDU)
  val EXU = Module(new EXU)
  val Reg = Module(new Reg)

  IDU.io.ifu2in <> IFU.io.out
  EXU.io.idu2in <> IDU.io.out2exu

  Reg.io.reg_read <> IDU.io.reg_data
  Reg.io.wen := EXU.io.reg_wen
  Reg.io.waddr := EXU.io.reg_waddr
  Reg.io.wdata := EXU.io.reg_wdata

  IFU.io.pc := PC.io.pc
  EXU.io.snpc := PC.io.snpc
  EXU.io.pc := PC.io.pc
  PC.io.dnpc := EXU.io.dnpc

  io.pc := PC.io.pc
  io.inv_flag := IDU.io.inv_flag 

}


