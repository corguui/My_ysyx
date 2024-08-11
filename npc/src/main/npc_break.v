import "DPI-C" function void ebreak(input int inst);
module npc_break(
    input [31:0] inst   
);
always @(inst)
begin
    ebreak(inst);
end

endmodule