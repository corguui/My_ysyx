package npc 

import chisel3._
import chisel3.util._

class IO_reg_read extends Bundle {
    val raddr_1 = Input(UInt(5.W))
    val rdata_1 = Output(UInt(32.W))
    val raddr_2 = Input(UInt(5.W))
    val rdata_2 = Output(UInt(32.W))
    val csr_raddr = Input(UInt(3.W))
    val csr_rdata = Output(UInt(32.W))
    val csr_a5 = Output(UInt(32.W))
    val mstatus = Output(UInt(32.W))
}

class Reg extends Module {
    val io = IO(new Bundle{
        val csr_wen_2 = Input(Bool())
        val csr_waddr_2 = Input(UInt(3.W))
        val csr_wdata_2 = Input(UInt(32.W))
        val reg_read = (new IO_reg_read)
        val wen = Input(Bool())
        val waddr = Input(UInt(5.W))
        val wdata = Input(UInt(32.W))
        val csr_wen_1 = Input(Bool())
        val csr_waddr_1 = Input(UInt(3.W))
        val csr_wdata_1 = Input(UInt(32.W))

    })

    val csr =RegInit(VecInit(Seq.fill(6)(0.U(32.W))))
    val reg =RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    //mvendorid
    dontTouch(csr)
    csr(4) := 0x79737978.S.asUInt
    //marchid

    csr(5) := 0x23060111.S.asUInt

    when(io.wen&&io.waddr=/=0.U) {
        reg(io.waddr) := io.wdata
    }
    when(io.csr_wen_1) {
        csr(io.csr_waddr_1) := io.csr_wdata_1
    }
    when(io.csr_wen_2) {
        csr(io.csr_waddr_2) := io.csr_wdata_2
    } 

    io.reg_read.rdata_1 := reg(io.reg_read.raddr_1)
    io.reg_read.rdata_2 := reg(io.reg_read.raddr_2)
    io.reg_read.csr_rdata := csr(io.reg_read.csr_raddr)
    io.reg_read.csr_a5 := reg(15.U) 
    io.reg_read.mstatus := csr(2) 

}
