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

  IFU.io.in <> PC.io.out
  IDU.io.in <> IFU.io.out

  val pc_data = Wire(new PCtoIFU)
  pc_data := PC.io.out.bits
  io.pc := pc_data.pc

  val snpc = PC.io.snpc
  PC.io.dnpc = snpc
  io.inv_flag := 0.B

}


