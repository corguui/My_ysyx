//import "DPI-C" function void ebreak(input int inst);
module ysyx_23060111_top(
  input       clk,
  input[31:0] inst,
  output[31:0] val,
  output [31:0] snpc,
  output [31:0] dnpc,
  output [31:0] pc
  );

assign val=inst;
assign snpc=pc;

  wire [31:20] imm;
  wire[14:12] funct3;
  wire [19:15] rs1;
  wire[11:7] rd;
  wire[6:0] opcode;
  wire[31:0] wdata;
  wire[4:0]waddr;
  wire[4:0]raddr;
  wire wen;
  wire[31:0] rout;


 //init reg
ysyx_23060111_reg #(5,32) reg_$0(clk,wdata,waddr,raddr,wen,rout);
/*
assign wdata=0;
assign waddr=5'd0;
assign raddr=5'd0;
assign wen=1'b1;
*/

// ysyx_23060111_trigger #(32,32'h80000000) renew_pc(clk,rst,dnpc,pc,1'b1);

 //init idu
 ysyx_23060111_IDU init_idu (inst,imm,funct3,rs1,rd,opcode);

 //init exu
 ysyx_23060111_EXU init_exu (clk,dnpc,snpc,imm,rs1,funct3,rd,opcode,pc,rout,wdata,waddr,raddr,wen);





endmodule



/*
module ysyx_23060111_muxkeyinternal #(nr_key = 2, key_len = 1, data_len = 1, has_default = 0) (
  output reg [data_len-1:0] out,
  input [key_len-1:0] key,
  input [data_len-1:0] default_out,
  input [nr_key*(key_len + data_len)-1:0] lut
);

  localparam pair_len = key_len + data_len;
  wire [pair_len-1:0] pair_list [nr_key-1:0];
  wire [key_len-1:0] key_list [nr_key-1:0];
  wire [data_len-1:0] data_list [nr_key-1:0];

  generate
    for (genvar n = 0; n < nr_key; n = n + 1) begin
      assign pair_list[n] = lut[pair_len*(n+1)-1 : pair_len*n];
      assign data_list[n] = pair_list[n][data_len-1:0];
      assign key_list[n]  = pair_list[n][pair_len-1:data_len];
    end
  endgenerate

  reg [data_len-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < nr_key; i = i + 1) begin
      lut_out = lut_out | ({data_len{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!has_default) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule
*/
