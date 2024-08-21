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

  val lfsrWidth = 2  // 使用2位LFSR
  val lfsrReg = RegInit(1.U(lfsrWidth.W))
  val taps = Seq(1, 2)  // 反馈抽头位置
  val nextLfsrValue = ((lfsrReg(0) ^ lfsrReg(1)) ## lfsrReg(1))  // 更新LFSR逻辑以确保完整覆盖4种状态
  lfsrReg := nextLfsrValue

  // 将LFSR值映射到4个特定的延迟周期
  val delays = VecInit(5.U, 10.U, 15.U, 20.U)
  val delayCycles = delays(lfsrReg)

  val counter = RegInit(0.U(5.W))
  val dataReg = Reg(UInt(32.W))

  // 设置初始输出
  io.outData := dataReg
  io.delayDone := false.B

  // 数据处理逻辑
  when(io.inValid && counter === 0.U) {
    dataReg := io.inData
    counter := delayCycles
  } .otherwise {
    when(counter > 0.U) {
      counter := counter - 1.U
      when(counter === 1.U) {
        io.delayDone := true.B
      }
    }
  }
}