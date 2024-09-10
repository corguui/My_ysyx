// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+1105,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1106,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1107,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1110,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1111,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1112,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1113,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1114,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1115,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1116,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1117,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1118,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1119,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1120,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1121,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1122,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1123,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1124,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+1105,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1106,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1107,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1109,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1110,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1111,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1112,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1113,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1114,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1115,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1116,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1117,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1118,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1119,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1120,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1121,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1122,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1123,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1124,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+576,"spi_sck", false,-1);
    tracep->declBus(c+577,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1125,"spi_mosi", false,-1);
    tracep->declBit(c+1126,"spi_miso", false,-1);
    tracep->declBit(c+1123,"uart_rx", false,-1);
    tracep->declBit(c+1124,"uart_tx", false,-1);
    tracep->declBit(c+1127,"psram_sck", false,-1);
    tracep->declBit(c+1128,"psram_ce_n", false,-1);
    tracep->declBus(c+992,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1129,"sdram_clk", false,-1);
    tracep->declBit(c+578,"sdram_cke", false,-1);
    tracep->declBit(c+579,"sdram_cs", false,-1);
    tracep->declBit(c+580,"sdram_ras", false,-1);
    tracep->declBit(c+581,"sdram_cas", false,-1);
    tracep->declBit(c+582,"sdram_we", false,-1);
    tracep->declBus(c+583,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+584,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+585,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+586,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1105,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1106,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1107,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1108,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1109,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1110,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1111,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1112,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1113,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1114,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1115,"ps2_clk", false,-1);
    tracep->declBit(c+1116,"ps2_data", false,-1);
    tracep->declBus(c+1117,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1118,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1119,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1120,"vga_hsync", false,-1);
    tracep->declBit(c+1121,"vga_vsync", false,-1);
    tracep->declBit(c+1122,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+822,"in_psel", false,-1);
    tracep->declBit(c+7,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"in_pready", false,-1);
    tracep->declBus(c+994,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+826,"in_pslverr", false,-1);
    tracep->declBus(c+821,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+822,"out_psel", false,-1);
    tracep->declBit(c+7,"out_penable", false,-1);
    tracep->declBus(c+1146,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"out_pwrite", false,-1);
    tracep->declBus(c+824,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"out_pready", false,-1);
    tracep->declBus(c+994,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+826,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+822,"auto_in_psel", false,-1);
    tracep->declBit(c+7,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+821,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_in_pready", false,-1);
    tracep->declBit(c+826,"auto_in_pslverr", false,-1);
    tracep->declBus(c+994,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+827,"auto_out_6_psel", false,-1);
    tracep->declBit(c+511,"auto_out_6_penable", false,-1);
    tracep->declBit(c+823,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+821,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1146,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+587,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1147,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+588,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+828,"auto_out_5_psel", false,-1);
    tracep->declBit(c+512,"auto_out_5_penable", false,-1);
    tracep->declBit(c+823,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+829,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1146,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1149,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+830,"auto_out_4_psel", false,-1);
    tracep->declBit(c+513,"auto_out_4_penable", false,-1);
    tracep->declBit(c+823,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+831,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1152,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+832,"auto_out_3_psel", false,-1);
    tracep->declBit(c+514,"auto_out_3_penable", false,-1);
    tracep->declBit(c+823,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+831,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1155,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1156,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+833,"auto_out_2_psel", false,-1);
    tracep->declBit(c+515,"auto_out_2_penable", false,-1);
    tracep->declBit(c+823,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+821,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1146,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1147,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+8,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+834,"auto_out_1_psel", false,-1);
    tracep->declBit(c+835,"auto_out_1_penable", false,-1);
    tracep->declBit(c+823,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+831,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1147,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+986,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+837,"auto_out_0_psel", false,-1);
    tracep->declBit(c+838,"auto_out_0_penable", false,-1);
    tracep->declBit(c+823,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+829,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1146,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1147,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+590,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+839,"sel_0", false,-1);
    tracep->declBit(c+840,"sel_1", false,-1);
    tracep->declBit(c+841,"sel_2", false,-1);
    tracep->declBit(c+842,"sel_3", false,-1);
    tracep->declBit(c+843,"sel_4", false,-1);
    tracep->declBit(c+844,"sel_5", false,-1);
    tracep->declBit(c+845,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+846,"auto_in_awready", false,-1);
    tracep->declBit(c+847,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+846,"auto_in_wready", false,-1);
    tracep->declBit(c+849,"auto_in_wvalid", false,-1);
    tracep->declBus(c+850,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+995,"auto_in_bready", false,-1);
    tracep->declBit(c+996,"auto_in_bvalid", false,-1);
    tracep->declBus(c+11,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+852,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+853,"auto_in_arready", false,-1);
    tracep->declBit(c+854,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+997,"auto_in_rready", false,-1);
    tracep->declBit(c+998,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+852,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+822,"auto_out_psel", false,-1);
    tracep->declBit(c+7,"auto_out_penable", false,-1);
    tracep->declBit(c+823,"auto_out_pwrite", false,-1);
    tracep->declBus(c+821,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+824,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_out_pready", false,-1);
    tracep->declBit(c+826,"auto_out_pslverr", false,-1);
    tracep->declBus(c+994,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+7,"nodeOut_penable", false,-1);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBit(c+853,"accept_read", false,-1);
    tracep->declBit(c+846,"accept_write", false,-1);
    tracep->declBit(c+16,"is_write_r", false,-1);
    tracep->declBit(c+823,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+11,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+856,"resp", false,-1, 1,0);
    tracep->declBus(c+21,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+852,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+998,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+22,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+996,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+857,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+859,"auto_in_wvalid", false,-1);
    tracep->declBus(c+860,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"auto_in_wlast", false,-1);
    tracep->declBit(c+987,"auto_in_bready", false,-1);
    tracep->declBit(c+999,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+540,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+862,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1157,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+863,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_in_rready", false,-1);
    tracep->declBit(c+1002,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_in_rlast", false,-1);
    tracep->declBit(c+1006,"auto_out_awready", false,-1);
    tracep->declBit(c+864,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1007,"auto_out_wready", false,-1);
    tracep->declBit(c+865,"auto_out_wvalid", false,-1);
    tracep->declBus(c+850,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_out_wlast", false,-1);
    tracep->declBit(c+1008,"auto_out_bready", false,-1);
    tracep->declBit(c+1009,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1012,"auto_out_arready", false,-1);
    tracep->declBit(c+867,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1001,"auto_out_rready", false,-1);
    tracep->declBit(c+1002,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+542,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1013,"auto_out_rlast", false,-1);
    tracep->declBit(c+865,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+28,"w_idle", false,-1);
    tracep->declBit(c+1014,"in_awready", false,-1);
    tracep->declBit(c+29,"busy", false,-1);
    tracep->declBus(c+30,"r_addr", false,-1, 31,0);
    tracep->declBus(c+31,"r_len", false,-1, 7,0);
    tracep->declBus(c+32,"len", false,-1, 7,0);
    tracep->declBus(c+868,"addr", false,-1, 31,0);
    tracep->declBit(c+33,"busy_1", false,-1);
    tracep->declBus(c+34,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+35,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+36,"len_1", false,-1, 7,0);
    tracep->declBus(c+869,"addr_1", false,-1, 31,0);
    tracep->declBit(c+37,"wbeats_latched", false,-1);
    tracep->declBit(c+864,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+870,"wbeats_valid", false,-1);
    tracep->declBus(c+38,"w_counter", false,-1, 8,0);
    tracep->declBus(c+871,"w_todo", false,-1, 8,0);
    tracep->declBit(c+866,"w_last", false,-1);
    tracep->declBit(c+1008,"nodeOut_bready", false,-1);
    tracep->declBus(c+39,"error_0", false,-1, 1,0);
    tracep->declBus(c+40,"error_1", false,-1, 1,0);
    tracep->declBus(c+41,"error_2", false,-1, 1,0);
    tracep->declBus(c+42,"error_3", false,-1, 1,0);
    tracep->declBus(c+43,"error_4", false,-1, 1,0);
    tracep->declBus(c+44,"error_5", false,-1, 1,0);
    tracep->declBus(c+45,"error_6", false,-1, 1,0);
    tracep->declBus(c+46,"error_7", false,-1, 1,0);
    tracep->declBus(c+47,"error_8", false,-1, 1,0);
    tracep->declBus(c+48,"error_9", false,-1, 1,0);
    tracep->declBus(c+49,"error_10", false,-1, 1,0);
    tracep->declBus(c+50,"error_11", false,-1, 1,0);
    tracep->declBus(c+51,"error_12", false,-1, 1,0);
    tracep->declBus(c+52,"error_13", false,-1, 1,0);
    tracep->declBus(c+53,"error_14", false,-1, 1,0);
    tracep->declBus(c+54,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+862,"io_enq_valid", false,-1);
    tracep->declBus(c+1157,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+863,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1158,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1159,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1160,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1015,"io_deq_ready", false,-1);
    tracep->declBit(c+867,"io_deq_valid", false,-1);
    tracep->declBus(c+12,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+872,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+55,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+13,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+56,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+57,"ram", false,-1, 48,0);
    tracep->declBit(c+59,"full", false,-1);
    tracep->declBit(c+867,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1016,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+857,"io_enq_valid", false,-1);
    tracep->declBus(c+1157,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+858,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1158,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1159,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1160,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1017,"io_deq_ready", false,-1);
    tracep->declBit(c+873,"io_deq_valid", false,-1);
    tracep->declBus(c+9,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+874,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+60,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+10,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+61,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+62,"ram", false,-1, 48,0);
    tracep->declBit(c+64,"full", false,-1);
    tracep->declBit(c+873,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1018,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+859,"io_enq_valid", false,-1);
    tracep->declBus(c+860,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+861,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1147,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+875,"io_deq_valid", false,-1);
    tracep->declBus(c+850,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+851,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+65,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+66,"ram", false,-1, 36,0);
    tracep->declBit(c+68,"full", false,-1);
    tracep->declBit(c+875,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1020,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+1021,"auto_in_awready", false,-1);
    tracep->declBit(c+876,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+988,"auto_in_wready", false,-1);
    tracep->declBit(c+878,"auto_in_wvalid", false,-1);
    tracep->declBus(c+850,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_in_bready", false,-1);
    tracep->declBit(c+69,"auto_in_bvalid", false,-1);
    tracep->declBus(c+70,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1023,"auto_in_arready", false,-1);
    tracep->declBit(c+879,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+880,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1024,"auto_in_rready", false,-1);
    tracep->declBit(c+72,"auto_in_rvalid", false,-1);
    tracep->declBus(c+73,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1023,"nodeIn_arready", false,-1);
    tracep->declBit(c+1021,"nodeIn_awready", false,-1);
    tracep->declBit(c+881,"w_sel0", false,-1);
    tracep->declBit(c+69,"w_full", false,-1);
    tracep->declBus(c+70,"w_id", false,-1, 3,0);
    tracep->declBit(c+76,"r_sel1", false,-1);
    tracep->declBit(c+77,"w_sel1", false,-1);
    tracep->declBit(c+72,"r_full", false,-1);
    tracep->declBus(c+73,"r_id", false,-1, 3,0);
    tracep->declBit(c+1025,"ren", false,-1);
    tracep->declBit(c+78,"rdata_REG", false,-1);
    tracep->declBus(c+79,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+80,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+81,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+82,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+882,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1025,"R0_en", false,-1);
    tracep->declBit(c+1103,"R0_clk", false,-1);
    tracep->declBus(c+83,"R0_data", false,-1, 31,0);
    tracep->declBus(c+883,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1026,"W0_en", false,-1);
    tracep->declBit(c+1103,"W0_clk", false,-1);
    tracep->declBus(c+850,"W0_data", false,-1, 31,0);
    tracep->declBus(c+851,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+857,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+859,"auto_in_wvalid", false,-1);
    tracep->declBus(c+860,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"auto_in_wlast", false,-1);
    tracep->declBit(c+987,"auto_in_bready", false,-1);
    tracep->declBit(c+999,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+540,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+862,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1157,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+863,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_in_rready", false,-1);
    tracep->declBit(c+1002,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_in_rlast", false,-1);
    tracep->declBit(c+23,"auto_out_awready", false,-1);
    tracep->declBit(c+857,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_out_wready", false,-1);
    tracep->declBit(c+859,"auto_out_wvalid", false,-1);
    tracep->declBus(c+860,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"auto_out_wlast", false,-1);
    tracep->declBit(c+987,"auto_out_bready", false,-1);
    tracep->declBit(c+999,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+540,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_out_arready", false,-1);
    tracep->declBit(c+862,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1157,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+863,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_out_rready", false,-1);
    tracep->declBit(c+1002,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+1027,"auto_in_awready", false,-1);
    tracep->declBit(c+884,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1007,"auto_in_wready", false,-1);
    tracep->declBit(c+865,"auto_in_wvalid", false,-1);
    tracep->declBus(c+850,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_in_wlast", false,-1);
    tracep->declBit(c+1008,"auto_in_bready", false,-1);
    tracep->declBit(c+1009,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1028,"auto_in_arready", false,-1);
    tracep->declBit(c+885,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1001,"auto_in_rready", false,-1);
    tracep->declBit(c+1002,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1013,"auto_in_rlast", false,-1);
    tracep->declBit(c+1021,"auto_out_2_awready", false,-1);
    tracep->declBit(c+876,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+877,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+988,"auto_out_2_wready", false,-1);
    tracep->declBit(c+878,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+850,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"auto_out_2_bready", false,-1);
    tracep->declBit(c+69,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+70,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1023,"auto_out_2_arready", false,-1);
    tracep->declBit(c+879,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+880,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1024,"auto_out_2_rready", false,-1);
    tracep->declBit(c+72,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+73,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+886,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+887,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+84,"auto_out_1_arready", false,-1);
    tracep->declBit(c+888,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+889,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+543,"auto_out_1_rready", false,-1);
    tracep->declBit(c+85,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+86,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+846,"auto_out_0_awready", false,-1);
    tracep->declBit(c+847,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+846,"auto_out_0_wready", false,-1);
    tracep->declBit(c+849,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+850,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+995,"auto_out_0_bready", false,-1);
    tracep->declBit(c+996,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+11,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+852,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+853,"auto_out_0_arready", false,-1);
    tracep->declBit(c+854,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+997,"auto_out_0_rready", false,-1);
    tracep->declBit(c+998,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+539,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+852,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1009,"in_0_bvalid", false,-1);
    tracep->declBit(c+1002,"in_0_rvalid", false,-1);
    tracep->declBit(c+1027,"nodeIn_awready", false,-1);
    tracep->declBit(c+890,"requestARIO_0_0", false,-1);
    tracep->declBit(c+891,"requestARIO_0_1", false,-1);
    tracep->declBit(c+892,"requestARIO_0_2", false,-1);
    tracep->declBit(c+893,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+894,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+895,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+88,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+89,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+90,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+91,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+92,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+93,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+94,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+95,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+96,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+97,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+98,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+99,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+100,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+101,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+102,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+103,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+104,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+105,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+106,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+107,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+108,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+109,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+110,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+111,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+112,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+113,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+114,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+115,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+116,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+117,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+118,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+119,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+120,"latched", false,-1);
    tracep->declBit(c+896,"in_0_awvalid", false,-1);
    tracep->declBit(c+897,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+898,"in_0_wvalid", false,-1);
    tracep->declBit(c+121,"idle_3", false,-1);
    tracep->declBit(c+1029,"anyValid", false,-1);
    tracep->declBus(c+1030,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1031,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1032,"prefixOR_1", false,-1);
    tracep->declBit(c+1033,"winner_3_1", false,-1);
    tracep->declBit(c+1034,"winner_3_2", false,-1);
    tracep->declBit(c+123,"state_3_0", false,-1);
    tracep->declBit(c+124,"state_3_1", false,-1);
    tracep->declBit(c+125,"state_3_2", false,-1);
    tracep->declBit(c+1035,"muxState_3_0", false,-1);
    tracep->declBit(c+1036,"muxState_3_1", false,-1);
    tracep->declBit(c+1037,"muxState_3_2", false,-1);
    tracep->declBit(c+126,"idle_4", false,-1);
    tracep->declBit(c+1038,"anyValid_1", false,-1);
    tracep->declBus(c+1039,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+127,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1040,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1041,"winner_4_0", false,-1);
    tracep->declBit(c+1042,"winner_4_2", false,-1);
    tracep->declBit(c+128,"state_4_0", false,-1);
    tracep->declBit(c+129,"state_4_2", false,-1);
    tracep->declBit(c+1043,"muxState_4_0", false,-1);
    tracep->declBit(c+1044,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+130,"io_enq_ready", false,-1);
    tracep->declBit(c+897,"io_enq_valid", false,-1);
    tracep->declBus(c+899,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
    tracep->declBit(c+900,"io_deq_valid", false,-1);
    tracep->declBus(c+901,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+131,"wrap", false,-1);
    tracep->declBit(c+132,"wrap_1", false,-1);
    tracep->declBit(c+133,"maybe_full", false,-1);
    tracep->declBit(c+134,"ptr_match", false,-1);
    tracep->declBit(c+135,"empty", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+900,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1046,"do_deq", false,-1);
    tracep->declBit(c+1047,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+132,"R0_addr", false,-1);
    tracep->declBit(c+1161,"R0_en", false,-1);
    tracep->declBit(c+1103,"R0_clk", false,-1);
    tracep->declBus(c+137,"R0_data", false,-1, 2,0);
    tracep->declBit(c+131,"W0_addr", false,-1);
    tracep->declBit(c+1047,"W0_en", false,-1);
    tracep->declBit(c+1103,"W0_clk", false,-1);
    tracep->declBus(c+899,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+138+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+1006,"auto_in_awready", false,-1);
    tracep->declBit(c+864,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1007,"auto_in_wready", false,-1);
    tracep->declBit(c+865,"auto_in_wvalid", false,-1);
    tracep->declBus(c+850,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_in_wlast", false,-1);
    tracep->declBit(c+1008,"auto_in_bready", false,-1);
    tracep->declBit(c+1009,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1012,"auto_in_arready", false,-1);
    tracep->declBit(c+867,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1001,"auto_in_rready", false,-1);
    tracep->declBit(c+1002,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+542,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1013,"auto_in_rlast", false,-1);
    tracep->declBit(c+1027,"auto_out_awready", false,-1);
    tracep->declBit(c+884,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+848,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1007,"auto_out_wready", false,-1);
    tracep->declBit(c+865,"auto_out_wvalid", false,-1);
    tracep->declBus(c+850,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+851,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+866,"auto_out_wlast", false,-1);
    tracep->declBit(c+1008,"auto_out_bready", false,-1);
    tracep->declBit(c+1009,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1010,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1028,"auto_out_arready", false,-1);
    tracep->declBit(c+885,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1001,"auto_out_rready", false,-1);
    tracep->declBit(c+1002,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1013,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
    tracep->declBit(c+141,"io_deq_valid", false,-1);
    tracep->declBit(c+142,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+142,"ram_real_last", false,-1);
    tracep->declBit(c+141,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+143,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1049,"io_deq_ready", false,-1);
    tracep->declBit(c+145,"io_deq_valid", false,-1);
    tracep->declBit(c+146,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+146,"ram_real_last", false,-1);
    tracep->declBit(c+145,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+147,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
    tracep->declBit(c+149,"io_deq_valid", false,-1);
    tracep->declBit(c+150,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+150,"ram_real_last", false,-1);
    tracep->declBit(c+149,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+151,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1051,"io_deq_ready", false,-1);
    tracep->declBit(c+153,"io_deq_valid", false,-1);
    tracep->declBit(c+154,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+154,"ram_real_last", false,-1);
    tracep->declBit(c+153,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+155,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1052,"io_deq_ready", false,-1);
    tracep->declBit(c+157,"io_deq_valid", false,-1);
    tracep->declBit(c+158,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+158,"ram_real_last", false,-1);
    tracep->declBit(c+157,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+159,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1053,"io_deq_ready", false,-1);
    tracep->declBit(c+161,"io_deq_valid", false,-1);
    tracep->declBit(c+162,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+162,"ram_real_last", false,-1);
    tracep->declBit(c+161,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+163,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1054,"io_deq_ready", false,-1);
    tracep->declBit(c+165,"io_deq_valid", false,-1);
    tracep->declBit(c+166,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+166,"ram_real_last", false,-1);
    tracep->declBit(c+165,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1055,"io_deq_ready", false,-1);
    tracep->declBit(c+169,"io_deq_valid", false,-1);
    tracep->declBit(c+170,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+170,"ram_real_last", false,-1);
    tracep->declBit(c+169,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+171,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1056,"io_deq_ready", false,-1);
    tracep->declBit(c+173,"io_deq_valid", false,-1);
    tracep->declBit(c+174,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+174,"ram_real_last", false,-1);
    tracep->declBit(c+173,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+175,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1057,"io_deq_ready", false,-1);
    tracep->declBit(c+177,"io_deq_valid", false,-1);
    tracep->declBit(c+178,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+178,"ram_real_last", false,-1);
    tracep->declBit(c+177,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+179,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1058,"io_deq_ready", false,-1);
    tracep->declBit(c+181,"io_deq_valid", false,-1);
    tracep->declBit(c+182,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+182,"ram_real_last", false,-1);
    tracep->declBit(c+181,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+183,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1059,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBit(c+186,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+186,"ram_real_last", false,-1);
    tracep->declBit(c+185,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+187,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1060,"io_deq_ready", false,-1);
    tracep->declBit(c+189,"io_deq_valid", false,-1);
    tracep->declBit(c+190,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+190,"ram_real_last", false,-1);
    tracep->declBit(c+189,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+191,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1061,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBit(c+194,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+194,"ram_real_last", false,-1);
    tracep->declBit(c+193,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+195,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1062,"io_deq_ready", false,-1);
    tracep->declBit(c+197,"io_deq_valid", false,-1);
    tracep->declBit(c+198,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+198,"ram_real_last", false,-1);
    tracep->declBit(c+197,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+199,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1063,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBit(c+202,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+202,"ram_real_last", false,-1);
    tracep->declBit(c+201,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+203,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1064,"io_deq_ready", false,-1);
    tracep->declBit(c+205,"io_deq_valid", false,-1);
    tracep->declBit(c+206,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+206,"ram_real_last", false,-1);
    tracep->declBit(c+205,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+207,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1065,"io_deq_ready", false,-1);
    tracep->declBit(c+209,"io_deq_valid", false,-1);
    tracep->declBit(c+210,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+210,"ram_real_last", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+211,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1066,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1067,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1068,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1069,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1070,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1071,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1072,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1074,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+261,"io_deq_valid", false,-1);
    tracep->declBit(c+262,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"ram_real_last", false,-1);
    tracep->declBit(c+261,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+263,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBit(c+266,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"ram_real_last", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+267,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+23,"auto_master_out_awready", false,-1);
    tracep->declBit(c+857,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1157,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+858,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_wready", false,-1);
    tracep->declBit(c+859,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+860,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+987,"auto_master_out_bready", false,-1);
    tracep->declBit(c+999,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1000,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+540,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_arready", false,-1);
    tracep->declBit(c+862,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1157,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+863,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1158,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1001,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1002,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1003,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1004,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+541,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+1147,"io_interrupt", false,-1);
    tracep->declBit(c+23,"io_master_awready", false,-1);
    tracep->declBit(c+857,"io_master_awvalid", false,-1);
    tracep->declBus(c+858,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1157,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_wready", false,-1);
    tracep->declBit(c+859,"io_master_wvalid", false,-1);
    tracep->declBus(c+860,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"io_master_wlast", false,-1);
    tracep->declBit(c+987,"io_master_bready", false,-1);
    tracep->declBit(c+999,"io_master_bvalid", false,-1);
    tracep->declBus(c+540,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1000,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+25,"io_master_arready", false,-1);
    tracep->declBit(c+862,"io_master_arvalid", false,-1);
    tracep->declBus(c+863,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1157,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1001,"io_master_rready", false,-1);
    tracep->declBit(c+1002,"io_master_rvalid", false,-1);
    tracep->declBus(c+1005,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1004,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+541,"io_master_rlast", false,-1);
    tracep->declBus(c+1003,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1147,"io_slave_awready", false,-1);
    tracep->declBit(c+1147,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1162,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1157,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1159,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1160,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1147,"io_slave_wready", false,-1);
    tracep->declBit(c+1147,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1162,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1157,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1147,"io_slave_wlast", false,-1);
    tracep->declBit(c+1147,"io_slave_bready", false,-1);
    tracep->declBit(c+1147,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1160,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1157,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1147,"io_slave_arready", false,-1);
    tracep->declBit(c+1147,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1162,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1157,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1158,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1159,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1160,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1147,"io_slave_rready", false,-1);
    tracep->declBit(c+1147,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1160,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1162,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1147,"io_slave_rlast", false,-1);
    tracep->declBus(c+1157,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+902,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+863,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+862,"io_axi_ar_arvalid", false,-1);
    tracep->declBit(c+25,"io_axi_ar_arready", false,-1);
    tracep->declBus(c+1004,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1005,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1002,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+1001,"io_axi_r_rready", false,-1);
    tracep->declBus(c+858,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+857,"io_axi_aw_awvalid", false,-1);
    tracep->declBit(c+23,"io_axi_aw_awready", false,-1);
    tracep->declBus(c+860,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+861,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+859,"io_axi_w_wvalid", false,-1);
    tracep->declBit(c+24,"io_axi_w_wready", false,-1);
    tracep->declBus(c+540,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+999,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+987,"io_axi_b_bready", false,-1);
    tracep->declBus(c+516,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+903,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1132,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1133,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+1080,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+904,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+269,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+905,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+1081,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1134,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1083,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+517,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+906,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+518,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+519,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+271,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+907,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+1135,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1085,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+272,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_sta", false,-1);
    tracep->declBus(c+908,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+909,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+910,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+989,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+990,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1086,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1087,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+991,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+911,"io_ifu_sta", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+274,"io_idu2in_ready", false,-1);
    tracep->declBit(c+274,"io_idu2in_valid", false,-1);
    tracep->declBus(c+275,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+276,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+277,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+278,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+279,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+280,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+281,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+282,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+283,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+284,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+285,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+286,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+287,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+288,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+289,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+290,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+291,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+292,"io_out2lsu_ready", false,-1);
    tracep->declBit(c+292,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+293,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+294,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+295,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+296,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+297,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+298,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+299,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+300,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+301,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+302,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+303,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+304,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+305,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+306,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+307,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+308,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+309,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+292,"valid_reg", false,-1);
    tracep->declBus(c+310,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+311,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+312,"out_data_mem_ren", false,-1);
    tracep->declBit(c+313,"out_data_mem_wen", false,-1);
    tracep->declBus(c+314,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+315,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+316,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+317,"out_data_reg_wen", false,-1);
    tracep->declBus(c+318,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+319,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+320,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+321,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+322,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+323,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+324,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+325,"out_data_il_us", false,-1);
    tracep->declBus(c+326,"out_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+327,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+328,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+329,"in_data_mem_ren", false,-1);
    tracep->declBit(c+330,"in_data_mem_wen", false,-1);
    tracep->declBus(c+331,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+332,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+333,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+334,"in_data_reg_wen", false,-1);
    tracep->declBus(c+335,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+336,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+337,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+338,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+339,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+340,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+341,"in_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+342,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+343,"in_data_il_us", false,-1);
    tracep->declBit(c+344,"state", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+345,"io_src1", false,-1, 31,0);
    tracep->declBus(c+346,"io_src2", false,-1, 31,0);
    tracep->declBus(c+347,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+348,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+912,"io_ifu2in_ready", false,-1);
    tracep->declBit(c+912,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+913,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+914,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+915,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+274,"io_out2exu_ready", false,-1);
    tracep->declBit(c+274,"io_out2exu_valid", false,-1);
    tracep->declBus(c+275,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+276,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+277,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+278,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+279,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+280,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+281,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+282,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+283,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+284,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+285,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+286,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+287,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+288,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+289,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+290,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+291,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+916,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+917,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+918,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+919,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+920,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+520,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+350,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+902,"io_inv_flag", false,-1);
    tracep->declBus(c+351,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+352,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+921,"in_data_inst", false,-1, 31,0);
    tracep->declBit(c+353,"state", false,-1);
    tracep->declBus(c+922,"csr_imm", false,-1, 31,0);
    tracep->declBit(c+274,"valid_reg", false,-1);
    tracep->declBus(c+354,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+355,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+356,"out_data_mem_ren", false,-1);
    tracep->declBit(c+357,"out_data_mem_wen", false,-1);
    tracep->declBus(c+358,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+359,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+360,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+361,"out_data_reg_wen", false,-1);
    tracep->declBus(c+362,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+363,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+364,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+365,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+366,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+367,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+368,"out_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+369,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+370,"out_data_il_us", false,-1);
    tracep->declBus(c+923,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+924,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+925,"casez_tmp_1", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+921,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+912,"io_out2idu_ready", false,-1);
    tracep->declBit(c+912,"io_out2idu_valid", false,-1);
    tracep->declBus(c+913,"io_out2idu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+914,"io_out2idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+915,"io_out2idu_bits_inst", false,-1, 31,0);
    tracep->declBit(c+926,"io_wbu2in_ready", false,-1);
    tracep->declBit(c+926,"io_wbu2in_valid", false,-1);
    tracep->declBus(c+927,"io_wbu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+908,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+909,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+910,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+989,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+990,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1086,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1087,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+991,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+911,"io_ifu_sta", false,-1);
    tracep->declBus(c+914,"io_out2idu_bits_pc_0", false,-1, 31,0);
    tracep->declBus(c+928,"in_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+929,"state", false,-1);
    tracep->declBit(c+912,"valid_reg", false,-1);
    tracep->declBit(c+930,"wbu2in_reg", false,-1);
    tracep->declBus(c+931,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+932,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+933,"pc_reg", false,-1, 31,0);
    tracep->declBit(c+909,"arvalid_reg", false,-1);
    tracep->declBit(c+911,"sta_reg", false,-1);
    tracep->declBus(c+934,"pc_reg_REG", false,-1, 31,0);
    tracep->declBit(c+1087,"io_ifu_axi_r_rready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+292,"io_exu2in_ready", false,-1);
    tracep->declBit(c+292,"io_exu2in_valid", false,-1);
    tracep->declBus(c+293,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+294,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+295,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+296,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+297,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+298,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+299,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+300,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+301,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+302,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+303,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+304,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+305,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+306,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+307,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+308,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+309,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+935,"io_out2wbu_ready", false,-1);
    tracep->declBit(c+935,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+521,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+522,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+523,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+524,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+525,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+526,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+527,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+528,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+529,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+530,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+531,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+532,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+533,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+534,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+904,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+269,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+905,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+1081,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1134,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1082,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1083,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+518,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+519,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+271,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+907,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+517,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+906,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+1135,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1085,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+272,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_sta", false,-1);
    tracep->declBus(c+371,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+372,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+373,"in_data_mem_ren", false,-1);
    tracep->declBit(c+374,"in_data_mem_wen", false,-1);
    tracep->declBus(c+375,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+376,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+377,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+378,"in_data_reg_wen", false,-1);
    tracep->declBus(c+379,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+380,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+381,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+382,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+383,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+384,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+385,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+386,"in_data_il_us", false,-1);
    tracep->declBus(c+387,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+388,"state", false,-1);
    tracep->declBit(c+389,"ready_reg", false,-1);
    tracep->declBit(c+390,"ready_reg_1", false,-1);
    tracep->declBit(c+935,"valid_reg", false,-1);
    tracep->declBus(c+391,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+392,"out_data_pc", false,-1, 31,0);
    tracep->declBus(c+393,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+394,"out_data_reg_wen", false,-1);
    tracep->declBus(c+395,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+396,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+397,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+398,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+399,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+400,"out_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+401,"out_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+402,"out_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+403,"out_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+404,"out_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+405,"exu2in_valid", false,-1);
    tracep->declBus(c+406,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+407,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+269,"mem_ren_reg", false,-1);
    tracep->declBus(c+408,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+409,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+410,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+411,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+412,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+270,"awvalid_reg", false,-1);
    tracep->declBit(c+271,"wvalid_reg", false,-1);
    tracep->declBus(c+272,"io_lsu_addr_r", false,-1, 31,0);
    tracep->declBit(c+413,"sta_reg", false,-1);
    tracep->declBit(c+1083,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+1085,"io_lsu_axi_b_bready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBus(c+516,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+903,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1132,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1133,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+1080,"io_axi_r_rready", false,-1);
    tracep->declBus(c+936,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+414,"mtime", false,-1, 63,0);
    tracep->declBus(c+416,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+268,"rvalid_reg", false,-1);
    tracep->declBus(c+417,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+418,"arvalid_reg", false,-1);
    tracep->declBit(c+1088,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBus(c+535,"io_inData", false,-1, 31,0);
    tracep->declBit(c+536,"io_inValid", false,-1);
    tracep->declBus(c+419,"io_outData", false,-1, 31,0);
    tracep->declBit(c+537,"io_delayDone", false,-1);
    tracep->declBus(c+420,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+421,"counter", false,-1, 4,0);
    tracep->declBus(c+422,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+937,"io_csr_wen_2", false,-1);
    tracep->declBus(c+938,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+916,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+917,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+918,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+919,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+920,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+520,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+349,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+350,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+538,"io_wen", false,-1);
    tracep->declBus(c+939,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+940,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+941,"io_csr_wen_1", false,-1);
    tracep->declBus(c+942,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+943,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+423,"csr_0", false,-1, 31,0);
    tracep->declBus(c+424,"csr_1", false,-1, 31,0);
    tracep->declBus(c+350,"csr_2", false,-1, 31,0);
    tracep->declBus(c+425,"csr_3", false,-1, 31,0);
    tracep->declBus(c+426,"reg_0", false,-1, 31,0);
    tracep->declBus(c+427,"reg_1", false,-1, 31,0);
    tracep->declBus(c+428,"reg_2", false,-1, 31,0);
    tracep->declBus(c+429,"reg_3", false,-1, 31,0);
    tracep->declBus(c+430,"reg_4", false,-1, 31,0);
    tracep->declBus(c+431,"reg_5", false,-1, 31,0);
    tracep->declBus(c+432,"reg_6", false,-1, 31,0);
    tracep->declBus(c+433,"reg_7", false,-1, 31,0);
    tracep->declBus(c+434,"reg_8", false,-1, 31,0);
    tracep->declBus(c+435,"reg_9", false,-1, 31,0);
    tracep->declBus(c+436,"reg_10", false,-1, 31,0);
    tracep->declBus(c+437,"reg_11", false,-1, 31,0);
    tracep->declBus(c+438,"reg_12", false,-1, 31,0);
    tracep->declBus(c+439,"reg_13", false,-1, 31,0);
    tracep->declBus(c+440,"reg_14", false,-1, 31,0);
    tracep->declBus(c+349,"reg_15", false,-1, 31,0);
    tracep->declBus(c+441,"reg_16", false,-1, 31,0);
    tracep->declBus(c+442,"reg_17", false,-1, 31,0);
    tracep->declBus(c+443,"reg_18", false,-1, 31,0);
    tracep->declBus(c+444,"reg_19", false,-1, 31,0);
    tracep->declBus(c+445,"reg_20", false,-1, 31,0);
    tracep->declBus(c+446,"reg_21", false,-1, 31,0);
    tracep->declBus(c+447,"reg_22", false,-1, 31,0);
    tracep->declBus(c+448,"reg_23", false,-1, 31,0);
    tracep->declBus(c+449,"reg_24", false,-1, 31,0);
    tracep->declBus(c+450,"reg_25", false,-1, 31,0);
    tracep->declBus(c+451,"reg_26", false,-1, 31,0);
    tracep->declBus(c+452,"reg_27", false,-1, 31,0);
    tracep->declBus(c+453,"reg_28", false,-1, 31,0);
    tracep->declBus(c+454,"reg_29", false,-1, 31,0);
    tracep->declBus(c+455,"reg_30", false,-1, 31,0);
    tracep->declBus(c+456,"reg_31", false,-1, 31,0);
    tracep->declBus(c+917,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+919,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+520,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1131,"reset", false,-1);
    tracep->declBit(c+935,"io_lsu2in_ready", false,-1);
    tracep->declBit(c+935,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+521,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+522,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+523,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+524,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+525,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+526,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+527,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+528,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+529,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+530,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+531,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+532,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+533,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+534,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+926,"io_out2ifu_ready", false,-1);
    tracep->declBit(c+926,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+927,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+940,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+538,"io_reg_wen", false,-1);
    tracep->declBus(c+939,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+942,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+943,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+941,"io_csr_wen_1", false,-1);
    tracep->declBus(c+938,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+937,"io_csr_wen_2", false,-1);
    tracep->declBus(c+944,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+945,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+457,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+458,"in_data_reg_wen", false,-1);
    tracep->declBus(c+459,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+946,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+460,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+461,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+947,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+948,"in_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+462,"in_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+949,"in_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+950,"in_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+951,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+952,"state", false,-1);
    tracep->declBus(c+953,"out_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+926,"valid_reg", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"io_d", false,-1);
    tracep->declBit(c+463,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"io_d", false,-1);
    tracep->declBit(c+463,"io_q", false,-1);
    tracep->declBit(c+463,"sync_0", false,-1);
    tracep->declBit(c+464,"sync_1", false,-1);
    tracep->declBit(c+465,"sync_2", false,-1);
    tracep->declBit(c+466,"sync_3", false,-1);
    tracep->declBit(c+467,"sync_4", false,-1);
    tracep->declBit(c+468,"sync_5", false,-1);
    tracep->declBit(c+469,"sync_6", false,-1);
    tracep->declBit(c+470,"sync_7", false,-1);
    tracep->declBit(c+471,"sync_8", false,-1);
    tracep->declBit(c+472,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+832,"auto_in_psel", false,-1);
    tracep->declBit(c+514,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+831,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"auto_in_pready", false,-1);
    tracep->declBit(c+1155,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1156,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1105,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1106,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1107,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1108,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1109,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1110,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1111,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1112,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1113,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1114,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+832,"in_psel", false,-1);
    tracep->declBit(c+514,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"in_pready", false,-1);
    tracep->declBus(c+1156,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1155,"in_pslverr", false,-1);
    tracep->declBus(c+1105,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1106,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1107,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1108,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1109,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1110,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1111,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1112,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1113,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1114,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+830,"auto_in_psel", false,-1);
    tracep->declBit(c+513,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+831,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"auto_in_pready", false,-1);
    tracep->declBit(c+1152,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1115,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1116,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+830,"in_psel", false,-1);
    tracep->declBit(c+513,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1151,"in_pready", false,-1);
    tracep->declBus(c+1153,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1152,"in_pslverr", false,-1);
    tracep->declBit(c+1115,"ps2_clk", false,-1);
    tracep->declBit(c+1116,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+886,"auto_in_awvalid", false,-1);
    tracep->declBit(c+887,"auto_in_wvalid", false,-1);
    tracep->declBit(c+84,"auto_in_arready", false,-1);
    tracep->declBit(c+888,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+889,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+543,"auto_in_rready", false,-1);
    tracep->declBit(c+85,"auto_in_rvalid", false,-1);
    tracep->declBus(c+86,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+85,"state", false,-1);
    tracep->declBus(c+87,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+86,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+955,"raddr", false,-1, 31,0);
    tracep->declBit(c+956,"ren", false,-1);
    tracep->declBus(c+957,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+833,"auto_in_psel", false,-1);
    tracep->declBit(c+515,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+821,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+8,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1127,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1128,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+992,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+833,"in_psel", false,-1);
    tracep->declBit(c+515,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"in_pready", false,-1);
    tracep->declBus(c+8,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBit(c+1127,"qspi_sck", false,-1);
    tracep->declBit(c+1128,"qspi_ce_n", false,-1);
    tracep->declBus(c+992,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+992,"din", false,-1, 3,0);
    tracep->declBus(c+1089,"dout", false,-1, 3,0);
    tracep->declBus(c+1090,"douten", false,-1, 3,0);
    tracep->declBit(c+1136,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1103,"clk_i", false,-1);
    tracep->declBit(c+1104,"rst_i", false,-1);
    tracep->declBus(c+821,"adr_i", false,-1, 31,0);
    tracep->declBus(c+824,"dat_i", false,-1, 31,0);
    tracep->declBus(c+8,"dat_o", false,-1, 31,0);
    tracep->declBus(c+825,"sel_i", false,-1, 3,0);
    tracep->declBit(c+833,"cyc_i", false,-1);
    tracep->declBit(c+833,"stb_i", false,-1);
    tracep->declBit(c+1136,"ack_o", false,-1);
    tracep->declBit(c+823,"we_i", false,-1);
    tracep->declBit(c+1127,"sck", false,-1);
    tracep->declBit(c+1128,"ce_n", false,-1);
    tracep->declBus(c+992,"din", false,-1, 3,0);
    tracep->declBus(c+1089,"dout", false,-1, 3,0);
    tracep->declBus(c+1090,"douten", false,-1, 3,0);
    tracep->declBus(c+1163,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1164,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+591,"mr_sck", false,-1);
    tracep->declBit(c+592,"mr_ce_n", false,-1);
    tracep->declBus(c+992,"mr_din", false,-1, 3,0);
    tracep->declBus(c+593,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+594,"mr_doe", false,-1);
    tracep->declBit(c+595,"mw_sck", false,-1);
    tracep->declBit(c+596,"mw_ce_n", false,-1);
    tracep->declBus(c+992,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1091,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+597,"mw_doe", false,-1);
    tracep->declBit(c+1092,"mr_rd", false,-1);
    tracep->declBit(c+598,"mr_done", false,-1);
    tracep->declBit(c+1093,"mw_wr", false,-1);
    tracep->declBit(c+1094,"mw_done", false,-1);
    tracep->declBit(c+833,"wb_valid", false,-1);
    tracep->declBit(c+958,"wb_we", false,-1);
    tracep->declBit(c+959,"wb_re", false,-1);
    tracep->declBit(c+599,"state", false,-1);
    tracep->declBit(c+1095,"nstate", false,-1);
    tracep->declBus(c+960,"size", false,-1, 2,0);
    tracep->declBus(c+961,"byte0", false,-1, 7,0);
    tracep->declBus(c+962,"byte1", false,-1, 7,0);
    tracep->declBus(c+963,"byte2", false,-1, 7,0);
    tracep->declBus(c+964,"byte3", false,-1, 7,0);
    tracep->declBus(c+965,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1137,"rst_n", false,-1);
    tracep->declBus(c+966,"addr", false,-1, 23,0);
    tracep->declBit(c+1092,"rd", false,-1);
    tracep->declBus(c+1165,"size", false,-1, 2,0);
    tracep->declBit(c+598,"done", false,-1);
    tracep->declBus(c+8,"line", false,-1, 31,0);
    tracep->declBit(c+591,"sck", false,-1);
    tracep->declBit(c+592,"ce_n", false,-1);
    tracep->declBus(c+992,"din", false,-1, 3,0);
    tracep->declBus(c+593,"dout", false,-1, 3,0);
    tracep->declBit(c+594,"douten", false,-1);
    tracep->declBus(c+1163,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1164,"READ", false,-1, 0,0);
    tracep->declBus(c+1166,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+600,"state", false,-1);
    tracep->declBit(c+1096,"nstate", false,-1);
    tracep->declBus(c+601,"counter", false,-1, 7,0);
    tracep->declBus(c+602,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+473+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1167,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+603,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1137,"rst_n", false,-1);
    tracep->declBus(c+967,"addr", false,-1, 23,0);
    tracep->declBus(c+965,"line", false,-1, 31,0);
    tracep->declBus(c+960,"size", false,-1, 2,0);
    tracep->declBit(c+1093,"wr", false,-1);
    tracep->declBit(c+1094,"done", false,-1);
    tracep->declBit(c+595,"sck", false,-1);
    tracep->declBit(c+596,"ce_n", false,-1);
    tracep->declBus(c+992,"din", false,-1, 3,0);
    tracep->declBus(c+1091,"dout", false,-1, 3,0);
    tracep->declBit(c+597,"douten", false,-1);
    tracep->declBus(c+1163,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1164,"WRITE", false,-1, 0,0);
    tracep->declBus(c+968,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+604,"state", false,-1);
    tracep->declBit(c+1097,"nstate", false,-1);
    tracep->declBus(c+605,"counter", false,-1, 7,0);
    tracep->declBus(c+606,"saddr", false,-1, 23,0);
    tracep->declBus(c+1168,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+827,"auto_in_psel", false,-1);
    tracep->declBit(c+511,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+821,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+587,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+588,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1129,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+578,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+579,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+580,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+581,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+582,"sdram_bundle_we", false,-1);
    tracep->declBus(c+583,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+584,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+585,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+586,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+821,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+827,"in_psel", false,-1);
    tracep->declBit(c+511,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+587,"in_pready", false,-1);
    tracep->declBus(c+588,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBit(c+1129,"sdram_clk", false,-1);
    tracep->declBit(c+578,"sdram_cke", false,-1);
    tracep->declBit(c+579,"sdram_cs", false,-1);
    tracep->declBit(c+580,"sdram_ras", false,-1);
    tracep->declBit(c+581,"sdram_cas", false,-1);
    tracep->declBit(c+582,"sdram_we", false,-1);
    tracep->declBus(c+583,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+584,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+585,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+586,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_dout_en", false,-1);
    tracep->declBus(c+608,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+477,"state", false,-1, 1,0);
    tracep->declBit(c+609,"req_accept", false,-1);
    tracep->declBit(c+969,"is_read", false,-1);
    tracep->declBit(c+970,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1103,"clk_i", false,-1);
    tracep->declBit(c+1104,"rst_i", false,-1);
    tracep->declBus(c+971,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+969,"inport_rd_i", false,-1);
    tracep->declBus(c+1158,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+821,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+824,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+586,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+609,"inport_accept_o", false,-1);
    tracep->declBit(c+587,"inport_ack_o", false,-1);
    tracep->declBit(c+1147,"inport_error_o", false,-1);
    tracep->declBus(c+588,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1129,"sdram_clk_o", false,-1);
    tracep->declBit(c+578,"sdram_cke_o", false,-1);
    tracep->declBit(c+579,"sdram_cs_o", false,-1);
    tracep->declBit(c+580,"sdram_ras_o", false,-1);
    tracep->declBit(c+581,"sdram_cas_o", false,-1);
    tracep->declBit(c+582,"sdram_we_o", false,-1);
    tracep->declBus(c+585,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+583,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+584,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+608,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1169,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1170,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1171,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1173,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1174,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1175,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1176,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1177,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1173,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1178,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1179,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1180,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1181,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1182,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1183,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1184,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1157,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1185,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1173,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1157,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1184,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1183,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1179,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1181,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1180,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1182,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1178,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1186,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1187,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1188,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1188,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1189,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1188,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1172,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1190,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+821,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+971,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+969,"ram_rd_w", false,-1);
    tracep->declBit(c+609,"ram_accept_w", false,-1);
    tracep->declBus(c+824,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+588,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+587,"ram_ack_w", false,-1);
    tracep->declBit(c+972,"ram_req_w", false,-1);
    tracep->declBus(c+610,"command_q", false,-1, 3,0);
    tracep->declBus(c+583,"addr_q", false,-1, 12,0);
    tracep->declBus(c+608,"data_q", false,-1, 15,0);
    tracep->declBit(c+611,"data_rd_en_q", false,-1);
    tracep->declBus(c+585,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+578,"cke_q", false,-1);
    tracep->declBus(c+584,"bank_q", false,-1, 1,0);
    tracep->declBus(c+612,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+613,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+586,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+614,"refresh_q", false,-1);
    tracep->declBus(c+615,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+616+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+620,"state_q", false,-1, 3,0);
    tracep->declBus(c+1098,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1099,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+621,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+622,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+973,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+974,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+975,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1173,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+623,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1100,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1191,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+624,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+625,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+626,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+627,"idx", false,-1, 31,0);
    tracep->declBus(c+628,"rd_q", false,-1, 3,0);
    tracep->declBit(c+587,"ack_q", false,-1);
    tracep->declArray(c+629,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+837,"auto_in_psel", false,-1);
    tracep->declBit(c+838,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+829,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+590,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+576,"spi_bundle_sck", false,-1);
    tracep->declBus(c+577,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1125,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1126,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1192,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1193,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1194,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+976,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+837,"in_psel", false,-1);
    tracep->declBit(c+838,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"in_pready", false,-1);
    tracep->declBus(c+590,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBit(c+576,"spi_sck", false,-1);
    tracep->declBus(c+577,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1125,"spi_mosi", false,-1);
    tracep->declBit(c+1126,"spi_miso", false,-1);
    tracep->declBit(c+632,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1195,"Tp", false,-1, 31,0);
    tracep->declBit(c+1103,"wb_clk_i", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBus(c+977,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+824,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+590,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+825,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+823,"wb_we_i", false,-1);
    tracep->declBit(c+837,"wb_stb_i", false,-1);
    tracep->declBit(c+838,"wb_cyc_i", false,-1);
    tracep->declBit(c+589,"wb_ack_o", false,-1);
    tracep->declBit(c+1147,"wb_err_o", false,-1);
    tracep->declBit(c+632,"wb_int_o", false,-1);
    tracep->declBus(c+577,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+576,"sclk_pad_o", false,-1);
    tracep->declBit(c+1125,"mosi_pad_o", false,-1);
    tracep->declBit(c+1126,"miso_pad_i", false,-1);
    tracep->declBus(c+633,"divider", false,-1, 15,0);
    tracep->declBus(c+634,"ctrl", false,-1, 13,0);
    tracep->declBus(c+635,"ss", false,-1, 7,0);
    tracep->declBus(c+1101,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+636,"rx", false,-1, 127,0);
    tracep->declBit(c+640,"rx_negedge", false,-1);
    tracep->declBit(c+641,"tx_negedge", false,-1);
    tracep->declBus(c+642,"char_len", false,-1, 6,0);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+644,"lsb", false,-1);
    tracep->declBit(c+645,"ie", false,-1);
    tracep->declBit(c+646,"ass", false,-1);
    tracep->declBit(c+978,"spi_divider_sel", false,-1);
    tracep->declBit(c+979,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+980,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+981,"spi_ss_sel", false,-1);
    tracep->declBit(c+647,"tip", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBit(c+650,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1195,"Tp", false,-1, 31,0);
    tracep->declBit(c+1103,"clk_in", false,-1);
    tracep->declBit(c+1104,"rst", false,-1);
    tracep->declBit(c+647,"enable", false,-1);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+650,"last_clk", false,-1);
    tracep->declBus(c+633,"divider", false,-1, 15,0);
    tracep->declBit(c+576,"clk_out", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBus(c+651,"cnt", false,-1, 15,0);
    tracep->declBit(c+652,"cnt_zero", false,-1);
    tracep->declBit(c+653,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1195,"Tp", false,-1, 31,0);
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"rst", false,-1);
    tracep->declBus(c+982,"latch", false,-1, 3,0);
    tracep->declBus(c+825,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+642,"len", false,-1, 6,0);
    tracep->declBit(c+644,"lsb", false,-1);
    tracep->declBit(c+643,"go", false,-1);
    tracep->declBit(c+648,"pos_edge", false,-1);
    tracep->declBit(c+649,"neg_edge", false,-1);
    tracep->declBit(c+640,"rx_negedge", false,-1);
    tracep->declBit(c+641,"tx_negedge", false,-1);
    tracep->declBit(c+647,"tip", false,-1);
    tracep->declBit(c+650,"last", false,-1);
    tracep->declBus(c+824,"p_in", false,-1, 31,0);
    tracep->declArray(c+636,"p_out", false,-1, 127,0);
    tracep->declBit(c+576,"s_clk", false,-1);
    tracep->declBit(c+1126,"s_in", false,-1);
    tracep->declBit(c+1125,"s_out", false,-1);
    tracep->declBus(c+654,"cnt", false,-1, 7,0);
    tracep->declArray(c+636,"data", false,-1, 127,0);
    tracep->declBus(c+655,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+656,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+657,"rx_clk", false,-1);
    tracep->declBit(c+658,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+834,"auto_in_psel", false,-1);
    tracep->declBit(c+835,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+831,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+836,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+986,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1123,"uart_rx", false,-1);
    tracep->declBit(c+1124,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+834,"in_psel", false,-1);
    tracep->declBit(c+835,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+836,"in_pready", false,-1);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBus(c+954,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+986,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"uart_rx", false,-1);
    tracep->declBit(c+1124,"uart_tx", false,-1);
    tracep->declBit(c+659,"rtsn", false,-1);
    tracep->declBit(c+1147,"ctsn", false,-1);
    tracep->declBit(c+660,"dtr_pad_o", false,-1);
    tracep->declBit(c+1147,"dsr_pad_i", false,-1);
    tracep->declBit(c+1147,"ri_pad_i", false,-1);
    tracep->declBit(c+1147,"dcd_pad_i", false,-1);
    tracep->declBit(c+661,"interrupt", false,-1);
    tracep->declBit(c+1138,"reg_we", false,-1);
    tracep->declBit(c+1139,"reg_re", false,-1);
    tracep->declBus(c+983,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+984,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+478,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1102,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+662,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBus(c+983,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+985,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1102,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1138,"wb_we_i", false,-1);
    tracep->declBit(c+1139,"wb_re_i", false,-1);
    tracep->declBit(c+1124,"stx_pad_o", false,-1);
    tracep->declBit(c+1123,"srx_pad_i", false,-1);
    tracep->declBus(c+1186,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+662,"rts_pad_o", false,-1);
    tracep->declBit(c+660,"dtr_pad_o", false,-1);
    tracep->declBit(c+661,"int_o", false,-1);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+664,"srx_pad", false,-1);
    tracep->declBus(c+665,"ier", false,-1, 3,0);
    tracep->declBus(c+666,"iir", false,-1, 3,0);
    tracep->declBus(c+667,"fcr", false,-1, 1,0);
    tracep->declBus(c+668,"mcr", false,-1, 4,0);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBus(c+670,"msr", false,-1, 7,0);
    tracep->declBus(c+671,"dl", false,-1, 15,0);
    tracep->declBus(c+672,"scratch", false,-1, 7,0);
    tracep->declBit(c+673,"start_dlc", false,-1);
    tracep->declBit(c+674,"lsr_mask_d", false,-1);
    tracep->declBit(c+675,"msi_reset", false,-1);
    tracep->declBus(c+676,"dlc", false,-1, 15,0);
    tracep->declBus(c+677,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+678,"rx_reset", false,-1);
    tracep->declBit(c+679,"tx_reset", false,-1);
    tracep->declBit(c+680,"dlab", false,-1);
    tracep->declBit(c+1161,"cts_pad_i", false,-1);
    tracep->declBit(c+1147,"dsr_pad_i", false,-1);
    tracep->declBit(c+1147,"ri_pad_i", false,-1);
    tracep->declBit(c+1147,"dcd_pad_i", false,-1);
    tracep->declBit(c+681,"loopback", false,-1);
    tracep->declBit(c+1147,"cts", false,-1);
    tracep->declBit(c+1161,"dsr", false,-1);
    tracep->declBit(c+1161,"ri", false,-1);
    tracep->declBit(c+1161,"dcd", false,-1);
    tracep->declBit(c+682,"cts_c", false,-1);
    tracep->declBit(c+683,"dsr_c", false,-1);
    tracep->declBit(c+684,"ri_c", false,-1);
    tracep->declBit(c+685,"dcd_c", false,-1);
    tracep->declBus(c+686,"lsr", false,-1, 7,0);
    tracep->declBit(c+687,"lsr0", false,-1);
    tracep->declBit(c+688,"lsr1", false,-1);
    tracep->declBit(c+689,"lsr2", false,-1);
    tracep->declBit(c+690,"lsr3", false,-1);
    tracep->declBit(c+691,"lsr4", false,-1);
    tracep->declBit(c+692,"lsr5", false,-1);
    tracep->declBit(c+693,"lsr6", false,-1);
    tracep->declBit(c+694,"lsr7", false,-1);
    tracep->declBit(c+695,"lsr0r", false,-1);
    tracep->declBit(c+696,"lsr1r", false,-1);
    tracep->declBit(c+697,"lsr2r", false,-1);
    tracep->declBit(c+698,"lsr3r", false,-1);
    tracep->declBit(c+699,"lsr4r", false,-1);
    tracep->declBit(c+700,"lsr5r", false,-1);
    tracep->declBit(c+701,"lsr6r", false,-1);
    tracep->declBit(c+702,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+703,"rls_int", false,-1);
    tracep->declBit(c+704,"rda_int", false,-1);
    tracep->declBit(c+705,"ti_int", false,-1);
    tracep->declBit(c+706,"thre_int", false,-1);
    tracep->declBit(c+707,"ms_int", false,-1);
    tracep->declBit(c+708,"tf_push", false,-1);
    tracep->declBit(c+709,"rf_pop", false,-1);
    tracep->declBus(c+1140,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+710,"rf_error_bit", false,-1);
    tracep->declBit(c+688,"rf_overrun", false,-1);
    tracep->declBit(c+711,"rf_push_pulse", false,-1);
    tracep->declBus(c+712,"rf_count", false,-1, 4,0);
    tracep->declBus(c+713,"tf_count", false,-1, 4,0);
    tracep->declBus(c+714,"tstate", false,-1, 2,0);
    tracep->declBus(c+715,"rstate", false,-1, 3,0);
    tracep->declBus(c+716,"counter_t", false,-1, 9,0);
    tracep->declBit(c+717,"thre_set_en", false,-1);
    tracep->declBus(c+718,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+719,"block_value", false,-1, 7,0);
    tracep->declBit(c+720,"serial_out", false,-1);
    tracep->declBit(c+721,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+722,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+723,"lsr0_d", false,-1);
    tracep->declBit(c+724,"lsr1_d", false,-1);
    tracep->declBit(c+725,"lsr2_d", false,-1);
    tracep->declBit(c+726,"lsr3_d", false,-1);
    tracep->declBit(c+727,"lsr4_d", false,-1);
    tracep->declBit(c+728,"lsr5_d", false,-1);
    tracep->declBit(c+729,"lsr6_d", false,-1);
    tracep->declBit(c+730,"lsr7_d", false,-1);
    tracep->declBit(c+731,"rls_int_d", false,-1);
    tracep->declBit(c+732,"thre_int_d", false,-1);
    tracep->declBit(c+733,"ms_int_d", false,-1);
    tracep->declBit(c+734,"ti_int_d", false,-1);
    tracep->declBit(c+735,"rda_int_d", false,-1);
    tracep->declBit(c+736,"rls_int_rise", false,-1);
    tracep->declBit(c+737,"thre_int_rise", false,-1);
    tracep->declBit(c+738,"ms_int_rise", false,-1);
    tracep->declBit(c+739,"ti_int_rise", false,-1);
    tracep->declBit(c+740,"rda_int_rise", false,-1);
    tracep->declBit(c+741,"rls_int_pnd", false,-1);
    tracep->declBit(c+742,"rda_int_pnd", false,-1);
    tracep->declBit(c+743,"thre_int_pnd", false,-1);
    tracep->declBit(c+744,"ms_int_pnd", false,-1);
    tracep->declBit(c+745,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1195,"Tp", false,-1, 31,0);
    tracep->declBus(c+1195,"width", false,-1, 31,0);
    tracep->declBus(c+1164,"init_value", false,-1, 0,0);
    tracep->declBit(c+1104,"rst_i", false,-1);
    tracep->declBit(c+1103,"clk_i", false,-1);
    tracep->declBit(c+1147,"stage1_rst_i", false,-1);
    tracep->declBit(c+1161,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1123,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+664,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+746,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBit(c+709,"rf_pop", false,-1);
    tracep->declBit(c+721,"srx_pad_i", false,-1);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+678,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+716,"counter_t", false,-1, 9,0);
    tracep->declBus(c+712,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1140,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+688,"rf_overrun", false,-1);
    tracep->declBit(c+710,"rf_error_bit", false,-1);
    tracep->declBus(c+715,"rstate", false,-1, 3,0);
    tracep->declBit(c+711,"rf_push_pulse", false,-1);
    tracep->declBus(c+747,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+748,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+749,"rshift", false,-1, 7,0);
    tracep->declBit(c+750,"rparity", false,-1);
    tracep->declBit(c+751,"rparity_error", false,-1);
    tracep->declBit(c+752,"rframing_error", false,-1);
    tracep->declBit(c+753,"rbit_in", false,-1);
    tracep->declBit(c+754,"rparity_xor", false,-1);
    tracep->declBus(c+755,"counter_b", false,-1, 7,0);
    tracep->declBit(c+756,"rf_push_q", false,-1);
    tracep->declBus(c+757,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+758,"rf_push", false,-1);
    tracep->declBit(c+759,"break_error", false,-1);
    tracep->declBit(c+760,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+761,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+762,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+763,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1157,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1184,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1183,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1179,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1181,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1180,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1182,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1178,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1186,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1187,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1196,"sr_push", false,-1, 3,0);
    tracep->declBus(c+764,"toc_value", false,-1, 9,0);
    tracep->declBus(c+765,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1197,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1189,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1173,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1198,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBit(c+711,"push", false,-1);
    tracep->declBit(c+709,"pop", false,-1);
    tracep->declBus(c+757,"data_in", false,-1, 10,0);
    tracep->declBit(c+678,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1140,"data_out", false,-1, 10,0);
    tracep->declBit(c+688,"overrun", false,-1);
    tracep->declBus(c+712,"count", false,-1, 4,0);
    tracep->declBit(c+710,"error_bit", false,-1);
    tracep->declBus(c+1141,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+766+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+782,"top", false,-1, 3,0);
    tracep->declBus(c+783,"bottom", false,-1, 3,0);
    tracep->declBus(c+784,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+785,"word0", false,-1, 2,0);
    tracep->declBus(c+786,"word1", false,-1, 2,0);
    tracep->declBus(c+787,"word2", false,-1, 2,0);
    tracep->declBus(c+788,"word3", false,-1, 2,0);
    tracep->declBus(c+789,"word4", false,-1, 2,0);
    tracep->declBus(c+790,"word5", false,-1, 2,0);
    tracep->declBus(c+791,"word6", false,-1, 2,0);
    tracep->declBus(c+792,"word7", false,-1, 2,0);
    tracep->declBus(c+793,"word8", false,-1, 2,0);
    tracep->declBus(c+794,"word9", false,-1, 2,0);
    tracep->declBus(c+795,"word10", false,-1, 2,0);
    tracep->declBus(c+796,"word11", false,-1, 2,0);
    tracep->declBus(c+797,"word12", false,-1, 2,0);
    tracep->declBus(c+798,"word13", false,-1, 2,0);
    tracep->declBus(c+799,"word14", false,-1, 2,0);
    tracep->declBus(c+800,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1173,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1194,"data_width", false,-1, 31,0);
    tracep->declBus(c+1189,"depth", false,-1, 31,0);
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+711,"we", false,-1);
    tracep->declBus(c+782,"a", false,-1, 3,0);
    tracep->declBus(c+783,"dpra", false,-1, 3,0);
    tracep->declBus(c+801,"di", false,-1, 7,0);
    tracep->declBus(c+1141,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+479+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBus(c+669,"lcr", false,-1, 7,0);
    tracep->declBit(c+708,"tf_push", false,-1);
    tracep->declBus(c+985,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+663,"enable", false,-1);
    tracep->declBit(c+679,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+720,"stx_pad_o", false,-1);
    tracep->declBus(c+714,"tstate", false,-1, 2,0);
    tracep->declBus(c+713,"tf_count", false,-1, 4,0);
    tracep->declBus(c+802,"counter", false,-1, 4,0);
    tracep->declBus(c+803,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+804,"shift_out", false,-1, 6,0);
    tracep->declBit(c+805,"stx_o_tmp", false,-1);
    tracep->declBit(c+806,"parity_xor", false,-1);
    tracep->declBit(c+807,"tf_pop", false,-1);
    tracep->declBit(c+808,"bit_out", false,-1);
    tracep->declBus(c+985,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1142,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+809,"tf_overrun", false,-1);
    tracep->declBus(c+1159,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1146,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1199,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1200,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1165,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1201,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1194,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1189,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1173,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1198,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+1104,"wb_rst_i", false,-1);
    tracep->declBit(c+708,"push", false,-1);
    tracep->declBit(c+807,"pop", false,-1);
    tracep->declBus(c+985,"data_in", false,-1, 7,0);
    tracep->declBit(c+679,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1142,"data_out", false,-1, 7,0);
    tracep->declBit(c+809,"overrun", false,-1);
    tracep->declBus(c+713,"count", false,-1, 4,0);
    tracep->declBus(c+810,"top", false,-1, 3,0);
    tracep->declBus(c+811,"bottom", false,-1, 3,0);
    tracep->declBus(c+812,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1173,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1194,"data_width", false,-1, 31,0);
    tracep->declBus(c+1189,"depth", false,-1, 31,0);
    tracep->declBit(c+1103,"clk", false,-1);
    tracep->declBit(c+708,"we", false,-1);
    tracep->declBus(c+810,"a", false,-1, 3,0);
    tracep->declBus(c+811,"dpra", false,-1, 3,0);
    tracep->declBus(c+985,"di", false,-1, 7,0);
    tracep->declBus(c+1142,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+495+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBit(c+828,"auto_in_psel", false,-1);
    tracep->declBit(c+512,"auto_in_penable", false,-1);
    tracep->declBit(c+823,"auto_in_pwrite", false,-1);
    tracep->declBus(c+829,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1146,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+824,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_in_pready", false,-1);
    tracep->declBit(c+1149,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1117,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1118,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1119,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1120,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1121,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1122,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1103,"clock", false,-1);
    tracep->declBit(c+1104,"reset", false,-1);
    tracep->declBus(c+976,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+828,"in_psel", false,-1);
    tracep->declBit(c+512,"in_penable", false,-1);
    tracep->declBus(c+1146,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+823,"in_pwrite", false,-1);
    tracep->declBus(c+824,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+825,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"in_pready", false,-1);
    tracep->declBus(c+1150,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1149,"in_pslverr", false,-1);
    tracep->declBus(c+1117,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1118,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1119,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1120,"vga_hsync", false,-1);
    tracep->declBit(c+1121,"vga_vsync", false,-1);
    tracep->declBit(c+1122,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+576,"sck", false,-1);
    tracep->declBit(c+813,"ss", false,-1);
    tracep->declBit(c+1125,"mosi", false,-1);
    tracep->declBit(c+1161,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+576,"sck", false,-1);
    tracep->declBit(c+814,"ss", false,-1);
    tracep->declBit(c+1125,"mosi", false,-1);
    tracep->declBit(c+1126,"miso", false,-1);
    tracep->declBit(c+814,"reset", false,-1);
    tracep->declBus(c+815,"state", false,-1, 2,0);
    tracep->declBus(c+816,"counter", false,-1, 7,0);
    tracep->declBus(c+817,"cmd", false,-1, 7,0);
    tracep->declBus(c+818,"addr", false,-1, 23,0);
    tracep->declBus(c+819,"data", false,-1, 31,0);
    tracep->declBit(c+820,"ren", false,-1);
    tracep->declBus(c+1143,"rdata", false,-1, 31,0);
    tracep->declBus(c+1144,"raddr", false,-1, 31,0);
    tracep->declBus(c+1145,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+576,"clock", false,-1);
    tracep->declBit(c+820,"valid", false,-1);
    tracep->declBus(c+817,"cmd", false,-1, 7,0);
    tracep->declBus(c+1144,"addr", false,-1, 31,0);
    tracep->declBus(c+1143,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1127,"sck", false,-1);
    tracep->declBit(c+1128,"ce_n", false,-1);
    tracep->declBus(c+992,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+578,"cke", false,-1);
    tracep->declBit(c+579,"cs", false,-1);
    tracep->declBit(c+580,"ras", false,-1);
    tracep->declBit(c+581,"cas", false,-1);
    tracep->declBit(c+582,"we", false,-1);
    tracep->declBus(c+583,"a", false,-1, 12,0);
    tracep->declBus(c+584,"ba", false,-1, 1,0);
    tracep->declBus(c+585,"dqm", false,-1, 1,0);
    tracep->declBus(c+586,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+7,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+8,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                              [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [0U])))),32);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+24,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+26,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+27,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+28,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                            & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                       >> 0x24U)))));
    bufp->fullQData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+74,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                     ? (vlSelf->__VdfgTmp_hf132a334__0 
                                        >> 0x18U) : 0U)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                               << 0x18U) | ((0xff0000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 8U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? vlSelf->__VdfgTmp_hf132a334__0
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+130,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+144,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+164,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+168,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_reg));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_reg));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_reg));
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r),32);
    bufp->fullBit(oldp+273,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type))))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg));
    bufp->fullIData(oldp+275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op)
                                : 0U)),5);
    bufp->fullCData(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg));
    bufp->fullIData(oldp+293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+305,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us))));
    bufp->fullIData(oldp+309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us));
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_alu_op),5);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_il_us));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op),5);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us));
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_il_us));
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg_1));
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc),32);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type),4);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata),32);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp),2);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp),2);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result),32);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid));
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullIData(oldp+408,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                ? 1U : ((1U == (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                         ? 2U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                                  ? 4U
                                                  : 8U)))),32);
    bufp->fullIData(oldp+409,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2
                                : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2 
                                       << 8U) : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2 
                                                  << 0x10U)
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2 
                                                  << 0x18U))))),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg));
    bufp->fullQData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+419,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31),32);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rdata),32);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+516,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+517,(((1U & ((~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3))) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h184bf46c__0)))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg)),32);
    bufp->fullIData(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg))),4);
    bufp->fullIData(oldp+520,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullCData(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullIData(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp)
                                : 0U)),2);
    bufp->fullCData(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp)
                                : 0U)),2);
    bufp->fullIData(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+537,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullBit(oldp+538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_15)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))
                                     ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))
                                     : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_14)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_16) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))))))));
    bufp->fullIData(oldp+539,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+540,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+541,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+542,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+555,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+573,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+579,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+580,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+582,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+586,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+588,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+593,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+594,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+597,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+598,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+603,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+609,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+642,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+643,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+644,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+646,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+650,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+652,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+653,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+655,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+659,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+660,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+680,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+681,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+682,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+683,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+684,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+685,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+686,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+690,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+710,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+717,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+736,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+737,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+738,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+739,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+740,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+759,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+760,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+761,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+762,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+763,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+765,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+784,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+801,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+812,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+820,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+827,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+828,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+829,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+830,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+831,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+832,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+836,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+866,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+877,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+878,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+879,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+880,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+881,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+882,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+883,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+886,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+889,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+894,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inv_flag));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_ar_arready));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_aw_awready));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_w_wready));
    bufp->fullIData(oldp+908,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg));
    bufp->fullIData(oldp+913,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0)
                                : 0U)),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0),32);
    bufp->fullIData(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg
                                : 0U)),32);
    bufp->fullCData(oldp+916,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+918,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullIData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_1),5);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg));
    bufp->fullIData(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc
                                : 0U)),32);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__in_data_dnpc),32);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__wbu2in_reg));
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg),32);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg_REG),32);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg));
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_18)) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))))));
    bufp->fullIData(oldp+938,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state)) 
                                      | ((0xcU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_18))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc)),32);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc),32);
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type),4);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_bresp),2);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp),2);
    bufp->fullIData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state));
    bufp->fullIData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc),32);
    bufp->fullIData(oldp+954,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+955,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+963,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+964,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+965,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+966,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+967,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+968,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+973,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+974,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+975,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+976,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+977,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+980,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))))))),4);
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+983,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h275b4a8c__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
                                : 0U)),2);
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullCData(oldp+992,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1050,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1051,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1052,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1053,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1055,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1056,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1058,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1059,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1060,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1061,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1063,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1065,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1066,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1067,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1068,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1070,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1071,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1073,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1075,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_ifu_axi_r_rready_0));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_en));
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1103,(vlSelf->clock));
    bufp->fullBit(oldp+1104,(vlSelf->reset));
    bufp->fullSData(oldp+1105,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1106,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1107,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1108,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1109,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1110,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1111,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1112,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1113,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1114,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1115,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1116,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1117,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1118,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1119,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1120,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1121,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1122,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1123,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1124,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1126,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1129,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1130,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg
                                     : 0U) : 2U)),32);
    bufp->fullCData(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                     : 0U) : 3U)),2);
    bufp->fullCData(oldp+1134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                                   : 0U)
                                                  : 3U)
                                              : 0U)))),2);
    bufp->fullCData(oldp+1135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_2)
                                 ? 0U : (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                             << 0x18U) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                << 0x16U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                               << 0xcU) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                      << 1U))))))),2);
    bufp->fullBit(oldp+1136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1137,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1140,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1144,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1146,(1U),3);
    bufp->fullBit(oldp+1147,(0U));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1157,(0U),4);
    bufp->fullCData(oldp+1158,(0U),8);
    bufp->fullCData(oldp+1159,(0U),3);
    bufp->fullCData(oldp+1160,(0U),2);
    bufp->fullBit(oldp+1161,(1U));
    bufp->fullIData(oldp+1162,(0U),32);
    bufp->fullBit(oldp+1163,(0U));
    bufp->fullBit(oldp+1164,(1U));
    bufp->fullCData(oldp+1165,(4U),3);
    bufp->fullCData(oldp+1166,(0x1bU),8);
    bufp->fullCData(oldp+1167,(0xebU),8);
    bufp->fullCData(oldp+1168,(0x38U),8);
    bufp->fullIData(oldp+1169,(0x64U),32);
    bufp->fullIData(oldp+1170,(0x18U),32);
    bufp->fullIData(oldp+1171,(9U),32);
    bufp->fullIData(oldp+1172,(2U),32);
    bufp->fullIData(oldp+1173,(4U),32);
    bufp->fullIData(oldp+1174,(0xdU),32);
    bufp->fullIData(oldp+1175,(0x2000U),32);
    bufp->fullIData(oldp+1176,(0x2710U),32);
    bufp->fullIData(oldp+1177,(0x30cU),32);
    bufp->fullCData(oldp+1178,(7U),4);
    bufp->fullCData(oldp+1179,(3U),4);
    bufp->fullCData(oldp+1180,(5U),4);
    bufp->fullCData(oldp+1181,(4U),4);
    bufp->fullCData(oldp+1182,(6U),4);
    bufp->fullCData(oldp+1183,(2U),4);
    bufp->fullCData(oldp+1184,(1U),4);
    bufp->fullSData(oldp+1185,(0x21U),13);
    bufp->fullCData(oldp+1186,(8U),4);
    bufp->fullCData(oldp+1187,(9U),4);
    bufp->fullIData(oldp+1188,(0xaU),32);
    bufp->fullIData(oldp+1189,(0x10U),32);
    bufp->fullIData(oldp+1190,(6U),32);
    bufp->fullIData(oldp+1191,(0x11U),32);
    bufp->fullIData(oldp+1192,(0x30000000U),32);
    bufp->fullIData(oldp+1193,(0x3fffffffU),32);
    bufp->fullIData(oldp+1194,(8U),32);
    bufp->fullIData(oldp+1195,(1U),32);
    bufp->fullCData(oldp+1196,(0xaU),4);
    bufp->fullIData(oldp+1197,(0xbU),32);
    bufp->fullIData(oldp+1198,(5U),32);
    bufp->fullCData(oldp+1199,(2U),3);
    bufp->fullCData(oldp+1200,(3U),3);
    bufp->fullCData(oldp+1201,(5U),3);
}
