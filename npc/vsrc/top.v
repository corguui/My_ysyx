module top(
  input[31:0] pc,
  input[31:0] b,
  output[31:0] f
);
 assign f=pc^b;
endmodule
