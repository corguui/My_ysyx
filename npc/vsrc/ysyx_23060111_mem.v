import "DPI-C" function uint32_t pmem_read(input int raddr, int len);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input  int wmask);
module ysyx_23060111_mem (
        input [31:0] raddr,
        input [31:0] waddr,
        input [31:0] wdata,
        input [31:0] wmask,
        input  wen,
        input valid,
        output reg [31:0] rdata
);
    wire [31:0] len;
    assign len = 32'd4;
always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(raddr,len);
    if (wen) begin // 有写请求时
      pmem_write(waddr, wdata, wmask);
    end
  end
  else begin
    rdata = 0;
  end
end


endmodule