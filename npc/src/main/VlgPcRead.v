import "DPI-C" function int vlg_pc_read(input int pc);

module VlgPcRead(
    input  [31:0] pc,
    output [31:0] inst
);
    assign inst = vlg_pc_read(pc);
endmodule
