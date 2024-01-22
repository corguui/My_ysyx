extern ysyx_23060111_reg #(5,32) reg_$0;
module ysyx_23060111_EXU(
  input       clk,
  input       rst,
  output[31:0] dnpc,
  input[31:20] imm,
  input[19:15] rs1,
  input[14:12] funct3,
  input[11:7] rd,
  input[6:0] opcode,
  output[31:0] pc,
  output[31:0] reg_out,
  output[31:0] reg_out1,
  output[20:1] out
);
  reg [31:0] imm_32;
  assign imm_32={20'h00000,imm};
  assign out ={rd,rs1,funct3,opcode};
  assign dnpc=32'h80000008;
 ysyx_23060111_trigger #(32,32'h80000000) renew_pc(clk,rst,dnpc,pc,1'b1);
//ysyx_23060111_reg #(5,32) reg_src1(clk,0,rs1[19:15],1'b0,reg_out);
reg_$0.wdata=reg_out+imm_32;
reg_$0.waddr=rd[11:7];
reg_$0.out=reg_out1;


endmodule
  
