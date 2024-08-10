package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._



class EXU extends Module {
    val io = IO(new Bundle {
        val idu2in = Flipped(Decoupled(new IDUtoEXU))
    })


    //EXU to IDU
    val m2IDUidle :: m2IDUprocess :: Nil = Enum(2)
	val m2IDUstate = RegInit(m2IDUidle)
	m2IDUstate :=MuxLookup(m2IDUstate,m2IDUidle)(List(
		m2IDUidle -> Mux(io.idu2in.valid,m2IDUprocess,m2IDUidle),
		m2IDUprocess -> Mux(io.idu2in.ready,m2IDUidle,m2IDUprocess)
	))

    class Mem extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
        val m_waddr = Input(UInt(32.W))
        val m_wdata = Input(UInt(32.W))
        val m_wmask = Input(UInt(32.W))
        val m_wen = Input(Bool())
        val m_raddr = Input(UInt(32.W))
        val m_rdata = Output(UInt(32.W))
        val m_rmask = Input(UInt(32.W))
        val m_ren = Input(Bool())
      })

		addPath("./src/main/Mem.v")
  	}

    val mem = Module(new Mem)

    val alu = Module(new ALU)
    

    val data_all = Wire(new IDUtoEXU)
    data_all.alu_op := 0.U

    io.idu2in.ready := ( m2IDUstate===m2IDUidle )
    when(m2IDUstate === m2IDUprocess)
    {
        io.idu2in.bits <> data_all  
        when
    }
}