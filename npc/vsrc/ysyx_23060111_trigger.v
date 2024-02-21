// 触发器模板
module ysyx_23060111_trigger #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  output reg raddr,
  input wen
);
  always @(posedge clk) begin
    if (rst)begin 
      dout <= RESET_VAL;
      raddr <= RESET_VAL;
    end
    else if (wen) dout <= din;
  end
endmodule

