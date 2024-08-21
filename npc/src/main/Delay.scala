package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class DelayModule extends Module {
  val io = IO(new Bundle {
    val inData = Input(UInt(32.W))
    val outData = Output(UInt(32.W))
    val delayDone = Output(Bool())
  })

  // 初始设置延迟信号为 false
  io.delayDone := false.B

  // 随机延迟周期, 5到20周期
  val randomDelay = 5// + chisel3.util.random.nextInt(16) // 产生一个5到20的随机数
  val counter = RegInit(0.U(5.W)) // 使用足够位宽的寄存器来存储计数值

  // 数据寄存器
  val dataReg = Reg(UInt(32.W))

  // 当输入数据时，重置计数器，并存储输入数据
  when (counter === 0.U) {
    dataReg := io.inData
    counter := randomDelay.U
  } .otherwise {
    counter := counter - 1.U
    when (counter === 1.U) {
      io.delayDone := true.B
    }
  }

  // 输出数据
  io.outData := dataReg
}

