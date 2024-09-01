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

class IFUtoIDU extends Bundle {
	val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val inst = Output(UInt(32.W))
}

class IFU extends Module {
	val io = IO(new Bundle{
		val out = Decoupled(new IFUtoIDU)
		val exu2in = Flipped(Decoupled(new EXUtoIFU))
		val ifu_axi_ar = (new AXI_ar)
		val ifu_axi_r = Flipped(new AXI_r)
		val ifu_axi_aw = (new AXI_aw)
		val ifu_axi_w = (new AXI_w)
		val ifu_axi_b = Flipped(new AXI_b)
		val ifu_sta = Output(Bool())
	})
	io.ifu_axi_aw.awvalid := false.B
	io.ifu_axi_aw.awaddr := 0.U
	io.ifu_axi_aw.awid := 0.U
	io.ifu_axi_aw.awsize := 0.U
	io.ifu_axi_aw.awlen := 0.U
	io.ifu_axi_aw.awburst := 0.U
	io.ifu_axi_w.wdata := 0.U
	io.ifu_axi_w.wstrb := 0.U
	io.ifu_axi_w.wlast := false.B
	io.ifu_axi_w.wvalid := false.B
	io.ifu_axi_b.bready := false.B
	assert(io.ifu_axi_b.bvalid === false.B, "ifu_axi_b.bvalid must be false")

	//IFU recive IDU 
	val idu2s_idle :: idu2s_wait_ready :: Nil = Enum(2)
	val idu2s_state = RegInit(idu2s_idle)
	idu2s_state :=MuxLookup(idu2s_state,idu2s_idle)(List(
		idu2s_idle -> Mux(io.out.valid,idu2s_wait_ready,idu2s_idle),
		idu2s_wait_ready -> Mux(io.out.ready,idu2s_idle,idu2s_wait_ready)
	))

	io.out.valid := io.ifu_axi_r.rready 

	//IFU to EXU
    val m2EXUidle :: m2EXUprocess :: Nil = Enum(2)
	val m2EXUstate = RegInit(m2EXUidle)
	m2EXUstate :=MuxLookup(m2EXUstate,m2EXUidle)(List(
		m2EXUidle -> Mux(io.exu2in.valid,m2EXUprocess,m2EXUidle),
		m2EXUprocess -> Mux(io.exu2in.ready,m2EXUidle,m2EXUprocess)
	))

	io.exu2in.ready := (m2EXUstate === m2EXUidle)

  	//val vlg_pc_read = Module(new pcreadmem)   yosys 使用
	val inst = Wire(UInt(32.W))
	inst := 0.U 
	val exu2in_reg = RegNext(io.exu2in.valid,0.B)
	val indata 	= Reg(new EXUtoIFU)
	when(io.exu2in.valid & (io.exu2in.valid =/= exu2in_reg )){	
		indata := io.exu2in.bits
	}
	
	val ardata_reg = RegEnable(indata.dnpc,0x20000000.S.asUInt,exu2in_reg)
	//val inst_reg 	= RegEnable(inst,0.U,io.ifu_axi_r.rready )
	//def delay(x:Bool)={RegNext(x)}
	val arvalid_reg = RegEnable(exu2in_reg,false.B,(io.ifu_axi_ar.arready| exu2in_reg ))
	val sta_reg = RegEnable(exu2in_reg,false.B,(io.ifu_axi_r.rready| exu2in_reg ))
	io.ifu_axi_ar.araddr := 0.U
	io.ifu_axi_ar.arid := 0.U
	io.ifu_axi_ar.arsize := 0.U
	io.ifu_axi_ar.arlen := 0.U
	io.ifu_axi_ar.arburst := 0.U
	io.ifu_axi_ar.arvalid :=  arvalid_reg
	io.ifu_sta := Mux(sta_reg,true.B,false.B)
	io.ifu_axi_r.rready := false.B

	io.out.bits.pc := 0.U
	io.out.bits.snpc := io.out.bits.pc + 4.U
	io.out.bits.inst := inst 


	when(m2EXUstate === m2EXUprocess){
    	//取指令
		io.out.bits.pc := RegNext(indata.dnpc.asSInt, 0x20000000.S).asUInt
		when(io.ifu_axi_ar.arready & io.ifu_axi_ar.arvalid){
			io.ifu_axi_ar.araddr := ardata_reg 
		}.otherwise{
			io.ifu_axi_ar.araddr := 0.U
		}
		when(io.ifu_axi_r.rvalid){
			io.ifu_axi_r.rready := true.B
			when(io.ifu_axi_r.rvalid & io.ifu_axi_r.rready){
				when(io.ifu_axi_r.rresp === 1.U){
					inst := io.ifu_axi_r.rdata
				}.otherwise{
					inst := io.ifu_axi_r.rdata
				}
			}
			.otherwise{
				inst := 0.U
			}
		}.otherwise{
				io.ifu_axi_r.rready := false.B
		}
			

	}

	

}

