package npc 

import chisel3._

class a extends Module {
	val io = IO(new Bundle{
		val src0 = Input(UInt(64.W))
		val src1 = Input(UInt(64.W))
		val result = Output(UInt(64.W))
	})
	io.result := io.src0 + io.src1
}

test(new a) { c=>
    c.io.src0.poke(0x1234.U)
    c.io.src1.poke(0x1234.U)
    c.clock.step(1)
    c.io.result.expect(0x2468.U)
}
println("success")