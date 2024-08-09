package npc 

import chisel3._
import chisel3.util._


class IDU extends Module {
	val io = IO(new Bundle{
		val in = Flipped(Decoupled(new IFUtoIDU))
	})
    
    //IDU to IFU
	val m_idle :: m_wait_valid :: Nil = Enum(2)
	val state = RegInit(m_idle)
	state :=MuxLookup(state,m_idle)(List(
		m_idle -> Mux(io.in.ready,m_idle,m_wait_valid),
		m_wait_valid -> Mux(io.in.valid,m_wait_valid,m_idle)
	))
    val in_data = Wire(new IFUtoIDU) 
    in_data := io.in.bits
    val lastinst = RegInit(0.U)
    io.in.ready := (lastinst =/= in_data.inst)

	val opcode = in_data.inst(6,0)
	val rd = in_data.inst(11,7)
	val funct3 = in_data.inst(14,12)
	val rs1 = in_data.inst(19,15)
	val rs2 = in_data.inst(24,20)
	val funct7 = in_data.inst(31,25)
	val csr = in_data.inst(31,20)
	val imm = Wire(UInt(32.W))

	//译码
	switch(opcode){
		//R-Type
		is("b0110011".U){

			switch(funct3){
				//ADD or SUB
				is("b000".U){
					//ADD
					when(funct7 === 0.U){

					}
					//SUB
					.otherwise{

					}

				}

				//XOR
				is("b100".U){

				}

				//OR
				is("b110".U){

				}

				//AND
				is("b111".U){

				}

				//SLL
				is("b001".U){

				}

				//SRL or SRA
				is("b101".U){
					//SRL
					when(funct7 === 0.U){

					}
					//SRA
					.otherwise{

					}
				}

				//SLT
				is("b010".U){

				}

				//SLTU
				is("b011".U){

				}
			}	
		}

		//I-Type
		is("b0010011".U){
			imm := in_data.inst(31,20).asSInt.asUInt
			switch(funct3){
				//ADDI
				is("b000".U){

				}

				//XORI
				is("b100".U){

				}

				//ORI
				is("b110".U){

				}

				//ANDI
				is("b111".U){

				}

				//SLLI
				is("b001".U){

				}

				//SRLI or SRAI
				is("b101".U){
					//SRLI
					when(funct7 === 0.U){

					}
					//SRAI
					.otherwise{

					}

				}

				//SLTI
				is("b010".U){

				}

				//SLTIU
				is("b011".U){

				}


			}
		}

		//IL-Type 		
		is("b0000011".U){
			imm := imm := in_data.inst(31,20).asSInt.asUInt
			switch(funct3){
				//LB
				is("b000".U){

				}

				//LH
				is("b001".U){

				}

				//LW
				is("b010".U){

				}

				//LBU
				is("b100".U){

				}

				//LHU
				is("b101".U){

				}
			}

		}

		//S-Type
		is("b0100011".U){
			imm := Cat(in_data.inst(31,25),in_data.inst(11,7)).asSInt.asUInt
			switch(funct3){
				//SB
				is("b000".U){

				}

				//SH
				is("b001".U){

				}

				//SW
				is("b010".U){

				}
			}
		}

		//B-Type
		is("b1100011".U){
			imm := Cat(in_data.inst(31),in_data.inst(7),in_data.inst(30,25),in_data.inst(11,8),0.U(1.W)).asSInt.asUInt
			switch(funct3){
				//beq
				is("b000".U){

				}

				//bne
				is("b001".U){

				}

				//blt
				is("b100".U){

				}

				//bge
				is("b101".U){

				}

				//bltu
				is("b110".U){

				}

				//bgeu
				is("b111".U){

				}
			}
		}

		//U-Type lui
		is("b0110111".U){
			imm := Cat(in_data.inst(31,12),0.U(12.W)).asSInt.asUInt
		}

		//UPC-Type auipc
		is("b0010111".U){
			imm := Cat(in_data.inst(31,12),0.U(12.W)).asSInt.asUInt

		}

		//J-Type jal
		is("b1101111".U){
			imm := Cat(in_data.inst(31),in_data.inst(19,12),in_data.inst(20),in_data.inst(30,21),0.U(1.W)).asSInt.asUInt
		}

		//JR-Type jalr
		is("b1100111".U){
			imm := in_data.inst(31,20).asSInt.asUInt			
		}

		//CSR
		is("b1100011".U){

		}

	}
}