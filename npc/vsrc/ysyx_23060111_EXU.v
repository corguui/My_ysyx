module ysyx_23060111_EXU(
  output [31:0] dnpc,
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
  output [31:0] wdata,
  output[4:0] waddr,
  output[4:0] raddr,
  input[31:0] rout,
  output  wen
);
  assign waddr=rd[11:7]; //R(rd)
  assign raddr=rs1[19:15]; //src1
  assign wen=1'b1;


  MuxKeyWithDefault #(5, 4, 64 ) i1 ({wdata,dnpc},type_i , 64'b0, {
	4'd1, {pc+imm,snpc},
	4'd2, {imm,snpc},
	4'd3, {snpc,pc+imm},
	4'd4, {rout+imm,snpc},
	4'd5, {snpc,imm+rout}
  });
/*
  always @(type_i)
	begin
	case(type_i)
	//auipc  UPC
	4'd1:begin
 	     wdata=pc+imm;            dnpc=snpc;	
	     end
	//lui    U
	4'd2:begin
	     wdata=imm;                dnpc=snpc;
	     end
	//jal    J
	4'd3:begin
	     wdata=snpc;               dnpc=pc+imm;
             end
	//addi   I
	4'd4:begin
	     wdata=rout+imm;           dnpc=snpc;
	     end
	//jalr   JR
	4'd5:begin
	     wdata=snpc;               dnpc=imm+rout;
	     end
	default: dnpc=32'h00000000;
	       
	endcase
	end
*/

endmodule
  
