import "DPI-C" function void vlg_uart(int ad,int data,int mask);
module uart(
    input clock,
    input wen,
    input [31:0] addr,
    input [31:0] data,
    input [31:0] mask
);

    always @(posedge clock) begin
        if (wen) begin
            vlg_uart(addr,data,mask);
        end
    end
    
endmodule