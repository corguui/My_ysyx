import "DPI-C" function void vlg_uart(int ad,int data);
module uart(
    input clock,
    input wen,
    input [31:0] addr,
    input [31:0] data
);

    always @(posedge clock) begin
        if (wen) begin
            vlg_uart(addr,data);
        end
    end
    
endmodule