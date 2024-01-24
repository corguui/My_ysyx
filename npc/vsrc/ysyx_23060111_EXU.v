module ysyx_23060111_EXU(
  output[31:0] dnpc,
  input [31:0] pc,
  input [31:0] snpc,
  input[6:0] opcode,
  input[11:7] rd,
  input[14:12] funct3,
  input[19:15] rs1,
  input[24:20] rs2,
  input[31:25] funct7,
  input[3:0] type_i,
  input[31:0] imm,
  output[31:0] wdata,
  output[4:0] waddr,
  output[4:0] raddr,
  output[31:0] rout,
  output wen,
  output[31:0] rbb
);
	
  assign waddr=rd[11:7]; //R(rd)
  assign raddr=rs1[19:15]; //src1
  assign rbb={opcode,rd,rs1,funct3,rs1,rs2,funct7};//rbb


  always @(type_i)
	begin
	case(type_i)
	//auipc  UPC
	4'd1: wdata=pc+imm;    wen=1'b1;         dnpc=snpc;	
	//lui    U
	4'd2: wdata=imm;       wen=1'b1;         dnpc=snpc;
	//jal    J
	4'd3: wdata=snpc;      wen=1'b1;         dnpc=pc+imm;
	//addi   I
	4'd4: wdata=rout+imm;  wen=1'b1;         dnpc=snpc;
	//jalr   JR
	4'd5: wdata=snpc;      wen=1'b1;         dnpc=imm+rout;
	default: dnpc=32'h00000000;
	       

	endcase
	
	end

endmodule
  
