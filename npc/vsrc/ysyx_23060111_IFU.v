import "DPI-C" function void pmem_read(input int raddr,output int data);
module ysyx_23060111_IFU (
    input [31:0] pc, 
    output [31:0]inst
);
    always @(pc) begin
        if(pc!=32'b0)
        begin
        pmem_read (pc,inst);
        end
    end

endmodule