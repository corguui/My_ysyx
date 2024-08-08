package npc 

import chisel3._

class top extends Module {
  val io = IO(new Bundle {
    val out = Output(UInt(64.W))
  })
  val moduleA = Module(new a)
  moduleA.io.src1 := 0x2345.U
  moduleA.io.src0 := 0x1234.U
  io.out := moduleA.io.result
}


