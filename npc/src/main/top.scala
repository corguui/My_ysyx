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

  IDU.io.in <> IFU.io.out

}


