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

  val lfsrWidth = 2  // 用2位宽的LFSR，足够表示4个状态
  val lfsrReg = RegInit(1.U(lfsrWidth.W))
  val taps = Seq(1, 2)  // 设置反馈抽头，这里简单使用第2位和第1位异或
  val nextLfsrValue = (lfsrReg(0) ^ lfsrReg(1)) ## lfsrReg(lfsrWidth-1, 1)
  lfsrReg := nextLfsrValue

  // 根据LFSR的状态决定延迟周期
  val delays = VecInit(5.U, 10.U, 15.U, 20.U)
  val delayCycles = delays(lfsrReg)

  val counter = RegInit(0.U(5.W))
  val dataReg = Reg(UInt(32.W))

  // 初始设置
  io.outData := dataReg
  io.delayDone := false.B

  // 数据处理逻辑
  when(io.inValid && counter === 0.U) {
    dataReg := io.inData
    counter := delayCycles
  }.otherwise {
    when(counter > 0.U) {
      counter := counter - 1.U
      when(counter === 1.U) {
        io.delayDone := true.B
      }
    }
  }
}