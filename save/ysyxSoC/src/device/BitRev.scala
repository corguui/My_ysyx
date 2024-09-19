package ysyx

import chisel3._
import chisel3.util._

class bitrev extends BlackBox {
  val io = IO(Flipped(new SPIIO(1)))
}

class bitrevChisel extends RawModule { // we do not need clock and reset
  val io = IO(Flipped(new SPIIO(1)))
  val count = withClockAndReset(io.sck.asClock,io.ss.asBool.asAsyncReset)(RegInit(0.U(3.W)))
  val data = withClockAndReset(io.sck.asClock,io.ss.asBool.asAsyncReset)(RegInit(0.U(8.W)))
  io.miso := true.B 

  val  idle :: rx :: tx:: Nil =Enum(3)
  val state  = withClockAndReset(io.sck.asClock,io.ss.asBool.asAsyncReset)(RegInit(idle))

when(io.ss===0.U)
{
    when(state === idle)
    {
      state:=rx
      data := Cat(data(6,0),io.mosi)
    }
    when(state === rx){
      when(count === 7.U)
      {
      state := tx
      io.miso := data(0)
      data := Cat(0.U,data(7,1))
      }.otherwise{
      data := Cat(data(6,0),io.mosi)
      count :=count + 1.U
      }
    }
    when(state === tx){
      when(count === 0.U)
      {
        state :=  idle 
      }.otherwise{
      io.miso := data(0)
      data := Cat(0.U,data(7,1))
      count := count - 1.U
      } 
    }
  }
}
