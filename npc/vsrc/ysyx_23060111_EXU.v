module ysyx_23060111_EXU(
  input       clk,
  input       rst,
  input[31:0] pc,
  input[31:0] dnpc,
  input[31:20] imm,
  input[19:15] rs1,
  input[11:7] rd,
  output[31:0] reg_out,
  output[31:0] reg_out1
);
 ysyx_23060111_trigger #(31,32'h80000000) renew_pc(clk,rst,dnpc,pc,1'b1);
 ysyx_23060111_reg #(4,31) reg_src1(clk,0,rs1,1'b0,reg_out);
 ysyx_23060111_reg #(4,31) reg_rd(clk,reg_out+imm,rd,1'b1,reg_out1);



endmodule
  
