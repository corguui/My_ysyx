package npc 

import chisel3._
import chisel3.util._

class IDUtoEXU extends Bundle{
    val src1 = Output(UInt(32.W))
    val src2 = Output(UInt(32.W))
    val alu_op = Output(UInt(4.W))
}

class IDU extends Module {
	val io = IO(new Bundle{
		val ifu2in = Flipped(Decoupled(new IFUtoIDU))
		val out2exu = Decoupled(new IDUtoEXU)
	})
    
	//IDU recive EXU
	val exu2s_idle :: exu2s_wait_ready :: Nil = Enum(2)
	val exu2s_state = RegInit(exu2s_idle)
	exu2s_state :=MuxLookup(exu2s_state,exu2s_idle)(List(
		exu2s_idle -> Mux(io.out2exu.valid,exu2s_wait_ready,exu2s_idle),
		exu2s_wait_ready -> Mux(io.out2exu.ready,exu2s_idle,exu2s_wait_ready)
	))


	val exu_data = Wire(new IDUtoEXU)
	exu_data.src1 := 0.U
	exu_data.src2 := 0.U
	exu_data.alu_op := 0.U

	val lastsrc1 = RegNext(exu_data.src1,1.U)
	val lastsrc2 = RegNext(exu_data.src2,1.U)
	val lastalu_op = RegNext(exu_data.alu_op,1.U)

	io.out2exu.valid := (exu_data.src1 =/= lastsrc1 ) | (exu_data.src2 =/= lastsrc2 ) | (exu_data.alu_op =/= lastalu_op )
	io.out2exu.bits := exu_data
	

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

	val opcode = in_data.inst(6,0)
	val rd = in_data.inst(11,7)
	val funct3 = in_data.inst(14,12)
	val rs1 = in_data.inst(19,15)
	val rs2 = in_data.inst(24,20)
	val funct7 = in_data.inst(31,25)
	val csr = in_data.inst(31,20)
	val imm = Wire(UInt(32.W))

	when(state === m2IFUprocess )
	{
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
			imm := in_data.inst(31,20).asSInt.asUInt
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
}