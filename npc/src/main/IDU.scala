package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class IDUtoEXU extends Bundle{
	val mem_wen = Output(Bool())
	val mem_ren = Output(Bool())
	val m_rmask = Output(UInt(32.W))
	val m_wmask = Output(UInt(32.W))
	val reg_waddr = Output(UInt(5.W))
	val reg_wen = Output(Bool())
	val src1  = Output(UInt(32.W))
	val src2  = Output(UInt(32.W))
	val imm   = Output(UInt(32.W))
    val alu_op = Output(UInt(4.W))
	val inst_type = Output(UInt(4.W))
}

class IDU extends Module {
	val io = IO(new Bundle{
		val ifu2in = Flipped(Decoupled(new IFUtoIDU))
		val out2exu = Decoupled(new IDUtoEXU)
		val reg_data = Flipped(new IO_reg_read)
		val inv_flag = Output(Bool())
	})
    
	io.inv_flag := false.B
	val exu2s_idle :: exu2s_wait_ready :: Nil = Enum(2)
	val exu2s_state = RegInit(exu2s_idle)
	exu2s_state :=MuxLookup(exu2s_state,exu2s_idle)(List(
		exu2s_idle -> Mux(io.out2exu.valid,exu2s_wait_ready,exu2s_idle),
		exu2s_wait_ready -> Mux(io.out2exu.ready,exu2s_idle,exu2s_wait_ready)
	))


	val exu_data = Wire(new IDUtoEXU)
	

	val lastalu_op = RegNext(exu_data.alu_op,0.U)

	io.out2exu.valid := (exu_data.alu_op =/= lastalu_op )
	io.out2exu.bits := exu_data
	
    class npc_break extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
			val inst = Input(UInt(32.W))
      })

		addPath("./src/main/npc_break.v")
  	}


    //IDU to IFU
	val m2IFUidle :: m2IFUprocess :: Nil = Enum(2)
	val state = RegInit(m2IFUidle)
	state :=MuxLookup(state,m2IFUidle)(List(
		m2IFUidle -> Mux(io.ifu2in.valid,m2IFUprocess,m2IFUidle),
		m2IFUprocess -> Mux(io.ifu2in.ready,m2IFUidle,m2IFUprocess)
	))
	io.ifu2in.ready := (state === m2IFUidle)
    val in_data = Wire(new IFUtoIDU) 
    in_data := io.ifu2in.bits
    //val lastinst = RegNext(in_data.inst,0.U)
    //io.ifu2in.ready := (lastinst =/= in_data.inst)

	val npc_break = Module(new npc_break)
	npc_break.io.inst := in_data.inst

	val opcode = in_data.inst(6,0)
	val rd = in_data.inst(11,7)
	val funct3 = in_data.inst(14,12)
	val rs1 = in_data.inst(19,15)
	val rs2 = in_data.inst(24,20)
	val funct7 = in_data.inst(31,25)
	val csr = in_data.inst(31,20)

	io.reg_data.raddr_1 := rs1
	io.reg_data.raddr_2 := rs2
	exu_data.reg_waddr := rd
	
	exu_data.mem_wen := false.B
	exu_data.mem_ren := false.B
	exu_data.m_rmask := 0.U
	exu_data.m_wmask := 0.U
	exu_data.inst_type := 0.U
	exu_data.reg_wen := false.B
	exu_data.alu_op := 15.U
	exu_data.src1 := io.reg_data.rdata_1
	exu_data.src2 := io.reg_data.rdata_2
	exu_data.imm :=  0.U

	when(state === m2IFUprocess )
	{
	//译码
	io.inv_flag := true.B
	switch(opcode){
		//R-Type
		is("b0110011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 1.U
			exu_data.reg_wen := true.B
			switch(funct3){
				//ADD or SUB
				is("b000".U){
					//ADD
					when(funct7 === 0.U){
						exu_data.alu_op := 0.U
					}
					//SUB
					.otherwise{
						exu_data.alu_op := 1.U
					}

				}

				//XOR
				is("b100".U){
					exu_data.alu_op := "b0100".U
				}

				//OR
				is("b110".U){
					exu_data.alu_op := "b0011".U
				}

				//AND
				is("b111".U){
					exu_data.alu_op := "b0010".U
				}

				//SLL
				is("b001".U){
					exu_data.alu_op := "b0101".U
				}

				//SRL or SRA
				is("b101".U){
					//SRL
					when(funct7 === 0.U){
						exu_data.alu_op := "b0110".U
					}
					//SRA
					.otherwise{
						exu_data.alu_op := "b0111".U
					}
				}

				//SLT
				is("b010".U){
					exu_data.alu_op := "b1000".U
				}

				//SLTU
				is("b011".U){
					exu_data.alu_op := "b1001".U
				}
			}	
		}

		//I-Type
		is("b0010011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 2.U
			exu_data.imm :=  Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt			
			exu_data.reg_wen := true.B
			switch(funct3){
				//ADDI
				is("b000".U){
					exu_data.alu_op := 0.U
				}

				//XORI
				is("b100".U){
					exu_data.alu_op := "b0100".U
				}

				//ORI
				is("b110".U){
					exu_data.alu_op := "b0011".U
				}

				//ANDI
				is("b111".U){
					exu_data.alu_op := "b0010".U
				}

				//SLLI
				is("b001".U){
					exu_data.alu_op := "b0101".U
				}

				//SRLI or SRAI
				is("b101".U){
					//SRLI
					when(funct7 === 0.U){
						exu_data.alu_op := "b0110".U
					}
					//SRAI
					.otherwise{
						exu_data.alu_op := "b0111".U
					}

				}

				//SLTI
				is("b010".U){
					exu_data.alu_op := "b1000".U
				}

				//SLTIU
				is("b011".U){
					exu_data.alu_op := "b1001".U
				}


			}
		}

		//IL-Type 		
		is("b0000011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 3.U
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt
			exu_data.reg_wen := true.B
			exu_data.mem_ren := true.B
			switch(funct3){
				//LB
				is("b000".U){
					exu_data.m_rmask := 1.U	
				}

				//LH
				is("b001".U){
					exu_data.m_rmask := 2.U
				}

				//LW
				is("b010".U){
					exu_data.m_rmask := 4.U
				}

				//LBU
				is("b100".U){
					exu_data.m_rmask := 1.U
				}

				//LHU
				is("b101".U){
					exu_data.m_rmask := 2.U
				}
			}

		}

		//S-Type
		is("b0100011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 4.U
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,25),in_data.inst(11,7)).asUInt
			exu_data.mem_wen := true.B
			exu_data.alu_op := "b0000".U
			switch(funct3){
				//SB
				is("b000".U){
					exu_data.m_wmask := 1.U
				}

				//SH
				is("b001".U){
					exu_data.m_wmask := 2.U
				}

				//SW
				is("b010".U){
					exu_data.m_wmask := 4.U
				}
			}
		}

		//B-Type
		is("b1100011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 5.U
			exu_data.imm := Cat(Fill(19,in_data.inst(31)),in_data.inst(31),in_data.inst(7),in_data.inst(30,25),in_data.inst(11,8),0.U(1.W)).asUInt
			switch(funct3){
				//beq
				is("b000".U){
					exu_data.alu_op := "b1010".U
				}

				//bne
				is("b001".U){
					exu_data.alu_op := "b1101".U
				}

				//blt
				is("b100".U){
					exu_data.alu_op := "b1110".U
				}

				//bge
				is("b101".U){
					exu_data.alu_op := "b1100".U
				}

				//bltu
				is("b110".U){
					exu_data.alu_op := "b1111".U
				}

				//bgeu
				is("b111".U){
					exu_data.alu_op := "b1011".U
				}
			}
		}

		//U-Type lui
		is("b0110111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 6.U
			exu_data.imm := Cat(in_data.inst(31,12),0.U(12.W)).asUInt
			exu_data.reg_wen := true.B
		}

		//UPC-Type auipc
		is("b0010111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 7.U
			exu_data.alu_op :="b0000".U
			exu_data.imm := Cat(in_data.inst(31,12),0.U(12.W)).asUInt
			exu_data.reg_wen := true.B
		}

		//J-Type jal
		is("b1101111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 8.U
			exu_data.alu_op :="b0000".U
			exu_data.imm := Cat(Fill(12,in_data.inst(31)),in_data.inst(19,12),in_data.inst(20),in_data.inst(30,21),0.U(1.W)).asUInt
			exu_data.reg_wen := true.B
		}

		//JR-Type jalr
		is("b1100111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 9.U
			exu_data.alu_op :="b0000".U
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt			
			exu_data.reg_wen := true.B
		}
		//CSR and ebrak
		is("b1110011".U){
			io.inv_flag := false.B

		}

	}
	}
}