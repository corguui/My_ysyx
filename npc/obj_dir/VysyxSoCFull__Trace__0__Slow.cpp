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
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1122,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1123,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1124,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1125,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1132,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1133,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1134,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1137,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1138,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1139,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1140,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1141,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1122,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1123,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1124,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1125,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1132,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1133,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1134,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1137,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1138,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1139,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1140,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1141,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+695,"spi_sck", false,-1);
    tracep->declBus(c+696,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1142,"spi_mosi", false,-1);
    tracep->declBit(c+1143,"spi_miso", false,-1);
    tracep->declBit(c+1140,"uart_rx", false,-1);
    tracep->declBit(c+1141,"uart_tx", false,-1);
    tracep->declBit(c+49,"psram_sck", false,-1);
    tracep->declBit(c+50,"psram_ce_n", false,-1);
    tracep->declBus(c+1144,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1145,"sdram_clk", false,-1);
    tracep->declBit(c+697,"sdram_cke", false,-1);
    tracep->declBit(c+698,"sdram_cs", false,-1);
    tracep->declBit(c+699,"sdram_ras", false,-1);
    tracep->declBit(c+700,"sdram_cas", false,-1);
    tracep->declBit(c+701,"sdram_we", false,-1);
    tracep->declBus(c+702,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+703,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+704,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+705,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1122,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1124,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1132,"ps2_clk", false,-1);
    tracep->declBit(c+1133,"ps2_data", false,-1);
    tracep->declBus(c+1134,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1136,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1137,"vga_hsync", false,-1);
    tracep->declBit(c+1138,"vga_vsync", false,-1);
    tracep->declBit(c+1139,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+947,"in_psel", false,-1);
    tracep->declBit(c+153,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+51,"in_pready", false,-1);
    tracep->declBus(c+1113,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+951,"in_pslverr", false,-1);
    tracep->declBus(c+946,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+947,"out_psel", false,-1);
    tracep->declBit(c+153,"out_penable", false,-1);
    tracep->declBus(c+1185,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"out_pwrite", false,-1);
    tracep->declBus(c+949,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+51,"out_pready", false,-1);
    tracep->declBus(c+1113,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+951,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+947,"auto_in_psel", false,-1);
    tracep->declBit(c+153,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+946,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+51,"auto_in_pready", false,-1);
    tracep->declBit(c+951,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1113,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+952,"auto_out_6_psel", false,-1);
    tracep->declBit(c+665,"auto_out_6_penable", false,-1);
    tracep->declBit(c+948,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+946,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+706,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+707,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+953,"auto_out_5_psel", false,-1);
    tracep->declBit(c+666,"auto_out_5_penable", false,-1);
    tracep->declBit(c+948,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+954,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1188,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+955,"auto_out_4_psel", false,-1);
    tracep->declBit(c+667,"auto_out_4_penable", false,-1);
    tracep->declBit(c+948,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+956,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1191,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+957,"auto_out_3_psel", false,-1);
    tracep->declBit(c+668,"auto_out_3_penable", false,-1);
    tracep->declBit(c+948,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+956,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1194,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+958,"auto_out_2_psel", false,-1);
    tracep->declBit(c+669,"auto_out_2_penable", false,-1);
    tracep->declBit(c+948,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+946,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+154,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+959,"auto_out_1_psel", false,-1);
    tracep->declBit(c+960,"auto_out_1_penable", false,-1);
    tracep->declBit(c+948,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+956,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1147,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+962,"auto_out_0_psel", false,-1);
    tracep->declBit(c+963,"auto_out_0_penable", false,-1);
    tracep->declBit(c+948,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+954,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1196,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1149,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+964,"sel_0", false,-1);
    tracep->declBit(c+965,"sel_1", false,-1);
    tracep->declBit(c+966,"sel_2", false,-1);
    tracep->declBit(c+967,"sel_3", false,-1);
    tracep->declBit(c+968,"sel_4", false,-1);
    tracep->declBit(c+969,"sel_5", false,-1);
    tracep->declBit(c+970,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+971,"auto_in_awready", false,-1);
    tracep->declBit(c+972,"auto_in_awvalid", false,-1);
    tracep->declBus(c+155,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+971,"auto_in_wready", false,-1);
    tracep->declBit(c+974,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+52,"auto_in_bready", false,-1);
    tracep->declBit(c+53,"auto_in_bvalid", false,-1);
    tracep->declBus(c+157,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+978,"auto_in_arready", false,-1);
    tracep->declBit(c+979,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+55,"auto_in_rvalid", false,-1);
    tracep->declBus(c+160,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1150,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+977,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+947,"auto_out_psel", false,-1);
    tracep->declBit(c+153,"auto_out_penable", false,-1);
    tracep->declBit(c+948,"auto_out_pwrite", false,-1);
    tracep->declBus(c+946,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+949,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+51,"auto_out_pready", false,-1);
    tracep->declBit(c+951,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1113,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+153,"nodeOut_penable", false,-1);
    tracep->declBus(c+161,"state", false,-1, 1,0);
    tracep->declBit(c+978,"accept_read", false,-1);
    tracep->declBit(c+971,"accept_write", false,-1);
    tracep->declBit(c+162,"is_write_r", false,-1);
    tracep->declBit(c+948,"is_write", false,-1);
    tracep->declBus(c+160,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+157,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+163,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+164,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+165,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+166,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+981,"resp", false,-1, 1,0);
    tracep->declBus(c+167,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+977,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+55,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+168,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+53,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+169,"auto_in_awready", false,-1);
    tracep->declBit(c+982,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1197,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+170,"auto_in_wready", false,-1);
    tracep->declBit(c+984,"auto_in_wvalid", false,-1);
    tracep->declBus(c+985,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"auto_in_wlast", false,-1);
    tracep->declBit(c+1151,"auto_in_bready", false,-1);
    tracep->declBit(c+56,"auto_in_bvalid", false,-1);
    tracep->declBus(c+57,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+7,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+171,"auto_in_arready", false,-1);
    tracep->declBit(c+987,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1197,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+58,"auto_in_rready", false,-1);
    tracep->declBit(c+59,"auto_in_rvalid", false,-1);
    tracep->declBus(c+60,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_in_rlast", false,-1);
    tracep->declBit(c+63,"auto_out_awready", false,-1);
    tracep->declBit(c+989,"auto_out_awvalid", false,-1);
    tracep->declBus(c+155,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+64,"auto_out_wready", false,-1);
    tracep->declBit(c+990,"auto_out_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_out_bready", false,-1);
    tracep->declBit(c+66,"auto_out_bvalid", false,-1);
    tracep->declBus(c+57,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+67,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+69,"auto_out_arready", false,-1);
    tracep->declBit(c+992,"auto_out_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+173,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+58,"auto_out_rready", false,-1);
    tracep->declBit(c+59,"auto_out_rvalid", false,-1);
    tracep->declBus(c+60,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+70,"auto_out_rlast", false,-1);
    tracep->declBit(c+990,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+174,"w_idle", false,-1);
    tracep->declBit(c+71,"in_awready", false,-1);
    tracep->declBit(c+175,"busy", false,-1);
    tracep->declBus(c+176,"r_addr", false,-1, 31,0);
    tracep->declBus(c+177,"r_len", false,-1, 7,0);
    tracep->declBus(c+178,"len", false,-1, 7,0);
    tracep->declBus(c+993,"addr", false,-1, 31,0);
    tracep->declBit(c+179,"busy_1", false,-1);
    tracep->declBus(c+180,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+181,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+182,"len_1", false,-1, 7,0);
    tracep->declBus(c+994,"addr_1", false,-1, 31,0);
    tracep->declBit(c+183,"wbeats_latched", false,-1);
    tracep->declBit(c+989,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+995,"wbeats_valid", false,-1);
    tracep->declBus(c+184,"w_counter", false,-1, 8,0);
    tracep->declBus(c+996,"w_todo", false,-1, 8,0);
    tracep->declBit(c+991,"w_last", false,-1);
    tracep->declBit(c+65,"nodeOut_bready", false,-1);
    tracep->declBus(c+185,"error_0", false,-1, 1,0);
    tracep->declBus(c+186,"error_1", false,-1, 1,0);
    tracep->declBus(c+187,"error_2", false,-1, 1,0);
    tracep->declBus(c+188,"error_3", false,-1, 1,0);
    tracep->declBus(c+189,"error_4", false,-1, 1,0);
    tracep->declBus(c+190,"error_5", false,-1, 1,0);
    tracep->declBus(c+191,"error_6", false,-1, 1,0);
    tracep->declBus(c+192,"error_7", false,-1, 1,0);
    tracep->declBus(c+193,"error_8", false,-1, 1,0);
    tracep->declBus(c+194,"error_9", false,-1, 1,0);
    tracep->declBus(c+195,"error_10", false,-1, 1,0);
    tracep->declBus(c+196,"error_11", false,-1, 1,0);
    tracep->declBus(c+197,"error_12", false,-1, 1,0);
    tracep->declBus(c+198,"error_13", false,-1, 1,0);
    tracep->declBus(c+199,"error_14", false,-1, 1,0);
    tracep->declBus(c+200,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+987,"io_enq_valid", false,-1);
    tracep->declBus(c+1197,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+988,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1198,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1199,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1200,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+72,"io_deq_ready", false,-1);
    tracep->declBit(c+992,"io_deq_valid", false,-1);
    tracep->declBus(c+158,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+997,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+201,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+159,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+202,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+203,"ram", false,-1, 48,0);
    tracep->declBit(c+205,"full", false,-1);
    tracep->declBit(c+992,"io_deq_valid_0", false,-1);
    tracep->declBit(c+73,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+169,"io_enq_ready", false,-1);
    tracep->declBit(c+982,"io_enq_valid", false,-1);
    tracep->declBus(c+1197,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+983,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1198,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1199,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1200,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+74,"io_deq_ready", false,-1);
    tracep->declBit(c+998,"io_deq_valid", false,-1);
    tracep->declBus(c+155,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+999,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+206,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+156,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+207,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+208,"ram", false,-1, 48,0);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+998,"io_deq_valid_0", false,-1);
    tracep->declBit(c+75,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+170,"io_enq_ready", false,-1);
    tracep->declBit(c+984,"io_enq_valid", false,-1);
    tracep->declBus(c+985,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+986,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1186,"io_enq_bits_last", false,-1);
    tracep->declBit(c+76,"io_deq_ready", false,-1);
    tracep->declBit(c+1000,"io_deq_valid", false,-1);
    tracep->declBus(c+975,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+976,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+211,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+212,"ram", false,-1, 36,0);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+1000,"io_deq_valid_0", false,-1);
    tracep->declBit(c+77,"do_enq", false,-1);
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
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+78,"auto_in_awready", false,-1);
    tracep->declBit(c+1001,"auto_in_awvalid", false,-1);
    tracep->declBus(c+155,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1152,"auto_in_wready", false,-1);
    tracep->declBit(c+1003,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_in_bready", false,-1);
    tracep->declBit(c+215,"auto_in_bvalid", false,-1);
    tracep->declBus(c+216,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+217,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+80,"auto_in_arready", false,-1);
    tracep->declBit(c+1004,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1005,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+81,"auto_in_rready", false,-1);
    tracep->declBit(c+218,"auto_in_rvalid", false,-1);
    tracep->declBus(c+219,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+220,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+221,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+80,"nodeIn_arready", false,-1);
    tracep->declBit(c+78,"nodeIn_awready", false,-1);
    tracep->declBit(c+1006,"w_sel0", false,-1);
    tracep->declBit(c+215,"w_full", false,-1);
    tracep->declBus(c+216,"w_id", false,-1, 3,0);
    tracep->declBit(c+222,"r_sel1", false,-1);
    tracep->declBit(c+223,"w_sel1", false,-1);
    tracep->declBit(c+218,"r_full", false,-1);
    tracep->declBus(c+219,"r_id", false,-1, 3,0);
    tracep->declBit(c+82,"ren", false,-1);
    tracep->declBit(c+224,"rdata_REG", false,-1);
    tracep->declBus(c+225,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+226,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+227,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+228,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1007,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+82,"R0_en", false,-1);
    tracep->declBit(c+1120,"R0_clk", false,-1);
    tracep->declBus(c+229,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1008,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+83,"W0_en", false,-1);
    tracep->declBit(c+1120,"W0_clk", false,-1);
    tracep->declBus(c+975,"W0_data", false,-1, 31,0);
    tracep->declBus(c+976,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+169,"auto_in_awready", false,-1);
    tracep->declBit(c+982,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1197,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+170,"auto_in_wready", false,-1);
    tracep->declBit(c+984,"auto_in_wvalid", false,-1);
    tracep->declBus(c+985,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"auto_in_wlast", false,-1);
    tracep->declBit(c+1151,"auto_in_bready", false,-1);
    tracep->declBit(c+56,"auto_in_bvalid", false,-1);
    tracep->declBus(c+57,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+7,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+171,"auto_in_arready", false,-1);
    tracep->declBit(c+987,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1197,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+58,"auto_in_rready", false,-1);
    tracep->declBit(c+59,"auto_in_rvalid", false,-1);
    tracep->declBus(c+60,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_in_rlast", false,-1);
    tracep->declBit(c+169,"auto_out_awready", false,-1);
    tracep->declBit(c+982,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1197,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+170,"auto_out_wready", false,-1);
    tracep->declBit(c+984,"auto_out_wvalid", false,-1);
    tracep->declBus(c+985,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"auto_out_wlast", false,-1);
    tracep->declBit(c+1151,"auto_out_bready", false,-1);
    tracep->declBit(c+56,"auto_out_bvalid", false,-1);
    tracep->declBus(c+57,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+7,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+171,"auto_out_arready", false,-1);
    tracep->declBit(c+987,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1197,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+58,"auto_out_rready", false,-1);
    tracep->declBit(c+59,"auto_out_rvalid", false,-1);
    tracep->declBus(c+60,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+84,"auto_in_awready", false,-1);
    tracep->declBit(c+1009,"auto_in_awvalid", false,-1);
    tracep->declBus(c+155,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+64,"auto_in_wready", false,-1);
    tracep->declBit(c+990,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_in_bready", false,-1);
    tracep->declBit(c+66,"auto_in_bvalid", false,-1);
    tracep->declBus(c+57,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+67,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+85,"auto_in_arready", false,-1);
    tracep->declBit(c+1010,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_in_rready", false,-1);
    tracep->declBit(c+59,"auto_in_rvalid", false,-1);
    tracep->declBus(c+60,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+70,"auto_in_rlast", false,-1);
    tracep->declBit(c+78,"auto_out_2_awready", false,-1);
    tracep->declBit(c+1001,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+155,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1002,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1152,"auto_out_2_wready", false,-1);
    tracep->declBit(c+1003,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+79,"auto_out_2_bready", false,-1);
    tracep->declBit(c+215,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+216,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+217,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+80,"auto_out_2_arready", false,-1);
    tracep->declBit(c+1004,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1005,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+81,"auto_out_2_rready", false,-1);
    tracep->declBit(c+218,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+219,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+220,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+221,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1011,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+1012,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+230,"auto_out_1_arready", false,-1);
    tracep->declBit(c+1013,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+10,"auto_out_1_rready", false,-1);
    tracep->declBit(c+231,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+232,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+233,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+971,"auto_out_0_awready", false,-1);
    tracep->declBit(c+972,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+155,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+971,"auto_out_0_wready", false,-1);
    tracep->declBit(c+974,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+52,"auto_out_0_bready", false,-1);
    tracep->declBit(c+53,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+157,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+977,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+978,"auto_out_0_arready", false,-1);
    tracep->declBit(c+979,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+54,"auto_out_0_rready", false,-1);
    tracep->declBit(c+55,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+160,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1150,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+977,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"in_0_bvalid", false,-1);
    tracep->declBit(c+59,"in_0_rvalid", false,-1);
    tracep->declBit(c+84,"nodeIn_awready", false,-1);
    tracep->declBit(c+1015,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1016,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1017,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1018,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1019,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1020,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+234,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+235,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+236,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+237,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+238,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+239,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+240,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+241,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+242,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+243,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+244,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+245,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+246,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+247,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+248,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+249,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+250,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+251,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+252,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+253,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+254,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+255,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+256,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+257,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+258,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+259,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+260,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+261,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+262,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+263,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+264,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+265,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+266,"latched", false,-1);
    tracep->declBit(c+1021,"in_0_awvalid", false,-1);
    tracep->declBit(c+1022,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1023,"in_0_wvalid", false,-1);
    tracep->declBit(c+267,"idle_3", false,-1);
    tracep->declBit(c+86,"anyValid", false,-1);
    tracep->declBus(c+87,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+268,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+88,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+89,"prefixOR_1", false,-1);
    tracep->declBit(c+90,"winner_3_1", false,-1);
    tracep->declBit(c+91,"winner_3_2", false,-1);
    tracep->declBit(c+269,"state_3_0", false,-1);
    tracep->declBit(c+270,"state_3_1", false,-1);
    tracep->declBit(c+271,"state_3_2", false,-1);
    tracep->declBit(c+92,"muxState_3_0", false,-1);
    tracep->declBit(c+93,"muxState_3_1", false,-1);
    tracep->declBit(c+94,"muxState_3_2", false,-1);
    tracep->declBit(c+272,"idle_4", false,-1);
    tracep->declBit(c+95,"anyValid_1", false,-1);
    tracep->declBus(c+96,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+273,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+97,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+98,"winner_4_0", false,-1);
    tracep->declBit(c+99,"winner_4_2", false,-1);
    tracep->declBit(c+274,"state_4_0", false,-1);
    tracep->declBit(c+275,"state_4_2", false,-1);
    tracep->declBit(c+100,"muxState_4_0", false,-1);
    tracep->declBit(c+101,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+1022,"io_enq_valid", false,-1);
    tracep->declBus(c+1024,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+102,"io_deq_ready", false,-1);
    tracep->declBit(c+1025,"io_deq_valid", false,-1);
    tracep->declBus(c+1026,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+277,"wrap", false,-1);
    tracep->declBit(c+278,"wrap_1", false,-1);
    tracep->declBit(c+279,"maybe_full", false,-1);
    tracep->declBit(c+280,"ptr_match", false,-1);
    tracep->declBit(c+281,"empty", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->declBit(c+1025,"io_deq_valid_0", false,-1);
    tracep->declBit(c+103,"do_deq", false,-1);
    tracep->declBit(c+104,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+278,"R0_addr", false,-1);
    tracep->declBit(c+1201,"R0_en", false,-1);
    tracep->declBit(c+1120,"R0_clk", false,-1);
    tracep->declBus(c+283,"R0_data", false,-1, 2,0);
    tracep->declBit(c+277,"W0_addr", false,-1);
    tracep->declBit(c+104,"W0_en", false,-1);
    tracep->declBit(c+1120,"W0_clk", false,-1);
    tracep->declBus(c+1024,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+284+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+63,"auto_in_awready", false,-1);
    tracep->declBit(c+989,"auto_in_awvalid", false,-1);
    tracep->declBus(c+155,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+172,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+64,"auto_in_wready", false,-1);
    tracep->declBit(c+990,"auto_in_wvalid", false,-1);
    tracep->declBus(c+975,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_in_bready", false,-1);
    tracep->declBit(c+66,"auto_in_bvalid", false,-1);
    tracep->declBus(c+57,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+67,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+69,"auto_in_arready", false,-1);
    tracep->declBit(c+992,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+173,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+58,"auto_in_rready", false,-1);
    tracep->declBit(c+59,"auto_in_rvalid", false,-1);
    tracep->declBus(c+60,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+70,"auto_in_rlast", false,-1);
    tracep->declBit(c+84,"auto_out_awready", false,-1);
    tracep->declBit(c+1009,"auto_out_awvalid", false,-1);
    tracep->declBus(c+155,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+64,"auto_out_wready", false,-1);
    tracep->declBit(c+990,"auto_out_wvalid", false,-1);
    tracep->declBus(c+975,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_out_bready", false,-1);
    tracep->declBit(c+66,"auto_out_bvalid", false,-1);
    tracep->declBus(c+57,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+67,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+85,"auto_out_arready", false,-1);
    tracep->declBit(c+1010,"auto_out_arvalid", false,-1);
    tracep->declBus(c+158,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+980,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_out_rready", false,-1);
    tracep->declBit(c+59,"auto_out_rvalid", false,-1);
    tracep->declBus(c+60,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+70,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+286,"io_enq_ready", false,-1);
    tracep->declBit(c+11,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+105,"io_deq_ready", false,-1);
    tracep->declBit(c+287,"io_deq_valid", false,-1);
    tracep->declBit(c+288,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"ram_real_last", false,-1);
    tracep->declBit(c+287,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+289,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+290,"io_enq_ready", false,-1);
    tracep->declBit(c+12,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+106,"io_deq_ready", false,-1);
    tracep->declBit(c+291,"io_deq_valid", false,-1);
    tracep->declBit(c+292,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"ram_real_last", false,-1);
    tracep->declBit(c+291,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+293,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+294,"io_enq_ready", false,-1);
    tracep->declBit(c+13,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+107,"io_deq_ready", false,-1);
    tracep->declBit(c+295,"io_deq_valid", false,-1);
    tracep->declBit(c+296,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"ram_real_last", false,-1);
    tracep->declBit(c+295,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+14,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+108,"io_deq_ready", false,-1);
    tracep->declBit(c+299,"io_deq_valid", false,-1);
    tracep->declBit(c+300,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"ram_real_last", false,-1);
    tracep->declBit(c+299,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+301,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+302,"io_enq_ready", false,-1);
    tracep->declBit(c+15,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+109,"io_deq_ready", false,-1);
    tracep->declBit(c+303,"io_deq_valid", false,-1);
    tracep->declBit(c+304,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"ram_real_last", false,-1);
    tracep->declBit(c+303,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+305,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+306,"io_enq_ready", false,-1);
    tracep->declBit(c+16,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+110,"io_deq_ready", false,-1);
    tracep->declBit(c+307,"io_deq_valid", false,-1);
    tracep->declBit(c+308,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"ram_real_last", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+309,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+310,"io_enq_ready", false,-1);
    tracep->declBit(c+17,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+111,"io_deq_ready", false,-1);
    tracep->declBit(c+311,"io_deq_valid", false,-1);
    tracep->declBit(c+312,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"ram_real_last", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+313,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+314,"io_enq_ready", false,-1);
    tracep->declBit(c+18,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+112,"io_deq_ready", false,-1);
    tracep->declBit(c+315,"io_deq_valid", false,-1);
    tracep->declBit(c+316,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"ram_real_last", false,-1);
    tracep->declBit(c+315,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+317,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+318,"io_enq_ready", false,-1);
    tracep->declBit(c+19,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+113,"io_deq_ready", false,-1);
    tracep->declBit(c+319,"io_deq_valid", false,-1);
    tracep->declBit(c+320,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"ram_real_last", false,-1);
    tracep->declBit(c+319,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+321,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+322,"io_enq_ready", false,-1);
    tracep->declBit(c+20,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+114,"io_deq_ready", false,-1);
    tracep->declBit(c+323,"io_deq_valid", false,-1);
    tracep->declBit(c+324,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"ram_real_last", false,-1);
    tracep->declBit(c+323,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+325,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+326,"io_enq_ready", false,-1);
    tracep->declBit(c+21,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+327,"io_deq_valid", false,-1);
    tracep->declBit(c+328,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"ram_real_last", false,-1);
    tracep->declBit(c+327,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+329,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+330,"io_enq_ready", false,-1);
    tracep->declBit(c+22,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+116,"io_deq_ready", false,-1);
    tracep->declBit(c+331,"io_deq_valid", false,-1);
    tracep->declBit(c+332,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"ram_real_last", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+333,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+334,"io_enq_ready", false,-1);
    tracep->declBit(c+23,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+117,"io_deq_ready", false,-1);
    tracep->declBit(c+335,"io_deq_valid", false,-1);
    tracep->declBit(c+336,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"ram_real_last", false,-1);
    tracep->declBit(c+335,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+337,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+338,"io_enq_ready", false,-1);
    tracep->declBit(c+24,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+118,"io_deq_ready", false,-1);
    tracep->declBit(c+339,"io_deq_valid", false,-1);
    tracep->declBit(c+340,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"ram_real_last", false,-1);
    tracep->declBit(c+339,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+341,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+342,"io_enq_ready", false,-1);
    tracep->declBit(c+25,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+119,"io_deq_ready", false,-1);
    tracep->declBit(c+343,"io_deq_valid", false,-1);
    tracep->declBit(c+344,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"ram_real_last", false,-1);
    tracep->declBit(c+343,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+345,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+346,"io_enq_ready", false,-1);
    tracep->declBit(c+26,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+120,"io_deq_ready", false,-1);
    tracep->declBit(c+347,"io_deq_valid", false,-1);
    tracep->declBit(c+348,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"ram_real_last", false,-1);
    tracep->declBit(c+347,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+349,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+350,"io_enq_ready", false,-1);
    tracep->declBit(c+27,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+121,"io_deq_ready", false,-1);
    tracep->declBit(c+351,"io_deq_valid", false,-1);
    tracep->declBit(c+352,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"ram_real_last", false,-1);
    tracep->declBit(c+351,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+353,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+354,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+122,"io_deq_ready", false,-1);
    tracep->declBit(c+355,"io_deq_valid", false,-1);
    tracep->declBit(c+356,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"ram_real_last", false,-1);
    tracep->declBit(c+355,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+357,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+358,"io_enq_ready", false,-1);
    tracep->declBit(c+29,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+123,"io_deq_ready", false,-1);
    tracep->declBit(c+359,"io_deq_valid", false,-1);
    tracep->declBit(c+360,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"ram_real_last", false,-1);
    tracep->declBit(c+359,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+361,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+124,"io_deq_ready", false,-1);
    tracep->declBit(c+363,"io_deq_valid", false,-1);
    tracep->declBit(c+364,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"ram_real_last", false,-1);
    tracep->declBit(c+363,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+365,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+31,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+125,"io_deq_ready", false,-1);
    tracep->declBit(c+367,"io_deq_valid", false,-1);
    tracep->declBit(c+368,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"ram_real_last", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+369,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+32,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+126,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+33,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+127,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBit(c+376,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"ram_real_last", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+377,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+34,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+128,"io_deq_ready", false,-1);
    tracep->declBit(c+379,"io_deq_valid", false,-1);
    tracep->declBit(c+380,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"ram_real_last", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+381,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+35,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+129,"io_deq_ready", false,-1);
    tracep->declBit(c+383,"io_deq_valid", false,-1);
    tracep->declBit(c+384,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"ram_real_last", false,-1);
    tracep->declBit(c+383,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+385,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBit(c+172,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+130,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+37,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+131,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+38,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+132,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+39,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+133,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+40,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+134,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+135,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBit(c+173,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+136,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+169,"auto_master_out_awready", false,-1);
    tracep->declBit(c+982,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1197,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+983,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+170,"auto_master_out_wready", false,-1);
    tracep->declBit(c+984,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+985,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1151,"auto_master_out_bready", false,-1);
    tracep->declBit(c+56,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+57,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+7,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+171,"auto_master_out_arready", false,-1);
    tracep->declBit(c+987,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1197,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+988,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1198,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+58,"auto_master_out_rready", false,-1);
    tracep->declBit(c+59,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+60,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+8,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+1186,"io_interrupt", false,-1);
    tracep->declBit(c+169,"io_master_awready", false,-1);
    tracep->declBit(c+982,"io_master_awvalid", false,-1);
    tracep->declBus(c+983,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1198,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+170,"io_master_wready", false,-1);
    tracep->declBit(c+984,"io_master_wvalid", false,-1);
    tracep->declBus(c+985,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"io_master_wlast", false,-1);
    tracep->declBit(c+1151,"io_master_bready", false,-1);
    tracep->declBit(c+56,"io_master_bvalid", false,-1);
    tracep->declBus(c+7,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+57,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+171,"io_master_arready", false,-1);
    tracep->declBit(c+987,"io_master_arvalid", false,-1);
    tracep->declBus(c+988,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1198,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+58,"io_master_rready", false,-1);
    tracep->declBit(c+59,"io_master_rvalid", false,-1);
    tracep->declBus(c+62,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+61,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+8,"io_master_rlast", false,-1);
    tracep->declBus(c+60,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1186,"io_slave_awready", false,-1);
    tracep->declBit(c+1186,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1202,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1198,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1199,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1200,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1186,"io_slave_wready", false,-1);
    tracep->declBit(c+1186,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1202,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1197,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1186,"io_slave_wlast", false,-1);
    tracep->declBit(c+1186,"io_slave_bready", false,-1);
    tracep->declBit(c+1186,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1200,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1197,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1186,"io_slave_arready", false,-1);
    tracep->declBit(c+1186,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1202,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1198,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1199,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1200,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"io_slave_rready", false,-1);
    tracep->declBit(c+1186,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1200,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1202,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1186,"io_slave_rlast", false,-1);
    tracep->declBus(c+1197,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+670,"uart_flag", false,-1);
    tracep->declBit(c+1027,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+988,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+987,"io_axi_ar_arvalid", false,-1);
    tracep->declBit(c+171,"io_axi_ar_arready", false,-1);
    tracep->declBus(c+61,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+59,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+58,"io_axi_r_rready", false,-1);
    tracep->declBus(c+983,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+982,"io_axi_aw_awvalid", false,-1);
    tracep->declBit(c+169,"io_axi_aw_awready", false,-1);
    tracep->declBus(c+985,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+986,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+984,"io_axi_w_wvalid", false,-1);
    tracep->declBit(c+170,"io_axi_w_wready", false,-1);
    tracep->declBus(c+7,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+56,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+1151,"io_axi_b_bready", false,-1);
    tracep->declBus(c+671,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+1028,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1154,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1155,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+414,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+137,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+1029,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+415,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+1030,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+138,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1156,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+140,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+672,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+416,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+1031,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+673,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+674,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+417,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+1032,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+1157,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+141,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+142,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+418,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+419,"io_lsu_sta", false,-1);
    tracep->declBit(c+670,"io_uart_flag", false,-1);
    tracep->declBus(c+1033,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+1034,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+1035,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+1158,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1159,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+144,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+1160,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1036,"io_ifu_sta", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+420,"io_idu2in_ready", false,-1);
    tracep->declBit(c+420,"io_idu2in_valid", false,-1);
    tracep->declBus(c+421,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+422,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+423,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+424,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+425,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+426,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+427,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+428,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+429,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+430,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+431,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+432,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+433,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+434,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+435,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+436,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+437,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+438,"io_out2lsu_ready", false,-1);
    tracep->declBit(c+438,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+439,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+440,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+441,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+442,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+443,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+444,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+445,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+446,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+447,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+448,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+449,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+450,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+451,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+452,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+453,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+454,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+455,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+438,"valid_reg", false,-1);
    tracep->declBus(c+456,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+457,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+458,"out_data_mem_ren", false,-1);
    tracep->declBit(c+459,"out_data_mem_wen", false,-1);
    tracep->declBus(c+460,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+461,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+462,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+463,"out_data_reg_wen", false,-1);
    tracep->declBus(c+464,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+465,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+466,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+467,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+468,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+469,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+470,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+471,"out_data_il_us", false,-1);
    tracep->declBus(c+472,"out_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+473,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+474,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+475,"in_data_mem_ren", false,-1);
    tracep->declBit(c+476,"in_data_mem_wen", false,-1);
    tracep->declBus(c+477,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+478,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+479,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+480,"in_data_reg_wen", false,-1);
    tracep->declBus(c+481,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+482,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+483,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+484,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+485,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+486,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+487,"in_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+488,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+489,"in_data_il_us", false,-1);
    tracep->declBit(c+490,"state", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+491,"io_src1", false,-1, 31,0);
    tracep->declBus(c+492,"io_src2", false,-1, 31,0);
    tracep->declBus(c+493,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+494,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+1037,"io_ifu2in_ready", false,-1);
    tracep->declBit(c+1037,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+1038,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+1039,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1040,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+420,"io_out2exu_ready", false,-1);
    tracep->declBit(c+420,"io_out2exu_valid", false,-1);
    tracep->declBus(c+421,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+422,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+423,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+424,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+425,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+426,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+427,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+428,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+429,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+430,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+431,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+432,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+433,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+434,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+435,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+436,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+437,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+1041,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+1042,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+1043,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+1044,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+1045,"io_reg_data_csr_raddr", false,-1, 2,0);
    tracep->declBus(c+675,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+495,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+496,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+1027,"io_inv_flag", false,-1);
    tracep->declBus(c+497,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+498,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+1046,"in_data_inst", false,-1, 31,0);
    tracep->declBit(c+499,"state", false,-1);
    tracep->declBus(c+1047,"csr_imm", false,-1, 31,0);
    tracep->declBit(c+420,"valid_reg", false,-1);
    tracep->declBus(c+500,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+501,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+502,"out_data_mem_ren", false,-1);
    tracep->declBit(c+503,"out_data_mem_wen", false,-1);
    tracep->declBus(c+504,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+505,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+506,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+507,"out_data_reg_wen", false,-1);
    tracep->declBus(c+508,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+509,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+510,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+511,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+512,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+513,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+514,"out_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+515,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+516,"out_data_il_us", false,-1);
    tracep->declBus(c+1048,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+1049,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+1050,"casez_tmp_1", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+1046,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+1037,"io_out2idu_ready", false,-1);
    tracep->declBit(c+1037,"io_out2idu_valid", false,-1);
    tracep->declBus(c+1038,"io_out2idu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+1039,"io_out2idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+1040,"io_out2idu_bits_inst", false,-1, 31,0);
    tracep->declBit(c+1051,"io_wbu2in_ready", false,-1);
    tracep->declBit(c+1051,"io_wbu2in_valid", false,-1);
    tracep->declBus(c+1052,"io_wbu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+1033,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+1034,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+1035,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+1158,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1159,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+144,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+1160,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1036,"io_ifu_sta", false,-1);
    tracep->declBus(c+1039,"io_out2idu_bits_pc_0", false,-1, 31,0);
    tracep->declBus(c+1053,"in_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+1054,"state", false,-1);
    tracep->declBit(c+1037,"valid_reg", false,-1);
    tracep->declBit(c+1055,"wbu2in_reg", false,-1);
    tracep->declBus(c+1056,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+1057,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+1058,"pc_reg", false,-1, 31,0);
    tracep->declBit(c+1034,"arvalid_reg", false,-1);
    tracep->declBit(c+1036,"sta_reg", false,-1);
    tracep->declBus(c+1059,"pc_reg_REG", false,-1, 31,0);
    tracep->declBit(c+144,"io_ifu_axi_r_rready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+438,"io_exu2in_ready", false,-1);
    tracep->declBit(c+438,"io_exu2in_valid", false,-1);
    tracep->declBus(c+439,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+440,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+441,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+442,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+443,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+444,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+445,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+446,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+447,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+448,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+449,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+450,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+451,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+452,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+453,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+454,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+455,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+1060,"io_out2wbu_ready", false,-1);
    tracep->declBit(c+1060,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+676,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+677,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+678,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+679,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+680,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+681,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+682,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+683,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+684,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+685,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+686,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+687,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+688,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+689,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+1029,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+415,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+1030,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+138,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1156,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+140,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+673,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+674,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+417,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+1032,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+672,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+416,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+1031,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+1157,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+141,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+142,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+418,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+419,"io_lsu_sta", false,-1);
    tracep->declBit(c+517,"ready_reg", false,-1);
    tracep->declBit(c+518,"ready_reg_1", false,-1);
    tracep->declBit(c+1060,"valid_reg", false,-1);
    tracep->declBus(c+519,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+520,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+521,"in_data_mem_ren", false,-1);
    tracep->declBit(c+522,"in_data_mem_wen", false,-1);
    tracep->declBus(c+523,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+524,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+525,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+526,"in_data_reg_wen", false,-1);
    tracep->declBus(c+527,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+528,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+529,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+530,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+531,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+532,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+533,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+534,"in_data_il_us", false,-1);
    tracep->declBus(c+535,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+536,"state", false,-1);
    tracep->declBus(c+537,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+538,"out_data_pc", false,-1, 31,0);
    tracep->declBus(c+539,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+540,"out_data_reg_wen", false,-1);
    tracep->declBus(c+541,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+542,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+543,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+544,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+545,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+546,"out_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+547,"out_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+548,"out_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+549,"out_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+550,"out_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+551,"casez_tmp", false,-1, 31,0);
    tracep->declBit(c+552,"exu2in_valid", false,-1);
    tracep->declBus(c+553,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+554,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+415,"mem_ren_reg", false,-1);
    tracep->declBus(c+555,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+556,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+557,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+558,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+416,"awvalid_reg", false,-1);
    tracep->declBit(c+417,"wvalid_reg", false,-1);
    tracep->declBus(c+418,"io_lsu_addr_r", false,-1, 31,0);
    tracep->declBit(c+559,"sta_reg", false,-1);
    tracep->declBit(c+140,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+142,"io_lsu_axi_b_bready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBus(c+671,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+1028,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1154,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1155,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+414,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+137,"io_axi_r_rready", false,-1);
    tracep->declBus(c+1061,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+560,"mtime", false,-1, 63,0);
    tracep->declBus(c+562,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+414,"rvalid_reg", false,-1);
    tracep->declBus(c+563,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+564,"arvalid_reg", false,-1);
    tracep->declBit(c+145,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBus(c+690,"io_inData", false,-1, 31,0);
    tracep->declBit(c+691,"io_inValid", false,-1);
    tracep->declBus(c+565,"io_outData", false,-1, 31,0);
    tracep->declBit(c+692,"io_delayDone", false,-1);
    tracep->declBus(c+566,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+567,"counter", false,-1, 4,0);
    tracep->declBus(c+568,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+1062,"io_csr_wen_2", false,-1);
    tracep->declBus(c+1063,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+1041,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+1042,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+1043,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+1044,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+1045,"io_reg_read_csr_raddr", false,-1, 2,0);
    tracep->declBus(c+675,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+495,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+496,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+693,"io_wen", false,-1);
    tracep->declBus(c+1064,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+1065,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+1066,"io_csr_wen_1", false,-1);
    tracep->declBus(c+1067,"io_csr_waddr_1", false,-1, 2,0);
    tracep->declBus(c+1068,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+569,"csr_0", false,-1, 31,0);
    tracep->declBus(c+570,"csr_1", false,-1, 31,0);
    tracep->declBus(c+496,"csr_2", false,-1, 31,0);
    tracep->declBus(c+571,"csr_3", false,-1, 31,0);
    tracep->declBus(c+572,"csr_4", false,-1, 31,0);
    tracep->declBus(c+573,"csr_5", false,-1, 31,0);
    tracep->declBus(c+574,"reg_0", false,-1, 31,0);
    tracep->declBus(c+575,"reg_1", false,-1, 31,0);
    tracep->declBus(c+576,"reg_2", false,-1, 31,0);
    tracep->declBus(c+577,"reg_3", false,-1, 31,0);
    tracep->declBus(c+578,"reg_4", false,-1, 31,0);
    tracep->declBus(c+579,"reg_5", false,-1, 31,0);
    tracep->declBus(c+580,"reg_6", false,-1, 31,0);
    tracep->declBus(c+581,"reg_7", false,-1, 31,0);
    tracep->declBus(c+582,"reg_8", false,-1, 31,0);
    tracep->declBus(c+583,"reg_9", false,-1, 31,0);
    tracep->declBus(c+584,"reg_10", false,-1, 31,0);
    tracep->declBus(c+585,"reg_11", false,-1, 31,0);
    tracep->declBus(c+586,"reg_12", false,-1, 31,0);
    tracep->declBus(c+587,"reg_13", false,-1, 31,0);
    tracep->declBus(c+588,"reg_14", false,-1, 31,0);
    tracep->declBus(c+495,"reg_15", false,-1, 31,0);
    tracep->declBus(c+589,"reg_16", false,-1, 31,0);
    tracep->declBus(c+590,"reg_17", false,-1, 31,0);
    tracep->declBus(c+591,"reg_18", false,-1, 31,0);
    tracep->declBus(c+592,"reg_19", false,-1, 31,0);
    tracep->declBus(c+593,"reg_20", false,-1, 31,0);
    tracep->declBus(c+594,"reg_21", false,-1, 31,0);
    tracep->declBus(c+595,"reg_22", false,-1, 31,0);
    tracep->declBus(c+596,"reg_23", false,-1, 31,0);
    tracep->declBus(c+597,"reg_24", false,-1, 31,0);
    tracep->declBus(c+598,"reg_25", false,-1, 31,0);
    tracep->declBus(c+599,"reg_26", false,-1, 31,0);
    tracep->declBus(c+600,"reg_27", false,-1, 31,0);
    tracep->declBus(c+601,"reg_28", false,-1, 31,0);
    tracep->declBus(c+602,"reg_29", false,-1, 31,0);
    tracep->declBus(c+603,"reg_30", false,-1, 31,0);
    tracep->declBus(c+604,"reg_31", false,-1, 31,0);
    tracep->declBus(c+1042,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+1044,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+675,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1153,"reset", false,-1);
    tracep->declBit(c+1060,"io_lsu2in_ready", false,-1);
    tracep->declBit(c+1060,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+676,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+677,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+678,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+679,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+680,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+681,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+682,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+683,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+684,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+685,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+686,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+687,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+688,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+689,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+1051,"io_out2ifu_ready", false,-1);
    tracep->declBit(c+1051,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+1052,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+1065,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+693,"io_reg_wen", false,-1);
    tracep->declBus(c+1064,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+1067,"io_csr_waddr_1", false,-1, 2,0);
    tracep->declBus(c+1068,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+1066,"io_csr_wen_1", false,-1);
    tracep->declBus(c+1063,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+1062,"io_csr_wen_2", false,-1);
    tracep->declBus(c+1069,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+1070,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+605,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+606,"in_data_reg_wen", false,-1);
    tracep->declBus(c+607,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+1071,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+608,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+609,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+1072,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+1073,"in_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+610,"in_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1074,"in_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+1075,"in_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+1076,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+1077,"state", false,-1);
    tracep->declBus(c+1078,"out_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+1051,"valid_reg", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"io_d", false,-1);
    tracep->declBit(c+611,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"io_d", false,-1);
    tracep->declBit(c+611,"io_q", false,-1);
    tracep->declBit(c+611,"sync_0", false,-1);
    tracep->declBit(c+612,"sync_1", false,-1);
    tracep->declBit(c+613,"sync_2", false,-1);
    tracep->declBit(c+614,"sync_3", false,-1);
    tracep->declBit(c+615,"sync_4", false,-1);
    tracep->declBit(c+616,"sync_5", false,-1);
    tracep->declBit(c+617,"sync_6", false,-1);
    tracep->declBit(c+618,"sync_7", false,-1);
    tracep->declBit(c+619,"sync_8", false,-1);
    tracep->declBit(c+620,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+957,"auto_in_psel", false,-1);
    tracep->declBit(c+668,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+956,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"auto_in_pready", false,-1);
    tracep->declBit(c+1194,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1122,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1124,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+957,"in_psel", false,-1);
    tracep->declBit(c+668,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"in_pready", false,-1);
    tracep->declBus(c+1195,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1194,"in_pslverr", false,-1);
    tracep->declBus(c+1122,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1123,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1124,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1125,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1126,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+955,"auto_in_psel", false,-1);
    tracep->declBit(c+667,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+956,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_in_pready", false,-1);
    tracep->declBit(c+1191,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1132,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1133,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+955,"in_psel", false,-1);
    tracep->declBit(c+667,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"in_pready", false,-1);
    tracep->declBus(c+1192,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1191,"in_pslverr", false,-1);
    tracep->declBit(c+1132,"ps2_clk", false,-1);
    tracep->declBit(c+1133,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+1011,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1012,"auto_in_wvalid", false,-1);
    tracep->declBit(c+230,"auto_in_arready", false,-1);
    tracep->declBit(c+1013,"auto_in_arvalid", false,-1);
    tracep->declBus(c+158,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1014,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+10,"auto_in_rready", false,-1);
    tracep->declBit(c+231,"auto_in_rvalid", false,-1);
    tracep->declBus(c+232,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+233,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+231,"state", false,-1);
    tracep->declBus(c+233,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+232,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1080,"raddr", false,-1, 31,0);
    tracep->declBit(c+1081,"ren", false,-1);
    tracep->declBus(c+1082,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+958,"auto_in_psel", false,-1);
    tracep->declBit(c+669,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+946,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+154,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+49,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+50,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1144,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+958,"in_psel", false,-1);
    tracep->declBit(c+669,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"in_pready", false,-1);
    tracep->declBus(c+154,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+49,"qspi_sck", false,-1);
    tracep->declBit(c+50,"qspi_ce_n", false,-1);
    tracep->declBus(c+1144,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1144,"din", false,-1, 3,0);
    tracep->declBus(c+146,"dout", false,-1, 3,0);
    tracep->declBus(c+147,"douten", false,-1, 3,0);
    tracep->declBit(c+1161,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1120,"clk_i", false,-1);
    tracep->declBit(c+1121,"rst_i", false,-1);
    tracep->declBus(c+946,"adr_i", false,-1, 31,0);
    tracep->declBus(c+949,"dat_i", false,-1, 31,0);
    tracep->declBus(c+154,"dat_o", false,-1, 31,0);
    tracep->declBus(c+950,"sel_i", false,-1, 3,0);
    tracep->declBit(c+958,"cyc_i", false,-1);
    tracep->declBit(c+958,"stb_i", false,-1);
    tracep->declBit(c+1161,"ack_o", false,-1);
    tracep->declBit(c+948,"we_i", false,-1);
    tracep->declBit(c+49,"sck", false,-1);
    tracep->declBit(c+50,"ce_n", false,-1);
    tracep->declBus(c+1144,"din", false,-1, 3,0);
    tracep->declBus(c+146,"dout", false,-1, 3,0);
    tracep->declBus(c+147,"douten", false,-1, 3,0);
    tracep->declBus(c+1200,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1203,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1204,"ST_QPI", false,-1, 1,0);
    tracep->declBit(c+708,"mr_sck", false,-1);
    tracep->declBit(c+709,"mr_ce_n", false,-1);
    tracep->declBus(c+1144,"mr_din", false,-1, 3,0);
    tracep->declBus(c+710,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+711,"mr_doe", false,-1);
    tracep->declBit(c+712,"mw_sck", false,-1);
    tracep->declBit(c+713,"mw_ce_n", false,-1);
    tracep->declBus(c+1144,"mw_din", false,-1, 3,0);
    tracep->declBus(c+148,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+714,"mw_doe", false,-1);
    tracep->declBit(c+43,"mr_rd", false,-1);
    tracep->declBit(c+715,"mr_done", false,-1);
    tracep->declBit(c+44,"mw_wr", false,-1);
    tracep->declBit(c+149,"mw_done", false,-1);
    tracep->declBit(c+958,"wb_valid", false,-1);
    tracep->declBit(c+1083,"wb_we", false,-1);
    tracep->declBit(c+1084,"wb_re", false,-1);
    tracep->declBit(c+150,"qpi_we", false,-1);
    tracep->declBus(c+1162,"state", false,-1, 1,0);
    tracep->declBus(c+151,"nstate", false,-1, 1,0);
    tracep->declBus(c+45,"size", false,-1, 2,0);
    tracep->declBus(c+46,"byte0", false,-1, 7,0);
    tracep->declBus(c+1085,"byte1", false,-1, 7,0);
    tracep->declBus(c+1086,"byte2", false,-1, 7,0);
    tracep->declBus(c+1087,"byte3", false,-1, 7,0);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1163,"rst_n", false,-1);
    tracep->declBus(c+1088,"addr", false,-1, 23,0);
    tracep->declBit(c+1084,"rd", false,-1);
    tracep->declBus(c+1205,"size", false,-1, 2,0);
    tracep->declBit(c+715,"done", false,-1);
    tracep->declBus(c+154,"line", false,-1, 31,0);
    tracep->declBit(c+708,"sck", false,-1);
    tracep->declBit(c+709,"ce_n", false,-1);
    tracep->declBus(c+1144,"din", false,-1, 3,0);
    tracep->declBus(c+710,"dout", false,-1, 3,0);
    tracep->declBit(c+711,"douten", false,-1);
    tracep->declBus(c+1206,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1207,"READ", false,-1, 0,0);
    tracep->declBus(c+1208,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+716,"state", false,-1);
    tracep->declBit(c+1114,"nstate", false,-1);
    tracep->declBus(c+717,"counter", false,-1, 7,0);
    tracep->declBus(c+718,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+621+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1209,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+719,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1163,"rst_n", false,-1);
    tracep->declBus(c+1089,"addr", false,-1, 23,0);
    tracep->declBus(c+47,"line", false,-1, 31,0);
    tracep->declBus(c+45,"size", false,-1, 2,0);
    tracep->declBit(c+152,"wr", false,-1);
    tracep->declBit(c+149,"done", false,-1);
    tracep->declBit(c+712,"sck", false,-1);
    tracep->declBit(c+713,"ce_n", false,-1);
    tracep->declBus(c+1144,"din", false,-1, 3,0);
    tracep->declBus(c+148,"dout", false,-1, 3,0);
    tracep->declBit(c+714,"douten", false,-1);
    tracep->declBus(c+1200,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1203,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1204,"QPI", false,-1, 1,0);
    tracep->declBus(c+48,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+720,"state", false,-1, 1,0);
    tracep->declBus(c+1164,"nstate", false,-1, 1,0);
    tracep->declBus(c+721,"counter", false,-1, 7,0);
    tracep->declBus(c+722,"saddr", false,-1, 23,0);
    tracep->declBus(c+1210,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+1211,"CMD_QPI", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+952,"auto_in_psel", false,-1);
    tracep->declBit(c+665,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+946,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+706,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+707,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1145,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+697,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+698,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+699,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+700,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+701,"sdram_bundle_we", false,-1);
    tracep->declBus(c+702,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+703,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+704,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+705,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+946,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+952,"in_psel", false,-1);
    tracep->declBit(c+665,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+706,"in_pready", false,-1);
    tracep->declBus(c+707,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+1145,"sdram_clk", false,-1);
    tracep->declBit(c+697,"sdram_cke", false,-1);
    tracep->declBit(c+698,"sdram_cs", false,-1);
    tracep->declBit(c+699,"sdram_ras", false,-1);
    tracep->declBit(c+700,"sdram_cas", false,-1);
    tracep->declBit(c+701,"sdram_we", false,-1);
    tracep->declBus(c+702,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+703,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+704,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+705,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+723,"sdram_dout_en", false,-1);
    tracep->declBus(c+724,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+625,"state", false,-1, 1,0);
    tracep->declBit(c+725,"req_accept", false,-1);
    tracep->declBit(c+1090,"is_read", false,-1);
    tracep->declBit(c+1091,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1120,"clk_i", false,-1);
    tracep->declBit(c+1121,"rst_i", false,-1);
    tracep->declBus(c+1092,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1090,"inport_rd_i", false,-1);
    tracep->declBus(c+1198,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+946,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+949,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+705,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+725,"inport_accept_o", false,-1);
    tracep->declBit(c+706,"inport_ack_o", false,-1);
    tracep->declBit(c+1186,"inport_error_o", false,-1);
    tracep->declBus(c+707,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1145,"sdram_clk_o", false,-1);
    tracep->declBit(c+697,"sdram_cke_o", false,-1);
    tracep->declBit(c+698,"sdram_cs_o", false,-1);
    tracep->declBit(c+699,"sdram_ras_o", false,-1);
    tracep->declBit(c+700,"sdram_cas_o", false,-1);
    tracep->declBit(c+701,"sdram_we_o", false,-1);
    tracep->declBus(c+704,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+702,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+703,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+724,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+723,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1212,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1213,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1214,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1215,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1215,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1215,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1216,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1217,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1218,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1219,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1220,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1216,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1221,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1222,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1223,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1224,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1225,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1226,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1227,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1197,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1228,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1216,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1197,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1227,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1226,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1222,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1224,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1223,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1225,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1221,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1229,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1230,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1231,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1231,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1232,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1231,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1215,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1215,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+946,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1092,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1090,"ram_rd_w", false,-1);
    tracep->declBit(c+725,"ram_accept_w", false,-1);
    tracep->declBus(c+949,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+707,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+706,"ram_ack_w", false,-1);
    tracep->declBit(c+1093,"ram_req_w", false,-1);
    tracep->declBus(c+726,"command_q", false,-1, 3,0);
    tracep->declBus(c+702,"addr_q", false,-1, 12,0);
    tracep->declBus(c+724,"data_q", false,-1, 15,0);
    tracep->declBit(c+727,"data_rd_en_q", false,-1);
    tracep->declBus(c+704,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+697,"cke_q", false,-1);
    tracep->declBus(c+703,"bank_q", false,-1, 1,0);
    tracep->declBus(c+728,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+729,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+705,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+730,"refresh_q", false,-1);
    tracep->declBus(c+731,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+732+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+736,"state_q", false,-1, 3,0);
    tracep->declBus(c+1115,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1116,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+737,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+738,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1094,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1095,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1096,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1216,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+739,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1117,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1234,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+740,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+741,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+742,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+743,"idx", false,-1, 31,0);
    tracep->declBus(c+744,"rd_q", false,-1, 3,0);
    tracep->declBit(c+706,"ack_q", false,-1);
    tracep->declArray(c+745,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+962,"auto_in_psel", false,-1);
    tracep->declBit(c+963,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+954,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1148,"auto_in_pready", false,-1);
    tracep->declBit(c+1196,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1149,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+695,"spi_bundle_sck", false,-1);
    tracep->declBus(c+696,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1142,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1143,"spi_bundle_miso", false,-1);
    tracep->declBus(c+626,"state", false,-1, 2,0);
    tracep->declBus(c+627,"pwdata_reg", false,-1, 31,0);
    tracep->declBus(c+628,"paddr_reg", false,-1, 31,0);
    tracep->declBus(c+629,"addr_reg", false,-1, 31,0);
    tracep->declBit(c+630,"penable", false,-1);
    tracep->declBit(c+631,"write", false,-1);
    tracep->declBus(c+1097,"mspi_in_paddr", false,-1, 31,0);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1235,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1236,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1237,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1097,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1098,"in_psel", false,-1);
    tracep->declBit(c+1099,"in_penable", false,-1);
    tracep->declBus(c+694,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1100,"in_pwrite", false,-1);
    tracep->declBus(c+1101,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1102,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+748,"in_pready", false,-1);
    tracep->declBus(c+749,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+695,"spi_sck", false,-1);
    tracep->declBus(c+696,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1142,"spi_mosi", false,-1);
    tracep->declBit(c+1143,"spi_miso", false,-1);
    tracep->declBit(c+750,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1238,"Tp", false,-1, 31,0);
    tracep->declBit(c+1120,"wb_clk_i", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBus(c+1103,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1101,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+749,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1102,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1100,"wb_we_i", false,-1);
    tracep->declBit(c+1098,"wb_stb_i", false,-1);
    tracep->declBit(c+1099,"wb_cyc_i", false,-1);
    tracep->declBit(c+748,"wb_ack_o", false,-1);
    tracep->declBit(c+1186,"wb_err_o", false,-1);
    tracep->declBit(c+750,"wb_int_o", false,-1);
    tracep->declBus(c+696,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+695,"sclk_pad_o", false,-1);
    tracep->declBit(c+1142,"mosi_pad_o", false,-1);
    tracep->declBit(c+1143,"miso_pad_i", false,-1);
    tracep->declBus(c+751,"divider", false,-1, 15,0);
    tracep->declBus(c+752,"ctrl", false,-1, 13,0);
    tracep->declBus(c+753,"ss", false,-1, 7,0);
    tracep->declBus(c+1118,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+754,"rx", false,-1, 127,0);
    tracep->declBit(c+758,"rx_negedge", false,-1);
    tracep->declBit(c+759,"tx_negedge", false,-1);
    tracep->declBus(c+760,"char_len", false,-1, 6,0);
    tracep->declBit(c+761,"go", false,-1);
    tracep->declBit(c+762,"lsb", false,-1);
    tracep->declBit(c+763,"ie", false,-1);
    tracep->declBit(c+764,"ass", false,-1);
    tracep->declBit(c+1104,"spi_divider_sel", false,-1);
    tracep->declBit(c+1105,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1106,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1107,"spi_ss_sel", false,-1);
    tracep->declBit(c+765,"tip", false,-1);
    tracep->declBit(c+766,"pos_edge", false,-1);
    tracep->declBit(c+767,"neg_edge", false,-1);
    tracep->declBit(c+768,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1238,"Tp", false,-1, 31,0);
    tracep->declBit(c+1120,"clk_in", false,-1);
    tracep->declBit(c+1121,"rst", false,-1);
    tracep->declBit(c+765,"enable", false,-1);
    tracep->declBit(c+761,"go", false,-1);
    tracep->declBit(c+768,"last_clk", false,-1);
    tracep->declBus(c+751,"divider", false,-1, 15,0);
    tracep->declBit(c+695,"clk_out", false,-1);
    tracep->declBit(c+766,"pos_edge", false,-1);
    tracep->declBit(c+767,"neg_edge", false,-1);
    tracep->declBus(c+769,"cnt", false,-1, 15,0);
    tracep->declBit(c+770,"cnt_zero", false,-1);
    tracep->declBit(c+771,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1238,"Tp", false,-1, 31,0);
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"rst", false,-1);
    tracep->declBus(c+1108,"latch", false,-1, 3,0);
    tracep->declBus(c+1102,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+760,"len", false,-1, 6,0);
    tracep->declBit(c+762,"lsb", false,-1);
    tracep->declBit(c+761,"go", false,-1);
    tracep->declBit(c+766,"pos_edge", false,-1);
    tracep->declBit(c+767,"neg_edge", false,-1);
    tracep->declBit(c+758,"rx_negedge", false,-1);
    tracep->declBit(c+759,"tx_negedge", false,-1);
    tracep->declBit(c+765,"tip", false,-1);
    tracep->declBit(c+768,"last", false,-1);
    tracep->declBus(c+1101,"p_in", false,-1, 31,0);
    tracep->declArray(c+754,"p_out", false,-1, 127,0);
    tracep->declBit(c+695,"s_clk", false,-1);
    tracep->declBit(c+1143,"s_in", false,-1);
    tracep->declBit(c+1142,"s_out", false,-1);
    tracep->declBus(c+772,"cnt", false,-1, 7,0);
    tracep->declArray(c+754,"data", false,-1, 127,0);
    tracep->declBus(c+773,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+774,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+775,"rx_clk", false,-1);
    tracep->declBit(c+776,"tx_clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+959,"auto_in_psel", false,-1);
    tracep->declBit(c+960,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+956,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+961,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1147,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1140,"uart_rx", false,-1);
    tracep->declBit(c+1141,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+959,"in_psel", false,-1);
    tracep->declBit(c+960,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+961,"in_pready", false,-1);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBus(c+1079,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+1147,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"uart_rx", false,-1);
    tracep->declBit(c+1141,"uart_tx", false,-1);
    tracep->declBit(c+777,"rtsn", false,-1);
    tracep->declBit(c+1186,"ctsn", false,-1);
    tracep->declBit(c+778,"dtr_pad_o", false,-1);
    tracep->declBit(c+1186,"dsr_pad_i", false,-1);
    tracep->declBit(c+1186,"ri_pad_i", false,-1);
    tracep->declBit(c+1186,"dcd_pad_i", false,-1);
    tracep->declBit(c+779,"interrupt", false,-1);
    tracep->declBit(c+1165,"reg_we", false,-1);
    tracep->declBit(c+1166,"reg_re", false,-1);
    tracep->declBus(c+1109,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1110,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+632,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1119,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+780,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBus(c+1109,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1111,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1119,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1165,"wb_we_i", false,-1);
    tracep->declBit(c+1166,"wb_re_i", false,-1);
    tracep->declBit(c+1141,"stx_pad_o", false,-1);
    tracep->declBit(c+1140,"srx_pad_i", false,-1);
    tracep->declBus(c+1229,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+780,"rts_pad_o", false,-1);
    tracep->declBit(c+778,"dtr_pad_o", false,-1);
    tracep->declBit(c+779,"int_o", false,-1);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+782,"srx_pad", false,-1);
    tracep->declBus(c+783,"ier", false,-1, 3,0);
    tracep->declBus(c+784,"iir", false,-1, 3,0);
    tracep->declBus(c+785,"fcr", false,-1, 1,0);
    tracep->declBus(c+786,"mcr", false,-1, 4,0);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBus(c+788,"msr", false,-1, 7,0);
    tracep->declBus(c+789,"dl", false,-1, 15,0);
    tracep->declBus(c+790,"scratch", false,-1, 7,0);
    tracep->declBit(c+791,"start_dlc", false,-1);
    tracep->declBit(c+792,"lsr_mask_d", false,-1);
    tracep->declBit(c+793,"msi_reset", false,-1);
    tracep->declBus(c+794,"dlc", false,-1, 15,0);
    tracep->declBus(c+795,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+796,"rx_reset", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+798,"dlab", false,-1);
    tracep->declBit(c+1201,"cts_pad_i", false,-1);
    tracep->declBit(c+1186,"dsr_pad_i", false,-1);
    tracep->declBit(c+1186,"ri_pad_i", false,-1);
    tracep->declBit(c+1186,"dcd_pad_i", false,-1);
    tracep->declBit(c+799,"loopback", false,-1);
    tracep->declBit(c+1186,"cts", false,-1);
    tracep->declBit(c+1201,"dsr", false,-1);
    tracep->declBit(c+1201,"ri", false,-1);
    tracep->declBit(c+1201,"dcd", false,-1);
    tracep->declBit(c+800,"cts_c", false,-1);
    tracep->declBit(c+801,"dsr_c", false,-1);
    tracep->declBit(c+802,"ri_c", false,-1);
    tracep->declBit(c+803,"dcd_c", false,-1);
    tracep->declBus(c+804,"lsr", false,-1, 7,0);
    tracep->declBit(c+805,"lsr0", false,-1);
    tracep->declBit(c+806,"lsr1", false,-1);
    tracep->declBit(c+807,"lsr2", false,-1);
    tracep->declBit(c+808,"lsr3", false,-1);
    tracep->declBit(c+809,"lsr4", false,-1);
    tracep->declBit(c+810,"lsr5", false,-1);
    tracep->declBit(c+811,"lsr6", false,-1);
    tracep->declBit(c+812,"lsr7", false,-1);
    tracep->declBit(c+813,"lsr0r", false,-1);
    tracep->declBit(c+814,"lsr1r", false,-1);
    tracep->declBit(c+815,"lsr2r", false,-1);
    tracep->declBit(c+816,"lsr3r", false,-1);
    tracep->declBit(c+817,"lsr4r", false,-1);
    tracep->declBit(c+818,"lsr5r", false,-1);
    tracep->declBit(c+819,"lsr6r", false,-1);
    tracep->declBit(c+820,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+821,"rls_int", false,-1);
    tracep->declBit(c+822,"rda_int", false,-1);
    tracep->declBit(c+823,"ti_int", false,-1);
    tracep->declBit(c+824,"thre_int", false,-1);
    tracep->declBit(c+825,"ms_int", false,-1);
    tracep->declBit(c+826,"tf_push", false,-1);
    tracep->declBit(c+827,"rf_pop", false,-1);
    tracep->declBus(c+1167,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+828,"rf_error_bit", false,-1);
    tracep->declBit(c+806,"rf_overrun", false,-1);
    tracep->declBit(c+829,"rf_push_pulse", false,-1);
    tracep->declBus(c+830,"rf_count", false,-1, 4,0);
    tracep->declBus(c+831,"tf_count", false,-1, 4,0);
    tracep->declBus(c+832,"tstate", false,-1, 2,0);
    tracep->declBus(c+833,"rstate", false,-1, 3,0);
    tracep->declBus(c+834,"counter_t", false,-1, 9,0);
    tracep->declBit(c+835,"thre_set_en", false,-1);
    tracep->declBus(c+836,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+837,"block_value", false,-1, 7,0);
    tracep->declBit(c+838,"serial_out", false,-1);
    tracep->declBit(c+839,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+840,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+841,"lsr0_d", false,-1);
    tracep->declBit(c+842,"lsr1_d", false,-1);
    tracep->declBit(c+843,"lsr2_d", false,-1);
    tracep->declBit(c+844,"lsr3_d", false,-1);
    tracep->declBit(c+845,"lsr4_d", false,-1);
    tracep->declBit(c+846,"lsr5_d", false,-1);
    tracep->declBit(c+847,"lsr6_d", false,-1);
    tracep->declBit(c+848,"lsr7_d", false,-1);
    tracep->declBit(c+849,"rls_int_d", false,-1);
    tracep->declBit(c+850,"thre_int_d", false,-1);
    tracep->declBit(c+851,"ms_int_d", false,-1);
    tracep->declBit(c+852,"ti_int_d", false,-1);
    tracep->declBit(c+853,"rda_int_d", false,-1);
    tracep->declBit(c+854,"rls_int_rise", false,-1);
    tracep->declBit(c+855,"thre_int_rise", false,-1);
    tracep->declBit(c+856,"ms_int_rise", false,-1);
    tracep->declBit(c+857,"ti_int_rise", false,-1);
    tracep->declBit(c+858,"rda_int_rise", false,-1);
    tracep->declBit(c+859,"rls_int_pnd", false,-1);
    tracep->declBit(c+860,"rda_int_pnd", false,-1);
    tracep->declBit(c+861,"thre_int_pnd", false,-1);
    tracep->declBit(c+862,"ms_int_pnd", false,-1);
    tracep->declBit(c+863,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1238,"Tp", false,-1, 31,0);
    tracep->declBus(c+1238,"width", false,-1, 31,0);
    tracep->declBus(c+1207,"init_value", false,-1, 0,0);
    tracep->declBit(c+1121,"rst_i", false,-1);
    tracep->declBit(c+1120,"clk_i", false,-1);
    tracep->declBit(c+1186,"stage1_rst_i", false,-1);
    tracep->declBit(c+1201,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1140,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+782,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+864,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+827,"rf_pop", false,-1);
    tracep->declBit(c+839,"srx_pad_i", false,-1);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+796,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+834,"counter_t", false,-1, 9,0);
    tracep->declBus(c+830,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1167,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+806,"rf_overrun", false,-1);
    tracep->declBit(c+828,"rf_error_bit", false,-1);
    tracep->declBus(c+833,"rstate", false,-1, 3,0);
    tracep->declBit(c+829,"rf_push_pulse", false,-1);
    tracep->declBus(c+865,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+866,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+867,"rshift", false,-1, 7,0);
    tracep->declBit(c+868,"rparity", false,-1);
    tracep->declBit(c+869,"rparity_error", false,-1);
    tracep->declBit(c+870,"rframing_error", false,-1);
    tracep->declBit(c+871,"rbit_in", false,-1);
    tracep->declBit(c+872,"rparity_xor", false,-1);
    tracep->declBus(c+873,"counter_b", false,-1, 7,0);
    tracep->declBit(c+874,"rf_push_q", false,-1);
    tracep->declBus(c+875,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+876,"rf_push", false,-1);
    tracep->declBit(c+877,"break_error", false,-1);
    tracep->declBit(c+878,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+879,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+880,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+881,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1197,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1227,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1226,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1222,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1224,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1223,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1225,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1221,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1229,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1230,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1239,"sr_push", false,-1, 3,0);
    tracep->declBus(c+882,"toc_value", false,-1, 9,0);
    tracep->declBus(c+883,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1240,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1232,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1241,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBit(c+829,"push", false,-1);
    tracep->declBit(c+827,"pop", false,-1);
    tracep->declBus(c+875,"data_in", false,-1, 10,0);
    tracep->declBit(c+796,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1167,"data_out", false,-1, 10,0);
    tracep->declBit(c+806,"overrun", false,-1);
    tracep->declBus(c+830,"count", false,-1, 4,0);
    tracep->declBit(c+828,"error_bit", false,-1);
    tracep->declBus(c+1168,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+884+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+900,"top", false,-1, 3,0);
    tracep->declBus(c+901,"bottom", false,-1, 3,0);
    tracep->declBus(c+902,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+903,"word0", false,-1, 2,0);
    tracep->declBus(c+904,"word1", false,-1, 2,0);
    tracep->declBus(c+905,"word2", false,-1, 2,0);
    tracep->declBus(c+906,"word3", false,-1, 2,0);
    tracep->declBus(c+907,"word4", false,-1, 2,0);
    tracep->declBus(c+908,"word5", false,-1, 2,0);
    tracep->declBus(c+909,"word6", false,-1, 2,0);
    tracep->declBus(c+910,"word7", false,-1, 2,0);
    tracep->declBus(c+911,"word8", false,-1, 2,0);
    tracep->declBus(c+912,"word9", false,-1, 2,0);
    tracep->declBus(c+913,"word10", false,-1, 2,0);
    tracep->declBus(c+914,"word11", false,-1, 2,0);
    tracep->declBus(c+915,"word12", false,-1, 2,0);
    tracep->declBus(c+916,"word13", false,-1, 2,0);
    tracep->declBus(c+917,"word14", false,-1, 2,0);
    tracep->declBus(c+918,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1216,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1237,"data_width", false,-1, 31,0);
    tracep->declBus(c+1232,"depth", false,-1, 31,0);
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+829,"we", false,-1);
    tracep->declBus(c+900,"a", false,-1, 3,0);
    tracep->declBus(c+901,"dpra", false,-1, 3,0);
    tracep->declBus(c+919,"di", false,-1, 7,0);
    tracep->declBus(c+1168,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+633+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+826,"tf_push", false,-1);
    tracep->declBus(c+1111,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+781,"enable", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+838,"stx_pad_o", false,-1);
    tracep->declBus(c+832,"tstate", false,-1, 2,0);
    tracep->declBus(c+831,"tf_count", false,-1, 4,0);
    tracep->declBus(c+920,"counter", false,-1, 4,0);
    tracep->declBus(c+921,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+922,"shift_out", false,-1, 6,0);
    tracep->declBit(c+923,"stx_o_tmp", false,-1);
    tracep->declBit(c+924,"parity_xor", false,-1);
    tracep->declBit(c+925,"tf_pop", false,-1);
    tracep->declBit(c+926,"bit_out", false,-1);
    tracep->declBus(c+1111,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1169,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+927,"tf_overrun", false,-1);
    tracep->declBus(c+1199,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1185,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1242,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1243,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1205,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1244,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1237,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1232,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1241,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+1121,"wb_rst_i", false,-1);
    tracep->declBit(c+826,"push", false,-1);
    tracep->declBit(c+925,"pop", false,-1);
    tracep->declBus(c+1111,"data_in", false,-1, 7,0);
    tracep->declBit(c+797,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1169,"data_out", false,-1, 7,0);
    tracep->declBit(c+927,"overrun", false,-1);
    tracep->declBus(c+831,"count", false,-1, 4,0);
    tracep->declBus(c+928,"top", false,-1, 3,0);
    tracep->declBus(c+929,"bottom", false,-1, 3,0);
    tracep->declBus(c+930,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1216,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1237,"data_width", false,-1, 31,0);
    tracep->declBus(c+1232,"depth", false,-1, 31,0);
    tracep->declBit(c+1120,"clk", false,-1);
    tracep->declBit(c+826,"we", false,-1);
    tracep->declBus(c+928,"a", false,-1, 3,0);
    tracep->declBus(c+929,"dpra", false,-1, 3,0);
    tracep->declBus(c+1111,"di", false,-1, 7,0);
    tracep->declBus(c+1169,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+649+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBit(c+953,"auto_in_psel", false,-1);
    tracep->declBit(c+666,"auto_in_penable", false,-1);
    tracep->declBit(c+948,"auto_in_pwrite", false,-1);
    tracep->declBus(c+954,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+949,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_in_pready", false,-1);
    tracep->declBit(c+1188,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1134,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1136,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1137,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1138,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1139,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1120,"clock", false,-1);
    tracep->declBit(c+1121,"reset", false,-1);
    tracep->declBus(c+1112,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+953,"in_psel", false,-1);
    tracep->declBit(c+666,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+948,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+950,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"in_pready", false,-1);
    tracep->declBus(c+1189,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1188,"in_pslverr", false,-1);
    tracep->declBus(c+1134,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1135,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1136,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1137,"vga_hsync", false,-1);
    tracep->declBit(c+1138,"vga_vsync", false,-1);
    tracep->declBit(c+1139,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+695,"io_sck", false,-1);
    tracep->declBit(c+931,"io_ss", false,-1);
    tracep->declBit(c+1142,"io_mosi", false,-1);
    tracep->declBit(c+1170,"io_miso", false,-1);
    tracep->declBus(c+1171,"count", false,-1, 2,0);
    tracep->declBus(c+1172,"data", false,-1, 7,0);
    tracep->declBus(c+1173,"state", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+695,"sck", false,-1);
    tracep->declBit(c+932,"ss", false,-1);
    tracep->declBit(c+1142,"mosi", false,-1);
    tracep->declBit(c+1174,"miso", false,-1);
    tracep->declBit(c+932,"reset", false,-1);
    tracep->declBus(c+940,"state", false,-1, 2,0);
    tracep->declBus(c+941,"counter", false,-1, 7,0);
    tracep->declBus(c+942,"cmd", false,-1, 7,0);
    tracep->declBus(c+943,"addr", false,-1, 23,0);
    tracep->declBus(c+944,"data", false,-1, 31,0);
    tracep->declBit(c+945,"ren", false,-1);
    tracep->declBus(c+1175,"rdata", false,-1, 31,0);
    tracep->declBus(c+1176,"raddr", false,-1, 31,0);
    tracep->declBus(c+1177,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+695,"clock", false,-1);
    tracep->declBit(c+945,"valid", false,-1);
    tracep->declBus(c+942,"cmd", false,-1, 7,0);
    tracep->declBus(c+1176,"addr", false,-1, 31,0);
    tracep->declBus(c+1175,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+49,"io_sck", false,-1);
    tracep->declBit(c+50,"io_ce_n", false,-1);
    tracep->declBus(c+1144,"io_dio", false,-1, 3,0);
    tracep->declBus(c+933,"state", false,-1, 1,0);
    tracep->declBus(c+934,"cnt", false,-1, 3,0);
    tracep->declBus(c+935,"r_cmd", false,-1, 7,0);
    tracep->declBus(c+936,"r_addr", false,-1, 23,0);
    tracep->declBus(c+937,"data_out", false,-1, 31,0);
    tracep->declBus(c+938,"data_in", false,-1, 31,0);
    tracep->declBit(c+1178,"qpi_reg", false,-1);
    tracep->pushNamePrefix("di_buf ");
    tracep->declBus(c+1216,"width", false,-1, 31,0);
    tracep->declBus(c+1144,"dio", false,-1, 3,0);
    tracep->declBus(c+939,"dout", false,-1, 3,0);
    tracep->declBit(c+1179,"out_en", false,-1);
    tracep->declBus(c+1144,"din", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("psram_rw ");
    tracep->declBus(c+1180,"addr", false,-1, 31,0);
    tracep->declBus(c+1181,"data_in", false,-1, 31,0);
    tracep->declBus(c+1182,"data_out", false,-1, 31,0);
    tracep->declBit(c+1183,"write_en", false,-1);
    tracep->declBit(c+1184,"read_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1145,"clk", false,-1);
    tracep->declBit(c+697,"cke", false,-1);
    tracep->declBit(c+698,"cs", false,-1);
    tracep->declBit(c+699,"ras", false,-1);
    tracep->declBit(c+700,"cas", false,-1);
    tracep->declBit(c+701,"we", false,-1);
    tracep->declBus(c+702,"a", false,-1, 12,0);
    tracep->declBus(c+703,"ba", false,-1, 1,0);
    tracep->declBus(c+704,"dqm", false,-1, 1,0);
    tracep->declBus(c+705,"dq", false,-1, 15,0);
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
    bufp->fullCData(oldp+7,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
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
                                      >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U)))))),2);
    bufp->fullBit(oldp+8,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+9,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+15,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+18,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+29,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+43,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re))));
    bufp->fullBit(oldp+44,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we))));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullIData(oldp+47,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                  << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+48,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))
                               ? 8U : (0xffU & ((IData)(7U) 
                                                + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                   << 1U))))),8);
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_ifu_axi_r_rready_0));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_en));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_we));
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MW__wr));
    bufp->fullBit(oldp+153,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+154,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+169,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+172,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+173,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+174,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                        >> 0x24U)))));
    bufp->fullQData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+220,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+290,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+302,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+306,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+314,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+322,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+326,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+354,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_reg));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_reg));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_reg));
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r),32);
    bufp->fullBit(oldp+419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type))))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg));
    bufp->fullIData(oldp+421,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+425,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+426,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+427,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+430,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+431,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+432,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+433,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+434,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op)
                                : 0U)),5);
    bufp->fullCData(oldp+436,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg));
    bufp->fullIData(oldp+439,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+440,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+441,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+442,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+444,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+445,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+446,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+447,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+450,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+451,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+453,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us))));
    bufp->fullIData(oldp+455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us));
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_alu_op),5);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_il_us));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op),5);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg_1));
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_il_us));
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state));
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc),32);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type),4);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata),32);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp),2);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp),2);
    bufp->fullIData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result),32);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__casez_tmp),32);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid));
    bufp->fullIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullIData(oldp+555,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
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
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg));
    bufp->fullQData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+565,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_4),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_5),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31),32);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rdata),32);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state),3);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__pwdata_reg),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__paddr_reg),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__addr_reg),32);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__penable));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__write));
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+665,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+666,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+667,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+669,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+670,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                             & ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r 
                                        >> 0x1cU)) 
                                & (0x10001000U > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r)))));
    bufp->fullIData(oldp+671,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_5) 
                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_1))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+672,(((1U & ((~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3))) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h184bf46c__0)))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg)),32);
    bufp->fullIData(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg))),4);
    bufp->fullIData(oldp+675,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_5
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_4))
                                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2)
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0)))),32);
    bufp->fullIData(oldp+676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+677,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullCData(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+679,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+681,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullIData(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp)
                                : 0U)),2);
    bufp->fullCData(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp)
                                : 0U)),2);
    bufp->fullIData(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+692,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_19)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))
                                     ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))
                                     : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_18)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_20) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))))))));
    bufp->fullCData(oldp+694,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN))
                                ? 0U : 1U)),3);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+698,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+699,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+700,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+701,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+705,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+707,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+710,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+711,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+715,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+719,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state),2);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+723,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+725,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+758,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+760,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+762,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+763,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+764,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+768,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+770,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+771,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+773,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+777,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+778,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+800,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+801,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+802,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+803,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+804,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+807,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+808,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+809,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+828,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+835,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+854,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+855,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+856,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+857,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+858,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+877,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+878,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+879,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+880,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+881,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+883,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+902,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+919,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+930,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),2);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt),4);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__psram__DOT__r_cmd),8);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__psram__DOT__r_addr),24);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_out),32);
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_in),32);
    bufp->fullCData(oldp+939,((vlSelf->ysyxSoCFull__DOT__psram__DOT__data_out 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+943,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+945,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+954,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+955,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+956,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+991,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+1002,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1003,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1005,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1006,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1007,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1008,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1011,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1014,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1019,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inv_flag));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_ar_arready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_aw_awready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_w_wready));
    bufp->fullIData(oldp+1033,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg
                                 : 0U)),32);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg));
    bufp->fullIData(oldp+1038,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                 ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0)
                                 : 0U)),32);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0),32);
    bufp->fullIData(oldp+1040,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg
                                 : 0U)),32);
    bufp->fullCData(oldp+1041,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                         >> 0xfU))),5);
    bufp->fullIData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+1043,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr),3);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst),32);
    bufp->fullIData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_1),5);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg));
    bufp->fullIData(oldp+1052,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc
                                 : 0U)),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__in_data_dnpc),32);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__wbu2in_reg));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg_REG),32);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg));
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_22)) 
                                 & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))))));
    bufp->fullIData(oldp+1063,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state)) 
                                       | ((0xcU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type)) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_22))))
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc)),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_waddr_1),3);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type),4);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_bresp),2);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp),2);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state));
    bufp->fullIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc),32);
    bufp->fullIData(oldp+1079,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1080,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1086,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1087,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1088,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1089,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1094,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1095,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1096,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr),32);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite));
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata),32);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb),4);
    bufp->fullCData(oldp+1103,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr)),5);
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr)))));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr)))));
    bufp->fullCData(oldp+1106,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr))))))),4);
    bufp->fullBit(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr)))));
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1109,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+1112,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1120,(vlSelf->clock));
    bufp->fullBit(oldp+1121,(vlSelf->reset));
    bufp->fullSData(oldp+1122,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1123,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1124,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1125,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1126,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1127,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1128,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1129,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1130,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1131,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1132,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1133,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1134,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1135,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1136,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1137,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1138,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1139,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1140,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1141,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1143,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_3)
                                         ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_0)) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data))
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data))) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                       | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                            ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                            : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                          >> 0x1fU))))));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din),4);
    bufp->fullBit(oldp+1145,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1146,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1148,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state))
                               ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_8)) 
                                  & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
                                     & ((0x40U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata) 
                                        & (0x10001000U 
                                           == vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr))))
                               : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready)))));
    bufp->fullIData(oldp+1149,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state))
                                 ? ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_8) 
                                           | ((~ (IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)))) 
                                              | ((0x10001000U 
                                                  != vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_paddr) 
                                                 | (0x40U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)))))
                                     ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       >> 8U)) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                      >> 0x18U)))))
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN)
                                     ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata))),32);
    bufp->fullIData(oldp+1150,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_hec054627__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0))));
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg
                                     : 0U) : 2U)),32);
    bufp->fullCData(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                     : 0U) : 3U)),2);
    bufp->fullCData(oldp+1156,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_5)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_1)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                                   : 0U)
                                                  : 3U)
                                              : 0U)))),2);
    bufp->fullCData(oldp+1157,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)
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
    bufp->fullIData(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                 : 0U)),32);
    bufp->fullCData(oldp+1159,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
                                 : 0U)),2);
    bufp->fullBit(oldp+1160,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1163,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1164,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MW__wr)
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1167,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1170,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_3)
                                        ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_0)) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data))
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data))))));
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__count),3);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+1174,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1176,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_reg));
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en));
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_rw__addr),32);
    bufp->fullIData(oldp+1181,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_13)
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__psram__DOT__data_in)),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_rw_data_out),32);
    bufp->fullBit(oldp+1183,(((IData)(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) 
                              & ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))))));
    bufp->fullBit(oldp+1184,(((~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n)) 
                              & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_reg)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_reg) 
                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_7)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_8)))
                                        : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_3)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_6))))))));
    bufp->fullCData(oldp+1185,(1U),3);
    bufp->fullBit(oldp+1186,(0U));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1196,(0U));
    bufp->fullCData(oldp+1197,(0U),4);
    bufp->fullCData(oldp+1198,(0U),8);
    bufp->fullCData(oldp+1199,(0U),3);
    bufp->fullCData(oldp+1200,(0U),2);
    bufp->fullBit(oldp+1201,(1U));
    bufp->fullIData(oldp+1202,(0U),32);
    bufp->fullCData(oldp+1203,(1U),2);
    bufp->fullCData(oldp+1204,(2U),2);
    bufp->fullCData(oldp+1205,(4U),3);
    bufp->fullBit(oldp+1206,(0U));
    bufp->fullBit(oldp+1207,(1U));
    bufp->fullCData(oldp+1208,(0x15U),8);
    bufp->fullCData(oldp+1209,(0xebU),8);
    bufp->fullCData(oldp+1210,(0x38U),8);
    bufp->fullCData(oldp+1211,(0x35U),8);
    bufp->fullIData(oldp+1212,(0x64U),32);
    bufp->fullIData(oldp+1213,(0x18U),32);
    bufp->fullIData(oldp+1214,(9U),32);
    bufp->fullIData(oldp+1215,(2U),32);
    bufp->fullIData(oldp+1216,(4U),32);
    bufp->fullIData(oldp+1217,(0xdU),32);
    bufp->fullIData(oldp+1218,(0x2000U),32);
    bufp->fullIData(oldp+1219,(0x2710U),32);
    bufp->fullIData(oldp+1220,(0x30cU),32);
    bufp->fullCData(oldp+1221,(7U),4);
    bufp->fullCData(oldp+1222,(3U),4);
    bufp->fullCData(oldp+1223,(5U),4);
    bufp->fullCData(oldp+1224,(4U),4);
    bufp->fullCData(oldp+1225,(6U),4);
    bufp->fullCData(oldp+1226,(2U),4);
    bufp->fullCData(oldp+1227,(1U),4);
    bufp->fullSData(oldp+1228,(0x21U),13);
    bufp->fullCData(oldp+1229,(8U),4);
    bufp->fullCData(oldp+1230,(9U),4);
    bufp->fullIData(oldp+1231,(0xaU),32);
    bufp->fullIData(oldp+1232,(0x10U),32);
    bufp->fullIData(oldp+1233,(6U),32);
    bufp->fullIData(oldp+1234,(0x11U),32);
    bufp->fullIData(oldp+1235,(0x30000000U),32);
    bufp->fullIData(oldp+1236,(0x3fffffffU),32);
    bufp->fullIData(oldp+1237,(8U),32);
    bufp->fullIData(oldp+1238,(1U),32);
    bufp->fullCData(oldp+1239,(0xaU),4);
    bufp->fullIData(oldp+1240,(0xbU),32);
    bufp->fullIData(oldp+1241,(5U),32);
    bufp->fullCData(oldp+1242,(2U),3);
    bufp->fullCData(oldp+1243,(3U),3);
    bufp->fullCData(oldp+1244,(5U),3);
}
