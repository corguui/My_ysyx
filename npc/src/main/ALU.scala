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

}