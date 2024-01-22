module ysyx_23060111_EXU(
  input       clk,
  input       rst,
  output [31:0] dnpc,
  input [31:0] snpc,
  input [31:20] imm,
  input[19:15] rs1,
  input[14:12] funct3,
  input[11:7] rd,
  input[6:0] opcode,
  output [31:0] pc,
  output[20:1] rbb,
  input  [31:0] rout,
  output [31:0] wdata,
  output [4:0] waddr,
  output [4:0] raddr,
  output wen
);
  reg dnpc,snpc,imm,pc,rout,wdata,waddr,raddr,wen;
  reg [31:0] imm_32;
  assign rbb ={rd,rs1,funct3,opcode};
  ysyx_23060111_trigger #(32,32'h80000000) renew_pc(clk,rst,dnpc,pc,1'b1);
	
  always @(posedge clk)
    begin
  	casex({imm,rs1,funct3,rd,opcode})
	//addi
	32'b?????????????????000?????0010011:
	begin
	imm_32={20'h00000,imm};
	raddr=rs1[19:15];
  	wdata=rout+imm_32;
  	waddr=rd[11:7];
  	wen=1'b1;
	end
	//auipc
	32'b?????????????????????????0010111:
	begin
	waddr=rd[11:7];
	wdata=pc+{12'b0,imm,rs1,funct3};	
	wen=1'b1;//write
	end
	32'b?????????????????????????0110111:
	begin
	waddr=rd[11:7];
	wdata={12'b0,imm,rs1,funct3};
	wen=1'b1;
	end
	//jalr
	32'b?????????????????000?????1100111:
	begin
	waddr=rd[11:7];
	wdata=snpc;
	dnpc={20'b0,imm}+{27'b0,rs1};
	wen=1'b1;
	end
	//jal
	32'b?????????????????????????1101111:
	begin
	waddr=rd[11:7];
	wdata=snpc;
	dnpc={12'b0,imm,rs1,funct3}+pc;
	wen=1'b1;
	end
	default:
	wen=1'b0;
	endcase
    end

  //addi
  //assign imm_32={20'h00000,imm};
  //assign raddr=rs1[19:15];
  //assign wdata=rout+imm_32;
  //assign waddr=rd[11:7];
  //assign wen=1'b1;
  //assign dnpc=32'h80000004;

endmodule
  
