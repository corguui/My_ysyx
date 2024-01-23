module ysyx_23060111_pc(	
	input clk,
	input rst,
	output dnpc,
	output pc

);
	assign dnpc=pc+32'h4;
 	ysyx_23060111_trigger #(32,32'h80000000) renew_pc(clk,rst,dnpc,pc,1'b1);
	
endmodule
