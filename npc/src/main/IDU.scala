package npc 

import chisel3._
import chisel3.util._
import chisel3.experimental._

class IDUtoEXU extends Bundle{
	val snpc = Output(UInt(32.W))
	val pc = Output(UInt(32.W))
	val mem_ren = Output(Bool())
	val mem_wen = Output(Bool())
	val m_rmask = Output(UInt(32.W))
	val m_wmask = Output(UInt(32.W))
	val reg_waddr = Output(UInt(5.W))
	val reg_wen = Output(Bool())
	val src1  = Output(UInt(32.W))
	val src2  = Output(UInt(32.W))
	val csr   = Output(UInt(32.W))
	val csr_a5 = Output(UInt(32.W))
	val mstatus = Output(UInt(32.W))
	val imm   = Output(UInt(32.W))
    val alu_op = Output(UInt(5.W))
	val inst_type = Output(UInt(4.W))
	val il_us = Output(Bool())
}

class IDU extends Module {
	val io = IO(new Bundle{
		val ifu2in = Flipped(Decoupled(new IFUtoIDU))
		val out2exu = Decoupled(new IDUtoEXU)
		val reg_data = Flipped(new IO_reg_read)
		val inv_flag = Output(Bool())
	})
    
	io.inv_flag := false.B
	dontTouch(io.inv_flag)
	val exu2s_idle :: exu2s_wait_ready :: Nil = Enum(2)
	val exu2s_state = RegInit(exu2s_idle)
	exu2s_state :=MuxLookup(exu2s_state,exu2s_idle)(List(
		exu2s_idle -> Mux(io.out2exu.valid,exu2s_wait_ready,exu2s_idle),
		exu2s_wait_ready -> Mux(io.out2exu.ready,exu2s_idle,exu2s_wait_ready)
	))


	val exu_data = Reg(new IDUtoEXU)
	
	//val lastaluop = RegNext(exu_data.alu_op,"b10000".U)
	//val lastimm = RegNext(exu_data.imm,0.U)

	//io.out2exu.valid := mem_ren | mem_wen | (exu_data.imm =/= lastimm ) | (exu_data.alu_op =/= lastaluop)
	io.out2exu.bits := exu_data
	
    class npc_break extends BlackBox with HasBlackBoxPath {
    	val io = IO(new Bundle {
			val inst = Input(UInt(32.W))
      })

		addPath("./src/main/npc_break.v")
  	}


    //IDU to IFU
	/*
	val m2IFUidle :: m2IFUprocess :: Nil = Enum(2)
	val state = RegInit(m2IFUidle)
	state :=MuxLookup(state,m2IFUidle)(List(
		m2IFUidle -> Mux(io.ifu2in.valid,m2IFUprocess,m2IFUidle),
		m2IFUprocess -> Mux(io.ifu2in.ready,m2IFUidle,m2IFUprocess)
	))
	io.ifu2in.ready := (state === m2IFUidle)
	*/
	io.ifu2in.ready := false.B
    val in_data = Reg(new IFUtoIDU) 
	val state = RegInit(false.B)
	when(io.ifu2in.valid)
	{
		io.ifu2in.ready := true.B
		when(io.ifu2in.valid & io.ifu2in.ready)
		{
    		in_data := io.ifu2in.bits
			state := true.B
		}.otherwise{
			in_data := 0.U.asTypeOf(new IFUtoIDU)
			state := false.B
		}
	}.otherwise{
		io.ifu2in.ready := false.B
	}
	val state_reg = RegNext(state,false.B)

	val npc_break = Module(new npc_break)
	npc_break.io.inst := in_data.inst

	val opcode = in_data.inst(6,0)
	val rd = in_data.inst(11,7)
	val funct3 = in_data.inst(14,12)
	val rs1 = in_data.inst(19,15)
	val rs2 = in_data.inst(24,20)
	val funct7 = in_data.inst(31,25)
	val csr = in_data.inst(31,20)

	val csr_imm = Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt

	io.reg_data.raddr_1 := rs1
	io.reg_data.raddr_2 := rs2
	io.reg_data.csr_raddr := 0.U

	//imm 在 lw sw 时可能为0 导致出问题要加入 mem ren  wen
	//io.out2exu.valid := exu_data.mem_ren | exu_data.mem_wen | (exu_data.imm =/= lastimm ) | (exu_data.alu_op =/= lastaluop)
	io.out2exu.valid := state_reg 
	when(state)
	{
	state := false.B
	exu_data.reg_waddr := rd
	exu_data.snpc := in_data.snpc
	exu_data.pc := in_data.pc
	
	exu_data.mstatus := ( io.reg_data.mstatus | (((io.reg_data.mstatus & 0x00000080.U)>>4) | 0x00000080.U))
	exu_data.csr_a5 := Mux((io.reg_data.csr_a5.asSInt === 0xffffffff.S),0.U,io.reg_data.csr_a5)
	exu_data.src1 := io.reg_data.rdata_1
	exu_data.src2 := io.reg_data.rdata_2
	exu_data.csr  := io.reg_data.csr_rdata
	exu_data.m_rmask := 0.U
	exu_data.m_wmask := 0.U
	exu_data.inst_type := 0.U
	exu_data.alu_op := "b10000".U
	exu_data.imm :=  0.U 
	exu_data.mem_ren := false.B
	exu_data.mem_wen := false.B
	exu_data.reg_wen := false.B
	
	//译码
	//state := m2IFUidle

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
					exu_data.alu_op := "b00100".U
				}

				//OR
				is("b110".U){
					exu_data.alu_op := "b00011".U
				}

				//AND
				is("b111".U){
					exu_data.alu_op := "b00010".U
				}

				//SLL
				is("b001".U){
					exu_data.alu_op := "b00101".U
				}

				//SRL or SRA
				is("b101".U){
					//SRL
					when(funct7 === 0.U){
						exu_data.alu_op := "b00110".U
					}
					//SRA
					.otherwise{
						exu_data.alu_op := "b00111".U
					}
				}

				//SLT
				is("b010".U){
					exu_data.alu_op := "b01000".U
				}

				//SLTU
				is("b011".U){
					exu_data.alu_op := "b01001".U
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
					exu_data.alu_op := "b00000".U
				}

				//XORI
				is("b100".U){
					exu_data.alu_op := "b00100".U
				}

				//ORI
				is("b110".U){
					exu_data.alu_op := "b00011".U
				}

				//ANDI
				is("b111".U){
					exu_data.alu_op := "b00010".U
				}

				//SLLI
				is("b001".U){
					exu_data.alu_op := "b00101".U
				}

				//SRLI or SRAI
				is("b101".U){
					//SRLI
					when(funct7 === 0.U){
						exu_data.alu_op := "b00110".U
					}
					//SRAI
					.otherwise{
						exu_data.alu_op := "b00111".U
					}

				}

				//SLTI
				is("b010".U){
					exu_data.alu_op := "b01000".U
				}

				//SLTIU
				is("b011".U){
					exu_data.alu_op := "b01001".U
				}


			}
		}

		//IL-Type 		
		is("b0000011".U){
			io.inv_flag := false.B
			exu_data.inst_type := 3.U
			exu_data.alu_op := "b00000".U
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt
			exu_data.reg_wen := true.B
			exu_data.mem_ren := true.B
			switch(funct3){
				//LB
				is("b000".U){
					exu_data.m_rmask := 1.U	
					exu_data.il_us   :=	false.B  //true is Uint 
				}

				//LH
				is("b001".U){
					exu_data.m_rmask := 2.U
					exu_data.il_us   :=	false.B  //true is Uint 
				}

				//LW
				is("b010".U){
					exu_data.m_rmask := 4.U
					exu_data.il_us   :=	false.B  //true is Uint 
				}

				//LBU
				is("b100".U){
					exu_data.il_us   :=	true.B  //true is Uint  
					exu_data.m_rmask := 1.U
				}

				//LHU
				is("b101".U){
					exu_data.il_us   :=	true.B
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
			exu_data.alu_op := "b00000".U
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
					exu_data.alu_op := "b01010".U
				}

				//bne
				is("b001".U){
					exu_data.alu_op := "b01101".U
				}

				//blt
				is("b100".U){
					exu_data.alu_op := "b01000".U
				}

				//bge
				is("b101".U){
					exu_data.alu_op := "b01100".U
				}

				//bltu
				is("b110".U){
					exu_data.alu_op := "b01001".U
				}

				//bgeu
				is("b111".U){
					exu_data.alu_op := "b01011".U
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
			exu_data.alu_op :="b00000".U
			exu_data.imm := Cat(in_data.inst(31,12),0.U(12.W)).asUInt
			exu_data.reg_wen := true.B
		}

		//J-Type jal
		is("b1101111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 8.U
			exu_data.alu_op :="b00000".U
			exu_data.imm := Cat(Fill(12,in_data.inst(31)),in_data.inst(19,12),in_data.inst(20),in_data.inst(30,21),0.U(1.W)).asUInt
			exu_data.reg_wen := true.B
		}

		//JR-Type jalr
		is("b1100111".U){
			io.inv_flag := false.B
			exu_data.inst_type := 9.U
			exu_data.alu_op :="b00000".U
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt			
			exu_data.reg_wen := true.B
		}
		//CSR and ebrak
		is("b1110011".U){
			io.inv_flag := false.B
			exu_data.imm := Cat(Fill(20,in_data.inst(31)),in_data.inst(31,20)).asUInt
			switch(funct3){
				//csrrw
				is("b001".U){
				exu_data.inst_type := 10.U
				exu_data.reg_wen := true.B
		        switch(csr_imm) {
                is(0x341.U) { io.reg_data.csr_raddr:= 0.U } // mepc
                is(0x342.U) { io.reg_data.csr_raddr := 1.U } // mcause
                is(0x300.U) { io.reg_data.csr_raddr := 2.U } // mstatus
                is(0x305.U) { io.reg_data.csr_raddr := 3.U } // mtvec
                }
				}

				//csrrs
				is("b010".U){
				exu_data.inst_type := 11.U
				exu_data.reg_wen := true.B
				exu_data.alu_op := "b00011".U	
		        switch(csr_imm) {
                is(0x341.U) { io.reg_data.csr_raddr:= 0.U } // mepc
                is(0x342.U) { io.reg_data.csr_raddr := 1.U } // mcause
                is(0x300.U) { io.reg_data.csr_raddr := 2.U } // mstatus
                is(0x305.U) { io.reg_data.csr_raddr := 3.U } // mtvec
     	        }
				}
				//ecall or mret
				is("b000".U){
					//ecall
					when(rs2 === 0.U){
						exu_data.inst_type := 12.U
						io.reg_data.csr_raddr := 3.U //mtvec
					}
					//mret
					.otherwise{
						exu_data.inst_type := 13.U
						io.reg_data.csr_raddr := 0.U //mepc
					}
				}
			}
		}

	}
	}
}