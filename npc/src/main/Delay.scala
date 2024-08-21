package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class DelayModule extends Module {
  val io = IO(new Bundle {
    val inData = Input(UInt(32.W))
    val inValid = Input(Bool())
    val outData = Output(UInt(32.W))
    val delayDone = Output(Bool())
  })

  val shiftReg = RegInit(1.U(5.W))
  val randomDelay = Wire(UInt(5.W))
  randomDelay := 4.U + shiftReg // 随机延迟周期, 5到20周期
  val counter = RegInit(0.U(5.W))
  val dataReg = Reg(UInt(32.W)) // 存储输出数据
  val validReg = RegInit(false.B) // 延迟完成信号寄存器

  // 初始设置
  io.delayDone := false.B
  io.outData := 0.U
  when(counter === 0.U && io.inValid =/= 1.U) {
  {
    io.outData := dataReg
  }
  // 数据处理逻辑
  when(io.inValid && counter === 0.U) {
    // 当输入有效且计数器为0时，接受新数据并设置延迟
    dataReg := io.inData
    counter := randomDelay
    shiftReg := Cat(shiftReg(3,0),shiftReg(4) )
    validReg := true.B
  }.otherwise {
    when(counter > 0.U) {
      counter := counter - 1.U
      when(counter === 1.U) {
        io.delayDone := true.B // 延迟完成
      }
    }
  }

}