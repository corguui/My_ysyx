package npc 

import chisel3._
import chisel3.util._

class IO_reg_read extends Bundle {
    val raddr_1 = Input(UInt(5.W))
    val rdata_1 = Output(UInt(32.W))
    val raddr_2 = Input(UInt(5.W))
    val rdata_2 = Output(UInt(32.W))
}

class Reg extends Module {
    val io = IO(new Bundle{
        val reg_read = (new IO_reg_read)
        val wen = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(32.W))
    })

    val reg =RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    when(io.wen&&io.waddr=/=0.U) {
        reg(io.waddr) := io.wdata
    }

    io.reg_read.rdata_1 := reg(io.reg_read.raddr_1)
    io.reg_read.rdata_2 := reg(io.reg_read.raddr_2)

}
