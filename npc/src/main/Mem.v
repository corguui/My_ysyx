import "DPI-C" function void vlg_pmem_write(input int waddr, input int wdata, input int wmask);
import "DPI-C" function int vlg_pmem_read(input int m_raddr,input int rmask);
module Mem(
    input clock,
    input [31:0] m_waddr,
    input [31:0] m_wdata,
    input [31:0] m_wmask,
    input m_wen,
    input [31:0] m_raddr,
    input [31:0] m_rmask,
    input m_ren,
    output reg [31:0] m_rdata,
    output m_wready

); 

    always @(*) begin
        if(m_ren) begin
            m_rdata=vlg_pmem_read(m_raddr,m_rmask);
        end
        else begin
            m_rdata=32'b0;
        end
    end

    always@(posedge clock)
    begin
        if(m_wen)
        begin
            m_wready=1'b1;
            vlg_pmem_write(m_waddr,m_wdata,m_wmask);
        end
        else
            m_wready=1'b0;
    end

endmodule