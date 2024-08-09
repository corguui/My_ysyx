import "DPI-C" function int vlg_pc_read(input int pc);

module VlgPcRead(
    input  [31:0] pc,
    output reg [31:0] inst
);
      always@(*) begin
            inst=vlg_pc_read(pc);
    end

endmodule
