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
		val out2idu = Decoupled(new IFUtoIDU)
		val wbu2in = Flipped(Decoupled(new WBUtoIFU))
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
	/*
	val idu2s_idle :: idu2s_wait_ready :: Nil = Enum(2)
	val idu2s_state = RegInit(idu2s_idle)
	idu2s_state :=MuxLookup(idu2s_state,idu2s_idle)(List(
		idu2s_idle -> Mux(io.out.valid,idu2s_wait_ready,idu2s_idle),
		idu2s_wait_ready -> Mux(io.out.ready,idu2s_idle,idu2s_wait_ready)
	))
	*/
	val in_data = Reg(new WBUtoIFU)
	val state = RegInit(false.B)
	io.wbu2in.ready := false.B
	when(io.wbu2in.valid){
		io.wbu2in.ready := true.B
		when(io.wbu2in.ready & io.wbu2in.valid){
			in_data := io.wbu2in.bits
			state := true.B
		}.otherwise{
			state := false.B
			in_data := 0.U.asTypeOf(new WBUtoIFU)
		}
	}.otherwise{
		io.wbu2in.ready := false.B
	}

	val valid_reg = RegInit(false.B)
	io.out2idu.valid := valid_reg //io.ifu_axi_r.rready 

/*
	//IFU to wbu
    val m2wbuidle :: m2wbuprocess :: Nil = Enum(2)
	val m2wbustate = RegInit(m2wbuidle)
	m2wbustate :=MuxLookup(m2wbustate,m2wbuidle)(List(
		m2wbuidle -> Mux(io.wbu2in.valid,m2wbuprocess,m2wbuidle),
		m2wbuprocess -> Mux(io.wbu2in.ready,m2wbuidle,m2wbuprocess)
	))
*/


  	//val vlg_pc_read = Module(new pcreadmem)   yosys 使用
	val inst = Wire(UInt(32.W))
	inst := 0.U 
	val wbu2in_reg = RegNext(io.wbu2in.valid,0.B)
	
	val ardata_reg = RegEnable(in_data.dnpc,M_members.M_base.S.asUInt,wbu2in_reg)
	val inst_reg 	= RegEnable(inst,0.U,io.ifu_axi_r.rready )
	val pc_reg = Reg(UInt(32.W))
	val arvalid_reg = RegEnable(wbu2in_reg,false.B,(io.ifu_axi_ar.arready| wbu2in_reg ))
	val sta_reg = RegEnable(wbu2in_reg,false.B,(io.ifu_axi_r.rready| wbu2in_reg ))
	io.ifu_axi_ar.araddr := 0.U
	io.ifu_axi_ar.arid := 0.U
	io.ifu_axi_ar.arsize := 0.U
	io.ifu_axi_ar.arlen := 0.U
	io.ifu_axi_ar.arburst := 0.U
	io.ifu_axi_ar.arvalid :=  arvalid_reg
	io.ifu_sta := Mux(sta_reg,true.B,false.B)
	io.ifu_axi_r.rready := false.B

	io.out2idu.bits.pc := 0.U
	//io.out.bits.snpc := io.out.bits.pc + 4.U
	io.out2idu.bits.snpc := 0.U
	//io.out.bits.inst := inst_reg 
	io.out2idu.bits.inst := 0.U


	when(state){
    	//取指令
		pc_reg := RegNext(in_data.dnpc.asSInt, M_members.M_base.S).asUInt
		when(io.ifu_axi_ar.arready & io.ifu_axi_ar.arvalid){
			io.ifu_axi_ar.araddr := ardata_reg 
		}.otherwise{
			io.ifu_axi_ar.araddr := 0.U
		}
		when(io.ifu_axi_r.rvalid){
			io.ifu_axi_r.rready := true.B
			when(io.ifu_axi_r.rvalid & io.ifu_axi_r.rready){
				valid_reg := true.B
				state := false.B
				when(io.ifu_axi_r.rresp === 0.U){
					inst := io.ifu_axi_r.rdata
				}.otherwise{
					inst := 0.U 
				}
			}
			.otherwise{
				inst := 0.U
			}
		}.otherwise{
				io.ifu_axi_r.rready := false.B
		}
			

	}

	when(io.out2idu.valid & io.out2idu.ready){
		io.out2idu.bits.inst := inst_reg
		io.out2idu.bits.pc := pc_reg 
		io.out2idu.bits.snpc := io.out2idu.bits.pc + 4.U
		valid_reg := false.B//将valid置0
	}.otherwise{
		io.out2idu.bits.inst := 0.U
		io.out2idu.bits.pc := 0.U
		io.out2idu.bits.snpc := 0.U
	}

}

