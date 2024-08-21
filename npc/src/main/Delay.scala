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

  // LFSR 配置
  val lfsrWidth = 5         // LFSR 寄存器宽度，决定了随机数的范围
  val seed = 1.U(lfsrWidth.W)  // LFSR 的初始值
  val taps = Seq(0, 2)      // 反馈抽头位置，决定了随机序列的质量

  // 创建 LFSR 寄存器
  val lfsrReg = RegInit(seed)
  val updateLFSR = Wire(Bool())
  updateLFSR := false.B

  when(updateLFSR) {
    lfsrReg := lfsrReg(lfsrWidth - 1, 1) ## (taps.map(lfsrReg(_)).reduce(_ ^ _))
  }

  // 使用 LFSR 生成的值来确定延迟周期，范围为 5 到 20
  val randomDelay = 5.U + (lfsrReg(lfsrWidth-1, 0) % 16.U)

  val counter = RegInit(0.U(5.W))
  val dataReg = Reg(UInt(32.W)) // 存储输出数据

  // 初始设置
  io.delayDone := false.B
  io.outData := dataReg

  // 数据处理逻辑
  when(io.inValid && counter === 0.U) {
    // 当输入有效且计数器为0时，接受新数据并设置延迟
    dataReg := io.inData
    counter := randomDelay
    updateLFSR := true.B
  }.otherwise {
    updateLFSR := false.B
    when(counter > 0.U) {
      counter := counter - 1.U
      when(counter === 1.U) {
        io.delayDone := true.B // 延迟完成
      }
    }
  }
}