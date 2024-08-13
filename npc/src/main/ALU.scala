package npc 

import chisel3._
import chisel3.util._

class alu_io extends Bundle{
    val src1 = Input(UInt(32.W))
    val src2 = Input(UInt(32.W))
    val alu_op = Input(UInt(5.W))
    val result = Output(UInt(32.W))
}


class ALU extends Module{
    val io = IO(new alu_io)

    io.result := 0.U
    /*
    switch(io.alu_op)
    {
        is("b00000".U){ io.result := io.src1 + io.src2 } //add
        is("b00001".U){ io.result := io.src1 - io.src2 } //sub
        is("b00010".U){ io.result := io.src1 & io.src2 } //and
        is("b00011".U){ io.result := io.src1 | io.src2 } //or
        is("b00100".U){ io.result := io.src1 ^ io.src2 } //xor
        is("b00101".U){ io.result := io.src1 << io.src2(4,0) } //sll
        is("b00110".U){ io.result := io.src1 >> io.src2(4,0) } //srl
        is("b00111".U){ io.result := (io.src1.asSInt >> io.src2(4,0)).asUInt } //sra maybe error
        is("b01000".U){ io.result := (io.src1.asSInt < io.src2.asSInt).asUInt } //slt
        is("b01001".U){ io.result := (io.src1 < io.src2 ).asUInt } //sltu
        is("b01010".U){ io.result := (io.src1 === io.src2).asUInt } //beq
        is("b01011".U){ io.result := (io.src1 >= io.src2).asUInt } //bgeu
        is("b01100".U){ io.result := (io.src1.asSInt >= io.src2.asSInt).asUInt } //bge
        is("b01101".U){ io.result := (io.src1 =/= io.src2).asUInt } //bne
    }
    */
  // 使用中间变量来避免位拼接
  val addResult = io.src1 + io.src2
  val subResult = io.src1 - io.src2
  val andResult = io.src1 & io.src2
  val orResult = io.src1 | io.src2
  val xorResult = io.src1 ^ io.src2
  val sllResult = io.src1 << io.src2(4,0)
  val srlResult = io.src1 >> io.src2(4,0)
  val sraResult = (io.src1.asSInt >> io.src2(4,0)).asUInt
  val sltResult = (io.src1.asSInt < io.src2.asSInt)
  val sltuResult = (io.src1 < io.src2)
  val beqResult = (io.src1 === io.src2)
  val bgeuResult = (io.src1 >= io.src2)
  val bgeResult = (io.src1.asSInt >= io.src2.asSInt)
  val bneResult = (io.src1 =/= io.src2)

  // 使用 switch-case 语句来分配 io.result
  switch(io.alu_op) {
    is("b00000".U) { io.result := addResult } // add
    is("b00001".U) { io.result := subResult } // sub
    is("b00010".U) { io.result := andResult } // and
    is("b00011".U) { io.result := orResult } // or
    is("b00100".U) { io.result := xorResult } // xor
    is("b00101".U) { io.result := sllResult } // sll
    is("b00110".U) { io.result := srlResult } // srl
    is("b00111".U) { io.result := sraResult } // sra
    is("b01000".U) { io.result := sltResult.asUInt } // slt
    is("b01001".U) { io.result := sltuResult.asUInt } // sltu
    is("b01010".U) { io.result := beqResult.asUInt } // beq
    is("b01011".U) { io.result := bgeuResult.asUInt } // bgeu
    is("b01100".U) { io.result := bgeResult.asUInt } // bge
    is("b01101".U) { io.result := bneResult.asUInt } // bne
  }

}
