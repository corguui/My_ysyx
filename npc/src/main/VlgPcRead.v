import "DPI-C" function int vlg_pc_read(input int pc);
module VlgPcRead(
    input clk,
    input [31:0] pc,
    input pc_en,
    output reg [31:0] inst
);
    always@(posedge clk) begin
        if(pc_en)
        begin
            inst=vlg_pc_read(pc);
        end
        else
        begin
            inst=0;
        end
    end


endmodule