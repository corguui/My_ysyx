//import "DPI-C" function int vlg_pc_read(input int pc);
import "DPI-C" function int vlg_pmem_read(input int m_raddr,input int rmask);
module VlgPcRead(
    input clk,
    input [31:0] pc,
    input pc_en,
    output reg [31:0] inst
);
    always@(posedge clk) begin
        if(pc_en)
        begin
            //inst=vlg_pc_read(pc);
            inst=vlg_pmem_read(pc,32'h4);
        end
        else
            inst=0;
    end


endmodule