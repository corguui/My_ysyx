import "DPI-C" function int vlg_pmem_read(input int raddr);
import "DPI-C" function void vlg_pmem_write(
  input int waddr, input int wdata, input int wmask);
module ysyx_23060111_mem(
    input clk,
    input [31:0] waddr,
    input [31:0] wdata,
    input [31:0] wmask,
    output reg wen,
    input [31:0] raddr,
    output reg ren,
    output reg [31:0] rdata

); 

    always @(raddr) begin
             rdata=vlg_pmem_read(raddr);
/*
        if(ren) begin
             ren=1'b0;
        end
        */
    end

    always@(posedge clk)
    begin
        if(wen)
        begin
            vlg_pmem_write(waddr,wdata,wmask);
            wen=1'b0;
        end
    end

endmodule