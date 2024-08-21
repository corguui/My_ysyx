package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class DelayModule extends Module {
  val io = IO(new Bundle {
    val inData = Input(UInt(32.W))
    val inValid = Input(Bool())        // 新增数据有效输入信号
    val outData = Output(UInt(32.W))
    val delayDone = Output(Bool())
  })

  // 随机延迟周期, 5到20周期
  val randomDelay = 5 //+ chisel3.util.random.nextInt(16)
  val counter = RegInit(0.U(5.W))
  val dataReg = Reg(UInt(32.W))
  val validReg = RegInit(false.B)     // 延迟完成信号寄存器

  // 初始设置
  io.outData := 0.U
  io.delayDone := false.B

  // 数据处理逻辑
  when(io.inValid && counter === 0.U) {
    // 当输入数据有效且计数器为0时
    dataReg := io.inData
    counter := randomDelay.U
    validReg := true.B
  }.otherwise {
    when(counter > 0.U) {
      counter := counter - 1.U
      when(counter === 1.U) {
        io.delayDone := true.B
        io.outData := dataReg
      }
    }
    when(counter === 0.U) {
      validReg := false.B
    }
  }
}
