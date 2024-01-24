module ysyx_23060111_EXU(
  output reg[31:0] dnpc,
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
  output reg[31:0] wdata,
  output[4:0] waddr,
  output[4:0] raddr,
  input[31:0] rout,
  output reg wen,
  output[35:0] rbb
);
	
  assign waddr=rd[11:7]; //R(rd)
  assign raddr=rs1[19:15]; //src1
  assign rbb={opcode,rd,funct3,rs1,rs2,funct7,type_i};//rbb


  always @(type_i)
	begin
	case(type_i)
	//auipc  UPC
	4'd1:begin
 	     wdata<=pc+imm;    wen<=1'b1;         dnpc<=snpc;	
	     end
	//lui    U
	4'd2:begin
	     wdata<=imm;       wen<=1'b1;         dnpc<=snpc;
	     end
	//jal    J
	4'd3:begin
	     wdata<=snpc;      wen<=1'b1;         dnpc<=pc+imm;
             end
	//addi   I
	4'd4:begin
	     wdata<=rout+imm;  wen<=1'b1;         dnpc<=snpc;
	     end
	//jalr   JR
	4'd5:begin
	     wdata<=snpc;      wen<=1'b1;         dnpc<=imm+rout;
	     end
	default: dnpc<=32'h00000000;
	       
	endcase
	
	end

endmodule
  
