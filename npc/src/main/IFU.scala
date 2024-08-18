package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

/*
class pcreadmem extends Module{
	val io = IO(new Bundle{
		val pc = Input(UInt(32.W))
		val inst = Output(UInt(32.W))
	})

	val mem_raddr = RegInit(0.U(8.W))
	mem_raddr := io.pc(7,0)
	val mem = Mem(256,UInt(32.W))

	io.inst := mem(mem_raddr.asUInt)
	
}
*/
class AXI_ar extends Bundle{
	val pc 	= Output(UInt(32.W))
	val arvalid = Output(Bool())
	val arready = Input(Bool())
}


class IFUtoIDU extends Bundle {
	val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val out = Decoupled(new IFUtoIDU)
		val exu2in = Flipped(Decoupled(new EXUtoIFU))
		val axi_ar = (new AXI_ar)
		val axi_r = Flipped(new AXI_r)
	})

	//IFU recive IDU 
	val idu2s_idle :: idu2s_wait_ready :: Nil = Enum(2)
	val idu2s_state = RegInit(idu2s_idle)
	idu2s_state :=MuxLookup(idu2s_state,idu2s_idle)(List(
		idu2s_idle -> Mux(io.out.valid,idu2s_wait_ready,idu2s_idle),
		idu2s_wait_ready -> Mux(io.out.ready,idu2s_idle,idu2s_wait_ready)
	))

	io.out.valid := io.axi_r.rready

	//IFU to EXU
    val m2EXUidle :: m2EXUprocess :: Nil = Enum(2)
	val m2EXUstate = RegInit(m2EXUidle)
	m2EXUstate :=MuxLookup(m2EXUstate,m2EXUidle)(List(
		m2EXUidle -> Mux(io.exu2in.valid,m2EXUprocess,m2EXUidle),
		m2EXUprocess -> Mux(io.exu2in.ready,m2EXUidle,m2EXUprocess)
	))

	io.exu2in.ready := (m2EXUstate === m2EXUidle)

  	//val vlg_pc_read = Module(new pcreadmem)   yosys 使用
	val arvalid_en = Wire(Bool())
	arvalid_en := 0.U
	val rready_reg = RegInit(false.B)
	val ardata_reg = RegEnable(io.out.bits.pc,0.U,arvalid_en)
	//val arvalid_reg = RegEnable(arvalid_en,false.B,(io.axi_r.rready & io.exu2in.valid))
	val arvalid_reg = RegNext(arvalid_en,false.B)
	//def delay(x:UInt)={RegNext(x)}
	io.axi_ar.pc := 0.U
	io.axi_ar.arvalid :=  arvalid_reg
	io.axi_r.rready := rready_reg

	io.out.bits.pc := 0.U
	io.out.bits.snpc := 0.U
	io.out.bits.inst := 0.U

	when(m2EXUstate === m2EXUprocess){
    	//取指令
		io.out.bits.pc := RegNext(io.exu2in.bits.dnpc.asSInt, 0x80000000.S).asUInt
		arvalid_en := true.B
		when(io.axi_ar.arready & io.axi_ar.arvalid){
			io.axi_ar.pc := ardata_reg 
			when(io.axi_r.rvalid){
				io.out.bits.snpc := io.out.bits.pc + 4.U
				rready_reg := true.B
				arvalid_en := false.B
				//arvalid_en:= delay(!rready_reg)
				when(io.axi_r.rresp === 1.U){
					io.out.bits.inst := io.axi_r.inst
				}.otherwise{
					io.out.bits.inst := 0.U
				}
			}.otherwise{
				rready_reg := false.B
			}
		}.otherwise{
			io.axi_ar.pc := 0.U
			rready_reg := false.B
		}
		//m2EXUstate := m2EXUidle
	}

	

}

