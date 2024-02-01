import "DPI-C" function int pmem_read(input int raddr, int len); 
module ysyx_23060111_IFU (
    input [31:0] pc, 
    output reg [31:0]inst
);
    wire [31:0] len;
    assign len=32'd8;
    always @(pc) begin
        inst = pmem_read (pc,len);
    end

endmodule