package npc 

import chisel3._
import chisel3.util._

class alu_io extends Bundle{
    val src1 = Input(UInt(32.W))
    val src2 = Input(UInt(32.W))
    val alu_op = Input(UInt(4.W))
    val result = Output(UInt(32.W))
}


class ALU extends Module{
    val io = IO(new alu_io)

    switch(data.alu_op)
    {
        is("b0000".U){ send_result.result := data.src1 + data.src2 } //add
        is("b0001".U){ send_result.result := data.src1 - data.src2 } //sub
        is("b0010".U){ send_result.result := data.src1 & data.src2 } //and
        is("b0011".U){ send_result.result := data.src1 | data.src2 } //or
        is("b0100".U){ send_result.result := data.src1 ^ data.src2 } //xor
        is("b0101".U){ send_result.result := data.src1 << data.src2(4,0) } //sll
        is("b0110".U){ send_result.result := data.src1 >> data.src2(4,0) } //srl
        is("b0111".U){ send_result.result := (data.src1.asSInt >> data.src2(4,0)).asUInt } //sra maybe error
        is("b1000".U){ send_result.result := (data.src1.asSInt < data.src2.asSInt).asUInt } //slt
        is("b1001".U){ send_result.result := (data.src1 < data.src2 ).asUInt } //sltu
        is("b1010".U){ send_result.result := (data.src1 === data.src2) } //beq
        is("b1011".U){ send_result.result := (data.src1 >= data.src2) } //bgeu
        is("b1100".U){ send_result.result := (data.src1.asSInt >= data.src2.asSInt).asUInt } //bge
        is("b1101".U){ send_result.result := (data.src1 =/= data.src2) } //bne
        is("b1110".U){ send_result.result := (data.src1.asSInt < data.src2.asSInt).asUInt } //blt
        is("b1111".U){ send_result.result := (data.src1 < data.src2) } //be
    }

}