module ysyx_23060111_IDU(
  input [31:0] snpc,
  input [31:0] inst,
  output [31:0] dnpc,
  output [31:20] imm,
  output [19:15] rs1,
  output [11:7] rd
);
  assign dnpc=snpc;
  assign imm=inst[31:20];
  assign rs1=inst[19:15];
  assign rd=inst[11:7];
endmodule
