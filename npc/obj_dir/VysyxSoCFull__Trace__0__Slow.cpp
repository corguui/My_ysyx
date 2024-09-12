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
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+1073,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1074,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1075,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1076,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1077,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1078,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1079,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1080,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1081,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1082,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1083,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1084,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1085,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1088,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1089,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1090,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1091,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1092,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+1073,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1074,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1075,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1076,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1077,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1078,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1079,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1080,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1081,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1082,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1083,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1084,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1085,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1086,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1087,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1088,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1089,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1090,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1091,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1092,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1113,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1114,"spi_mosi", false,-1);
    tracep->declBit(c+1093,"spi_miso", false,-1);
    tracep->declBit(c+1091,"uart_rx", false,-1);
    tracep->declBit(c+1092,"uart_tx", false,-1);
    tracep->declBit(c+1094,"psram_sck", false,-1);
    tracep->declBit(c+1095,"psram_ce_n", false,-1);
    tracep->declBus(c+961,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1096,"sdram_clk", false,-1);
    tracep->declBit(c+580,"sdram_cke", false,-1);
    tracep->declBit(c+581,"sdram_cs", false,-1);
    tracep->declBit(c+582,"sdram_ras", false,-1);
    tracep->declBit(c+583,"sdram_cas", false,-1);
    tracep->declBit(c+584,"sdram_we", false,-1);
    tracep->declBus(c+585,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+586,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+587,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+588,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1073,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1074,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1075,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1076,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1077,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1078,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1083,"ps2_clk", false,-1);
    tracep->declBit(c+1084,"ps2_data", false,-1);
    tracep->declBus(c+1085,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1086,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1087,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1088,"vga_hsync", false,-1);
    tracep->declBit(c+1089,"vga_vsync", false,-1);
    tracep->declBit(c+1090,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+786,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+787,"in_psel", false,-1);
    tracep->declBit(c+9,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+962,"in_pready", false,-1);
    tracep->declBus(c+963,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+791,"in_pslverr", false,-1);
    tracep->declBus(c+786,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+787,"out_psel", false,-1);
    tracep->declBit(c+9,"out_penable", false,-1);
    tracep->declBus(c+1115,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"out_pwrite", false,-1);
    tracep->declBus(c+789,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+962,"out_pready", false,-1);
    tracep->declBus(c+963,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+791,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+787,"auto_in_psel", false,-1);
    tracep->declBit(c+9,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+786,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_in_pready", false,-1);
    tracep->declBit(c+791,"auto_in_pslverr", false,-1);
    tracep->declBus(c+963,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+792,"auto_out_6_psel", false,-1);
    tracep->declBit(c+514,"auto_out_6_penable", false,-1);
    tracep->declBit(c+788,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+786,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1115,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1116,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+590,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+793,"auto_out_5_psel", false,-1);
    tracep->declBit(c+515,"auto_out_5_penable", false,-1);
    tracep->declBit(c+788,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+794,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1115,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1117,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1118,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1119,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+795,"auto_out_4_psel", false,-1);
    tracep->declBit(c+516,"auto_out_4_penable", false,-1);
    tracep->declBit(c+788,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1121,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1122,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+797,"auto_out_3_psel", false,-1);
    tracep->declBit(c+517,"auto_out_3_penable", false,-1);
    tracep->declBit(c+788,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1124,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1125,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+798,"auto_out_2_psel", false,-1);
    tracep->declBit(c+518,"auto_out_2_penable", false,-1);
    tracep->declBit(c+788,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+786,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1115,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1116,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+10,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+799,"auto_out_1_psel", false,-1);
    tracep->declBit(c+800,"auto_out_1_penable", false,-1);
    tracep->declBit(c+788,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+801,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1116,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+949,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+802,"auto_out_0_psel", false,-1);
    tracep->declBit(c+803,"auto_out_0_penable", false,-1);
    tracep->declBit(c+788,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+794,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1115,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1116,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+11,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+805,"sel_0", false,-1);
    tracep->declBit(c+806,"sel_1", false,-1);
    tracep->declBit(c+807,"sel_2", false,-1);
    tracep->declBit(c+808,"sel_3", false,-1);
    tracep->declBit(c+809,"sel_4", false,-1);
    tracep->declBit(c+810,"sel_5", false,-1);
    tracep->declBit(c+811,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+812,"auto_in_awready", false,-1);
    tracep->declBit(c+813,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+812,"auto_in_wready", false,-1);
    tracep->declBit(c+815,"auto_in_wvalid", false,-1);
    tracep->declBus(c+816,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_in_bready", false,-1);
    tracep->declBit(c+965,"auto_in_bvalid", false,-1);
    tracep->declBus(c+14,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+819,"auto_in_arready", false,-1);
    tracep->declBit(c+820,"auto_in_arvalid", false,-1);
    tracep->declBus(c+15,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+966,"auto_in_rready", false,-1);
    tracep->declBit(c+967,"auto_in_rvalid", false,-1);
    tracep->declBus(c+17,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+543,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+818,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+787,"auto_out_psel", false,-1);
    tracep->declBit(c+9,"auto_out_penable", false,-1);
    tracep->declBit(c+788,"auto_out_pwrite", false,-1);
    tracep->declBus(c+786,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+789,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_out_pready", false,-1);
    tracep->declBit(c+791,"auto_out_pslverr", false,-1);
    tracep->declBus(c+963,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+9,"nodeOut_penable", false,-1);
    tracep->declBus(c+18,"state", false,-1, 1,0);
    tracep->declBit(c+819,"accept_read", false,-1);
    tracep->declBit(c+812,"accept_write", false,-1);
    tracep->declBit(c+19,"is_write_r", false,-1);
    tracep->declBit(c+788,"is_write", false,-1);
    tracep->declBus(c+17,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+14,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+20,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+21,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+22,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+23,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+822,"resp", false,-1, 1,0);
    tracep->declBus(c+24,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+818,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+967,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+25,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+965,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+26,"auto_in_awready", false,-1);
    tracep->declBit(c+823,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1126,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+27,"auto_in_wready", false,-1);
    tracep->declBit(c+825,"auto_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_in_wlast", false,-1);
    tracep->declBit(c+950,"auto_in_bready", false,-1);
    tracep->declBit(c+968,"auto_in_bvalid", false,-1);
    tracep->declBus(c+969,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+544,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_arready", false,-1);
    tracep->declBit(c+828,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1126,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"auto_in_rready", false,-1);
    tracep->declBit(c+971,"auto_in_rvalid", false,-1);
    tracep->declBus(c+972,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+545,"auto_in_rlast", false,-1);
    tracep->declBit(c+975,"auto_out_awready", false,-1);
    tracep->declBit(c+830,"auto_out_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+976,"auto_out_wready", false,-1);
    tracep->declBit(c+831,"auto_out_wvalid", false,-1);
    tracep->declBus(c+816,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+832,"auto_out_wlast", false,-1);
    tracep->declBit(c+977,"auto_out_bready", false,-1);
    tracep->declBit(c+978,"auto_out_bvalid", false,-1);
    tracep->declBus(c+969,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+979,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+980,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+981,"auto_out_arready", false,-1);
    tracep->declBit(c+833,"auto_out_arvalid", false,-1);
    tracep->declBus(c+15,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+30,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+970,"auto_out_rready", false,-1);
    tracep->declBit(c+971,"auto_out_rvalid", false,-1);
    tracep->declBus(c+972,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+546,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+982,"auto_out_rlast", false,-1);
    tracep->declBit(c+831,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+31,"w_idle", false,-1);
    tracep->declBit(c+983,"in_awready", false,-1);
    tracep->declBit(c+32,"busy", false,-1);
    tracep->declBus(c+33,"r_addr", false,-1, 31,0);
    tracep->declBus(c+34,"r_len", false,-1, 7,0);
    tracep->declBus(c+35,"len", false,-1, 7,0);
    tracep->declBus(c+834,"addr", false,-1, 31,0);
    tracep->declBit(c+36,"busy_1", false,-1);
    tracep->declBus(c+37,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+38,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+39,"len_1", false,-1, 7,0);
    tracep->declBus(c+835,"addr_1", false,-1, 31,0);
    tracep->declBit(c+40,"wbeats_latched", false,-1);
    tracep->declBit(c+830,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+836,"wbeats_valid", false,-1);
    tracep->declBus(c+41,"w_counter", false,-1, 8,0);
    tracep->declBus(c+837,"w_todo", false,-1, 8,0);
    tracep->declBit(c+832,"w_last", false,-1);
    tracep->declBit(c+977,"nodeOut_bready", false,-1);
    tracep->declBus(c+42,"error_0", false,-1, 1,0);
    tracep->declBus(c+43,"error_1", false,-1, 1,0);
    tracep->declBus(c+44,"error_2", false,-1, 1,0);
    tracep->declBus(c+45,"error_3", false,-1, 1,0);
    tracep->declBus(c+46,"error_4", false,-1, 1,0);
    tracep->declBus(c+47,"error_5", false,-1, 1,0);
    tracep->declBus(c+48,"error_6", false,-1, 1,0);
    tracep->declBus(c+49,"error_7", false,-1, 1,0);
    tracep->declBus(c+50,"error_8", false,-1, 1,0);
    tracep->declBus(c+51,"error_9", false,-1, 1,0);
    tracep->declBus(c+52,"error_10", false,-1, 1,0);
    tracep->declBus(c+53,"error_11", false,-1, 1,0);
    tracep->declBus(c+54,"error_12", false,-1, 1,0);
    tracep->declBus(c+55,"error_13", false,-1, 1,0);
    tracep->declBus(c+56,"error_14", false,-1, 1,0);
    tracep->declBus(c+57,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+828,"io_enq_valid", false,-1);
    tracep->declBus(c+1126,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+829,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1113,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1127,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1128,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+833,"io_deq_valid", false,-1);
    tracep->declBus(c+15,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+838,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+58,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+59,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+60,"ram", false,-1, 48,0);
    tracep->declBit(c+62,"full", false,-1);
    tracep->declBit(c+833,"io_deq_valid_0", false,-1);
    tracep->declBit(c+985,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+26,"io_enq_ready", false,-1);
    tracep->declBit(c+823,"io_enq_valid", false,-1);
    tracep->declBus(c+1126,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+824,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1113,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1127,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1128,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+839,"io_deq_valid", false,-1);
    tracep->declBus(c+12,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+840,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+63,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+13,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+64,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+65,"ram", false,-1, 48,0);
    tracep->declBit(c+67,"full", false,-1);
    tracep->declBit(c+839,"io_deq_valid_0", false,-1);
    tracep->declBit(c+987,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+27,"io_enq_ready", false,-1);
    tracep->declBit(c+825,"io_enq_valid", false,-1);
    tracep->declBus(c+826,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+827,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1116,"io_enq_bits_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
    tracep->declBit(c+841,"io_deq_valid", false,-1);
    tracep->declBus(c+816,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+817,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+68,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+69,"ram", false,-1, 36,0);
    tracep->declBit(c+71,"full", false,-1);
    tracep->declBit(c+841,"io_deq_valid_0", false,-1);
    tracep->declBit(c+989,"do_enq", false,-1);
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
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+990,"auto_in_awready", false,-1);
    tracep->declBit(c+842,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+951,"auto_in_wready", false,-1);
    tracep->declBit(c+844,"auto_in_wvalid", false,-1);
    tracep->declBus(c+816,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_in_bready", false,-1);
    tracep->declBit(c+72,"auto_in_bvalid", false,-1);
    tracep->declBus(c+73,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+992,"auto_in_arready", false,-1);
    tracep->declBit(c+845,"auto_in_arvalid", false,-1);
    tracep->declBus(c+15,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+846,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+993,"auto_in_rready", false,-1);
    tracep->declBit(c+75,"auto_in_rvalid", false,-1);
    tracep->declBus(c+76,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+992,"nodeIn_arready", false,-1);
    tracep->declBit(c+990,"nodeIn_awready", false,-1);
    tracep->declBit(c+847,"w_sel0", false,-1);
    tracep->declBit(c+72,"w_full", false,-1);
    tracep->declBus(c+73,"w_id", false,-1, 3,0);
    tracep->declBit(c+79,"r_sel1", false,-1);
    tracep->declBit(c+80,"w_sel1", false,-1);
    tracep->declBit(c+75,"r_full", false,-1);
    tracep->declBus(c+76,"r_id", false,-1, 3,0);
    tracep->declBit(c+994,"ren", false,-1);
    tracep->declBit(c+81,"rdata_REG", false,-1);
    tracep->declBus(c+82,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+83,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+84,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+85,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+848,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+994,"R0_en", false,-1);
    tracep->declBit(c+1071,"R0_clk", false,-1);
    tracep->declBus(c+86,"R0_data", false,-1, 31,0);
    tracep->declBus(c+849,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+995,"W0_en", false,-1);
    tracep->declBit(c+1071,"W0_clk", false,-1);
    tracep->declBus(c+816,"W0_data", false,-1, 31,0);
    tracep->declBus(c+817,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+26,"auto_in_awready", false,-1);
    tracep->declBit(c+823,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1126,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+27,"auto_in_wready", false,-1);
    tracep->declBit(c+825,"auto_in_wvalid", false,-1);
    tracep->declBus(c+826,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_in_wlast", false,-1);
    tracep->declBit(c+950,"auto_in_bready", false,-1);
    tracep->declBit(c+968,"auto_in_bvalid", false,-1);
    tracep->declBus(c+969,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+544,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_in_arready", false,-1);
    tracep->declBit(c+828,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1126,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"auto_in_rready", false,-1);
    tracep->declBit(c+971,"auto_in_rvalid", false,-1);
    tracep->declBus(c+972,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+545,"auto_in_rlast", false,-1);
    tracep->declBit(c+26,"auto_out_awready", false,-1);
    tracep->declBit(c+823,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1126,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+27,"auto_out_wready", false,-1);
    tracep->declBit(c+825,"auto_out_wvalid", false,-1);
    tracep->declBus(c+826,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_out_wlast", false,-1);
    tracep->declBit(c+950,"auto_out_bready", false,-1);
    tracep->declBit(c+968,"auto_out_bvalid", false,-1);
    tracep->declBus(c+969,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+544,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_out_arready", false,-1);
    tracep->declBit(c+828,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1126,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"auto_out_rready", false,-1);
    tracep->declBit(c+971,"auto_out_rvalid", false,-1);
    tracep->declBus(c+972,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+545,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+996,"auto_in_awready", false,-1);
    tracep->declBit(c+850,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+976,"auto_in_wready", false,-1);
    tracep->declBit(c+831,"auto_in_wvalid", false,-1);
    tracep->declBus(c+816,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+832,"auto_in_wlast", false,-1);
    tracep->declBit(c+977,"auto_in_bready", false,-1);
    tracep->declBit(c+978,"auto_in_bvalid", false,-1);
    tracep->declBus(c+969,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+979,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+997,"auto_in_arready", false,-1);
    tracep->declBit(c+851,"auto_in_arvalid", false,-1);
    tracep->declBus(c+15,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+970,"auto_in_rready", false,-1);
    tracep->declBit(c+971,"auto_in_rvalid", false,-1);
    tracep->declBus(c+972,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+982,"auto_in_rlast", false,-1);
    tracep->declBit(c+990,"auto_out_2_awready", false,-1);
    tracep->declBit(c+842,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+843,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+951,"auto_out_2_wready", false,-1);
    tracep->declBit(c+844,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+816,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+991,"auto_out_2_bready", false,-1);
    tracep->declBit(c+72,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+73,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+992,"auto_out_2_arready", false,-1);
    tracep->declBit(c+845,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+15,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+846,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+993,"auto_out_2_rready", false,-1);
    tracep->declBit(c+75,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+76,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+77,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+78,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+852,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+853,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+87,"auto_out_1_arready", false,-1);
    tracep->declBit(c+854,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+15,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+547,"auto_out_1_rready", false,-1);
    tracep->declBit(c+88,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+89,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+812,"auto_out_0_awready", false,-1);
    tracep->declBit(c+813,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+812,"auto_out_0_wready", false,-1);
    tracep->declBit(c+815,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+816,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_out_0_bready", false,-1);
    tracep->declBit(c+965,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+14,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+818,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+819,"auto_out_0_arready", false,-1);
    tracep->declBit(c+820,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+15,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+966,"auto_out_0_rready", false,-1);
    tracep->declBit(c+967,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+17,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+543,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+818,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+978,"in_0_bvalid", false,-1);
    tracep->declBit(c+971,"in_0_rvalid", false,-1);
    tracep->declBit(c+996,"nodeIn_awready", false,-1);
    tracep->declBit(c+856,"requestARIO_0_0", false,-1);
    tracep->declBit(c+857,"requestARIO_0_1", false,-1);
    tracep->declBit(c+858,"requestARIO_0_2", false,-1);
    tracep->declBit(c+859,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+860,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+861,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+91,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+92,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+93,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+94,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+95,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+96,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+97,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+98,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+99,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+100,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+101,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+102,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+103,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+104,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+105,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+106,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+107,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+108,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+109,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+110,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+111,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+112,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+113,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+114,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+115,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+116,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+117,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+118,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+119,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+120,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+121,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+122,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+123,"latched", false,-1);
    tracep->declBit(c+862,"in_0_awvalid", false,-1);
    tracep->declBit(c+863,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+864,"in_0_wvalid", false,-1);
    tracep->declBit(c+124,"idle_3", false,-1);
    tracep->declBit(c+998,"anyValid", false,-1);
    tracep->declBus(c+999,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+125,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1000,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1001,"prefixOR_1", false,-1);
    tracep->declBit(c+1002,"winner_3_1", false,-1);
    tracep->declBit(c+1003,"winner_3_2", false,-1);
    tracep->declBit(c+126,"state_3_0", false,-1);
    tracep->declBit(c+127,"state_3_1", false,-1);
    tracep->declBit(c+128,"state_3_2", false,-1);
    tracep->declBit(c+1004,"muxState_3_0", false,-1);
    tracep->declBit(c+1005,"muxState_3_1", false,-1);
    tracep->declBit(c+1006,"muxState_3_2", false,-1);
    tracep->declBit(c+129,"idle_4", false,-1);
    tracep->declBit(c+1007,"anyValid_1", false,-1);
    tracep->declBus(c+1008,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+130,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1009,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1010,"winner_4_0", false,-1);
    tracep->declBit(c+1011,"winner_4_2", false,-1);
    tracep->declBit(c+131,"state_4_0", false,-1);
    tracep->declBit(c+132,"state_4_2", false,-1);
    tracep->declBit(c+1012,"muxState_4_0", false,-1);
    tracep->declBit(c+1013,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+133,"io_enq_ready", false,-1);
    tracep->declBit(c+863,"io_enq_valid", false,-1);
    tracep->declBus(c+865,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1014,"io_deq_ready", false,-1);
    tracep->declBit(c+866,"io_deq_valid", false,-1);
    tracep->declBus(c+867,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+134,"wrap", false,-1);
    tracep->declBit(c+135,"wrap_1", false,-1);
    tracep->declBit(c+136,"maybe_full", false,-1);
    tracep->declBit(c+137,"ptr_match", false,-1);
    tracep->declBit(c+138,"empty", false,-1);
    tracep->declBit(c+139,"full", false,-1);
    tracep->declBit(c+866,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1015,"do_deq", false,-1);
    tracep->declBit(c+1016,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+135,"R0_addr", false,-1);
    tracep->declBit(c+1114,"R0_en", false,-1);
    tracep->declBit(c+1071,"R0_clk", false,-1);
    tracep->declBus(c+140,"R0_data", false,-1, 2,0);
    tracep->declBit(c+134,"W0_addr", false,-1);
    tracep->declBit(c+1016,"W0_en", false,-1);
    tracep->declBit(c+1071,"W0_clk", false,-1);
    tracep->declBus(c+865,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+141+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+975,"auto_in_awready", false,-1);
    tracep->declBit(c+830,"auto_in_awvalid", false,-1);
    tracep->declBus(c+12,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+29,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+976,"auto_in_wready", false,-1);
    tracep->declBit(c+831,"auto_in_wvalid", false,-1);
    tracep->declBus(c+816,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+832,"auto_in_wlast", false,-1);
    tracep->declBit(c+977,"auto_in_bready", false,-1);
    tracep->declBit(c+978,"auto_in_bvalid", false,-1);
    tracep->declBus(c+969,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+979,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+980,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+981,"auto_in_arready", false,-1);
    tracep->declBit(c+833,"auto_in_arvalid", false,-1);
    tracep->declBus(c+15,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+30,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+970,"auto_in_rready", false,-1);
    tracep->declBit(c+971,"auto_in_rvalid", false,-1);
    tracep->declBus(c+972,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+546,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+982,"auto_in_rlast", false,-1);
    tracep->declBit(c+996,"auto_out_awready", false,-1);
    tracep->declBit(c+850,"auto_out_awvalid", false,-1);
    tracep->declBus(c+12,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+814,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+976,"auto_out_wready", false,-1);
    tracep->declBit(c+831,"auto_out_wvalid", false,-1);
    tracep->declBus(c+816,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+817,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+832,"auto_out_wlast", false,-1);
    tracep->declBit(c+977,"auto_out_bready", false,-1);
    tracep->declBit(c+978,"auto_out_bvalid", false,-1);
    tracep->declBus(c+969,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+979,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+997,"auto_out_arready", false,-1);
    tracep->declBit(c+851,"auto_out_arvalid", false,-1);
    tracep->declBus(c+15,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+821,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+16,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+970,"auto_out_rready", false,-1);
    tracep->declBit(c+971,"auto_out_rvalid", false,-1);
    tracep->declBus(c+972,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+982,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+143,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1017,"io_deq_ready", false,-1);
    tracep->declBit(c+144,"io_deq_valid", false,-1);
    tracep->declBit(c+145,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+145,"ram_real_last", false,-1);
    tracep->declBit(c+144,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+146,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1018,"io_deq_ready", false,-1);
    tracep->declBit(c+148,"io_deq_valid", false,-1);
    tracep->declBit(c+149,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+149,"ram_real_last", false,-1);
    tracep->declBit(c+148,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+150,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+151,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+152,"io_deq_valid", false,-1);
    tracep->declBit(c+153,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+153,"ram_real_last", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+154,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+155,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1020,"io_deq_ready", false,-1);
    tracep->declBit(c+156,"io_deq_valid", false,-1);
    tracep->declBit(c+157,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+157,"ram_real_last", false,-1);
    tracep->declBit(c+156,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+158,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+159,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1021,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBit(c+161,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+161,"ram_real_last", false,-1);
    tracep->declBit(c+160,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+162,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1022,"io_deq_ready", false,-1);
    tracep->declBit(c+164,"io_deq_valid", false,-1);
    tracep->declBit(c+165,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+165,"ram_real_last", false,-1);
    tracep->declBit(c+164,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+166,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+167,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+168,"io_deq_valid", false,-1);
    tracep->declBit(c+169,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+169,"ram_real_last", false,-1);
    tracep->declBit(c+168,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+170,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1024,"io_deq_ready", false,-1);
    tracep->declBit(c+172,"io_deq_valid", false,-1);
    tracep->declBit(c+173,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+173,"ram_real_last", false,-1);
    tracep->declBit(c+172,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+174,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+175,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1025,"io_deq_ready", false,-1);
    tracep->declBit(c+176,"io_deq_valid", false,-1);
    tracep->declBit(c+177,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+177,"ram_real_last", false,-1);
    tracep->declBit(c+176,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+178,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+179,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1026,"io_deq_ready", false,-1);
    tracep->declBit(c+180,"io_deq_valid", false,-1);
    tracep->declBit(c+181,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+181,"ram_real_last", false,-1);
    tracep->declBit(c+180,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+182,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+183,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1027,"io_deq_ready", false,-1);
    tracep->declBit(c+184,"io_deq_valid", false,-1);
    tracep->declBit(c+185,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+185,"ram_real_last", false,-1);
    tracep->declBit(c+184,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+186,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+187,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1028,"io_deq_ready", false,-1);
    tracep->declBit(c+188,"io_deq_valid", false,-1);
    tracep->declBit(c+189,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+189,"ram_real_last", false,-1);
    tracep->declBit(c+188,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+190,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+191,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1029,"io_deq_ready", false,-1);
    tracep->declBit(c+192,"io_deq_valid", false,-1);
    tracep->declBit(c+193,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+193,"ram_real_last", false,-1);
    tracep->declBit(c+192,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+194,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+195,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1030,"io_deq_ready", false,-1);
    tracep->declBit(c+196,"io_deq_valid", false,-1);
    tracep->declBit(c+197,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+197,"ram_real_last", false,-1);
    tracep->declBit(c+196,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+198,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+200,"io_deq_valid", false,-1);
    tracep->declBit(c+201,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+201,"ram_real_last", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+202,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1032,"io_deq_ready", false,-1);
    tracep->declBit(c+204,"io_deq_valid", false,-1);
    tracep->declBit(c+205,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+205,"ram_real_last", false,-1);
    tracep->declBit(c+204,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+206,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1034,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+29,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1042,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1047,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+30,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+26,"auto_master_out_awready", false,-1);
    tracep->declBit(c+823,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1126,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+824,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+27,"auto_master_out_wready", false,-1);
    tracep->declBit(c+825,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+826,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+950,"auto_master_out_bready", false,-1);
    tracep->declBit(c+968,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+969,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+544,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+28,"auto_master_out_arready", false,-1);
    tracep->declBit(c+828,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1126,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+829,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1113,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"auto_master_out_rready", false,-1);
    tracep->declBit(c+971,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+972,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+973,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+545,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+1116,"io_interrupt", false,-1);
    tracep->declBit(c+26,"io_master_awready", false,-1);
    tracep->declBit(c+823,"io_master_awvalid", false,-1);
    tracep->declBus(c+824,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1126,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1113,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+27,"io_master_wready", false,-1);
    tracep->declBit(c+825,"io_master_wvalid", false,-1);
    tracep->declBus(c+826,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"io_master_wlast", false,-1);
    tracep->declBit(c+950,"io_master_bready", false,-1);
    tracep->declBit(c+968,"io_master_bvalid", false,-1);
    tracep->declBus(c+544,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+969,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+28,"io_master_arready", false,-1);
    tracep->declBit(c+828,"io_master_arvalid", false,-1);
    tracep->declBus(c+829,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1126,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1113,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+970,"io_master_rready", false,-1);
    tracep->declBit(c+971,"io_master_rvalid", false,-1);
    tracep->declBus(c+974,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+973,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+545,"io_master_rlast", false,-1);
    tracep->declBus(c+972,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1116,"io_slave_awready", false,-1);
    tracep->declBit(c+1116,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1129,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1126,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1113,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1127,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1128,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1116,"io_slave_wready", false,-1);
    tracep->declBit(c+1116,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1129,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1126,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1116,"io_slave_wlast", false,-1);
    tracep->declBit(c+1116,"io_slave_bready", false,-1);
    tracep->declBit(c+1116,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1128,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1126,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1116,"io_slave_arready", false,-1);
    tracep->declBit(c+1116,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1129,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1126,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1113,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1127,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1128,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1116,"io_slave_rready", false,-1);
    tracep->declBit(c+1116,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1128,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1129,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1116,"io_slave_rlast", false,-1);
    tracep->declBus(c+1126,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+519,"uart_flag", false,-1);
    tracep->declBit(c+868,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+829,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+828,"io_axi_ar_arvalid", false,-1);
    tracep->declBit(c+28,"io_axi_ar_arready", false,-1);
    tracep->declBus(c+973,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+974,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+971,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+970,"io_axi_r_rready", false,-1);
    tracep->declBus(c+824,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+823,"io_axi_aw_awvalid", false,-1);
    tracep->declBit(c+26,"io_axi_aw_awready", false,-1);
    tracep->declBus(c+826,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+827,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+825,"io_axi_w_wvalid", false,-1);
    tracep->declBit(c+27,"io_axi_w_wready", false,-1);
    tracep->declBus(c+544,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+968,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+950,"io_axi_b_bready", false,-1);
    tracep->declBus(c+520,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+869,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1099,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1100,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+271,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+1049,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+870,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+272,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+871,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+1050,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1101,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1051,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1052,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+521,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+872,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+522,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+523,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+873,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+1102,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1053,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1054,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+275,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+276,"io_lsu_sta", false,-1);
    tracep->declBit(c+519,"io_uart_flag", false,-1);
    tracep->declBus(c+874,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+875,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+876,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+952,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+953,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1055,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1056,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+954,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+877,"io_ifu_sta", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+277,"io_idu2in_ready", false,-1);
    tracep->declBit(c+277,"io_idu2in_valid", false,-1);
    tracep->declBus(c+278,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+279,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+280,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+281,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+282,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+283,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+284,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+285,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+286,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+287,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+288,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+289,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+290,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+291,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+292,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+293,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+294,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+295,"io_out2lsu_ready", false,-1);
    tracep->declBit(c+295,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+296,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+297,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+298,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+299,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+300,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+301,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+302,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+303,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+304,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+305,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+306,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+307,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+308,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+309,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+310,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+311,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+312,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+295,"valid_reg", false,-1);
    tracep->declBus(c+313,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+314,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+315,"out_data_mem_ren", false,-1);
    tracep->declBit(c+316,"out_data_mem_wen", false,-1);
    tracep->declBus(c+317,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+318,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+319,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+320,"out_data_reg_wen", false,-1);
    tracep->declBus(c+321,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+322,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+323,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+324,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+325,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+326,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+327,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+328,"out_data_il_us", false,-1);
    tracep->declBus(c+329,"out_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+330,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+331,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+332,"in_data_mem_ren", false,-1);
    tracep->declBit(c+333,"in_data_mem_wen", false,-1);
    tracep->declBus(c+334,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+335,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+336,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+337,"in_data_reg_wen", false,-1);
    tracep->declBus(c+338,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+339,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+340,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+341,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+342,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+343,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+344,"in_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+345,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+346,"in_data_il_us", false,-1);
    tracep->declBit(c+347,"state", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+348,"io_src1", false,-1, 31,0);
    tracep->declBus(c+349,"io_src2", false,-1, 31,0);
    tracep->declBus(c+350,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+351,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+878,"io_ifu2in_ready", false,-1);
    tracep->declBit(c+878,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+879,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+880,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+881,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+277,"io_out2exu_ready", false,-1);
    tracep->declBit(c+277,"io_out2exu_valid", false,-1);
    tracep->declBus(c+278,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+279,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+280,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+281,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+282,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+283,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+284,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+285,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+286,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+287,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+288,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+289,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+290,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+291,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+292,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+293,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+294,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+882,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+883,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+884,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+885,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+886,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+524,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+352,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+353,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+868,"io_inv_flag", false,-1);
    tracep->declBus(c+354,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+355,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+887,"in_data_inst", false,-1, 31,0);
    tracep->declBit(c+356,"state", false,-1);
    tracep->declBus(c+888,"csr_imm", false,-1, 31,0);
    tracep->declBit(c+277,"valid_reg", false,-1);
    tracep->declBus(c+357,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+358,"out_data_pc", false,-1, 31,0);
    tracep->declBit(c+359,"out_data_mem_ren", false,-1);
    tracep->declBit(c+360,"out_data_mem_wen", false,-1);
    tracep->declBus(c+361,"out_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+362,"out_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+363,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+364,"out_data_reg_wen", false,-1);
    tracep->declBus(c+365,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+366,"out_data_src2", false,-1, 31,0);
    tracep->declBus(c+367,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+368,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+369,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+370,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+371,"out_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+372,"out_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+373,"out_data_il_us", false,-1);
    tracep->declBus(c+889,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+890,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+891,"casez_tmp_1", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+887,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+878,"io_out2idu_ready", false,-1);
    tracep->declBit(c+878,"io_out2idu_valid", false,-1);
    tracep->declBus(c+879,"io_out2idu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+880,"io_out2idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+881,"io_out2idu_bits_inst", false,-1, 31,0);
    tracep->declBit(c+892,"io_wbu2in_ready", false,-1);
    tracep->declBit(c+892,"io_wbu2in_valid", false,-1);
    tracep->declBus(c+893,"io_wbu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+874,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+875,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+876,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+952,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+953,"io_ifu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1055,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1056,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+954,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+877,"io_ifu_sta", false,-1);
    tracep->declBus(c+880,"io_out2idu_bits_pc_0", false,-1, 31,0);
    tracep->declBus(c+894,"in_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+895,"state", false,-1);
    tracep->declBit(c+878,"valid_reg", false,-1);
    tracep->declBit(c+896,"wbu2in_reg", false,-1);
    tracep->declBus(c+897,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+898,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+899,"pc_reg", false,-1, 31,0);
    tracep->declBit(c+875,"arvalid_reg", false,-1);
    tracep->declBit(c+877,"sta_reg", false,-1);
    tracep->declBus(c+900,"pc_reg_REG", false,-1, 31,0);
    tracep->declBit(c+1056,"io_ifu_axi_r_rready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+295,"io_exu2in_ready", false,-1);
    tracep->declBit(c+295,"io_exu2in_valid", false,-1);
    tracep->declBus(c+296,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+297,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+298,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+299,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+300,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+301,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+302,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+303,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+304,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+305,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+306,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+307,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+308,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+309,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+310,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+311,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+312,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+901,"io_out2wbu_ready", false,-1);
    tracep->declBit(c+901,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+525,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+526,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+527,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+528,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+529,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+530,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+531,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+532,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+533,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+534,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+535,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+536,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+537,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+538,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+870,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+272,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+871,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+1050,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1101,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1051,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1052,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+522,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+523,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+873,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+521,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+872,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+1102,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1053,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1054,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+275,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+276,"io_lsu_sta", false,-1);
    tracep->declBus(c+374,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+375,"in_data_pc", false,-1, 31,0);
    tracep->declBit(c+376,"in_data_mem_ren", false,-1);
    tracep->declBit(c+377,"in_data_mem_wen", false,-1);
    tracep->declBus(c+378,"in_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+379,"in_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+380,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+381,"in_data_reg_wen", false,-1);
    tracep->declBus(c+382,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+383,"in_data_src2", false,-1, 31,0);
    tracep->declBus(c+384,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+385,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+386,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+387,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+388,"in_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+389,"in_data_il_us", false,-1);
    tracep->declBus(c+390,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+391,"state", false,-1);
    tracep->declBit(c+392,"ready_reg", false,-1);
    tracep->declBit(c+393,"ready_reg_1", false,-1);
    tracep->declBit(c+901,"valid_reg", false,-1);
    tracep->declBus(c+394,"out_data_snpc", false,-1, 31,0);
    tracep->declBus(c+395,"out_data_pc", false,-1, 31,0);
    tracep->declBus(c+396,"out_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+397,"out_data_reg_wen", false,-1);
    tracep->declBus(c+398,"out_data_src1", false,-1, 31,0);
    tracep->declBus(c+399,"out_data_csr", false,-1, 31,0);
    tracep->declBus(c+400,"out_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+401,"out_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+402,"out_data_imm", false,-1, 31,0);
    tracep->declBus(c+403,"out_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+404,"out_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+405,"out_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+406,"out_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+407,"out_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+408,"casez_tmp", false,-1, 31,0);
    tracep->declBit(c+409,"exu2in_valid", false,-1);
    tracep->declBus(c+410,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+411,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+272,"mem_ren_reg", false,-1);
    tracep->declBus(c+412,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+413,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+414,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+415,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+273,"awvalid_reg", false,-1);
    tracep->declBit(c+274,"wvalid_reg", false,-1);
    tracep->declBus(c+275,"io_lsu_addr_r", false,-1, 31,0);
    tracep->declBit(c+416,"sta_reg", false,-1);
    tracep->declBit(c+1052,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+1054,"io_lsu_axi_b_bready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBus(c+520,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+869,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1099,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1100,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+271,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+1049,"io_axi_r_rready", false,-1);
    tracep->declBus(c+902,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+417,"mtime", false,-1, 63,0);
    tracep->declBus(c+419,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+271,"rvalid_reg", false,-1);
    tracep->declBus(c+420,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+421,"arvalid_reg", false,-1);
    tracep->declBit(c+1057,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBus(c+539,"io_inData", false,-1, 31,0);
    tracep->declBit(c+540,"io_inValid", false,-1);
    tracep->declBus(c+422,"io_outData", false,-1, 31,0);
    tracep->declBit(c+541,"io_delayDone", false,-1);
    tracep->declBus(c+423,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+424,"counter", false,-1, 4,0);
    tracep->declBus(c+425,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+903,"io_csr_wen_2", false,-1);
    tracep->declBus(c+904,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+882,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+883,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+884,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+885,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+886,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+524,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+352,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+353,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+542,"io_wen", false,-1);
    tracep->declBus(c+905,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+906,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+907,"io_csr_wen_1", false,-1);
    tracep->declBus(c+908,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+909,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+426,"csr_0", false,-1, 31,0);
    tracep->declBus(c+427,"csr_1", false,-1, 31,0);
    tracep->declBus(c+353,"csr_2", false,-1, 31,0);
    tracep->declBus(c+428,"csr_3", false,-1, 31,0);
    tracep->declBus(c+429,"reg_0", false,-1, 31,0);
    tracep->declBus(c+430,"reg_1", false,-1, 31,0);
    tracep->declBus(c+431,"reg_2", false,-1, 31,0);
    tracep->declBus(c+432,"reg_3", false,-1, 31,0);
    tracep->declBus(c+433,"reg_4", false,-1, 31,0);
    tracep->declBus(c+434,"reg_5", false,-1, 31,0);
    tracep->declBus(c+435,"reg_6", false,-1, 31,0);
    tracep->declBus(c+436,"reg_7", false,-1, 31,0);
    tracep->declBus(c+437,"reg_8", false,-1, 31,0);
    tracep->declBus(c+438,"reg_9", false,-1, 31,0);
    tracep->declBus(c+439,"reg_10", false,-1, 31,0);
    tracep->declBus(c+440,"reg_11", false,-1, 31,0);
    tracep->declBus(c+441,"reg_12", false,-1, 31,0);
    tracep->declBus(c+442,"reg_13", false,-1, 31,0);
    tracep->declBus(c+443,"reg_14", false,-1, 31,0);
    tracep->declBus(c+352,"reg_15", false,-1, 31,0);
    tracep->declBus(c+444,"reg_16", false,-1, 31,0);
    tracep->declBus(c+445,"reg_17", false,-1, 31,0);
    tracep->declBus(c+446,"reg_18", false,-1, 31,0);
    tracep->declBus(c+447,"reg_19", false,-1, 31,0);
    tracep->declBus(c+448,"reg_20", false,-1, 31,0);
    tracep->declBus(c+449,"reg_21", false,-1, 31,0);
    tracep->declBus(c+450,"reg_22", false,-1, 31,0);
    tracep->declBus(c+451,"reg_23", false,-1, 31,0);
    tracep->declBus(c+452,"reg_24", false,-1, 31,0);
    tracep->declBus(c+453,"reg_25", false,-1, 31,0);
    tracep->declBus(c+454,"reg_26", false,-1, 31,0);
    tracep->declBus(c+455,"reg_27", false,-1, 31,0);
    tracep->declBus(c+456,"reg_28", false,-1, 31,0);
    tracep->declBus(c+457,"reg_29", false,-1, 31,0);
    tracep->declBus(c+458,"reg_30", false,-1, 31,0);
    tracep->declBus(c+459,"reg_31", false,-1, 31,0);
    tracep->declBus(c+883,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+885,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+524,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1098,"reset", false,-1);
    tracep->declBit(c+901,"io_lsu2in_ready", false,-1);
    tracep->declBit(c+901,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+525,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+526,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+527,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+528,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+529,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+530,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+531,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+532,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+533,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+534,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+535,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+536,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+537,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+538,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+892,"io_out2ifu_ready", false,-1);
    tracep->declBit(c+892,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+893,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+906,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+542,"io_reg_wen", false,-1);
    tracep->declBus(c+905,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+908,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+909,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+907,"io_csr_wen_1", false,-1);
    tracep->declBus(c+904,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+903,"io_csr_wen_2", false,-1);
    tracep->declBus(c+910,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+911,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+460,"in_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+461,"in_data_reg_wen", false,-1);
    tracep->declBus(c+462,"in_data_src1", false,-1, 31,0);
    tracep->declBus(c+912,"in_data_csr", false,-1, 31,0);
    tracep->declBus(c+463,"in_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+464,"in_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+913,"in_data_imm", false,-1, 31,0);
    tracep->declBus(c+914,"in_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+465,"in_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+915,"in_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+916,"in_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+917,"in_data_alu_result", false,-1, 31,0);
    tracep->declBit(c+918,"state", false,-1);
    tracep->declBus(c+919,"out_data_dnpc", false,-1, 31,0);
    tracep->declBit(c+892,"valid_reg", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"io_d", false,-1);
    tracep->declBit(c+466,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"io_d", false,-1);
    tracep->declBit(c+466,"io_q", false,-1);
    tracep->declBit(c+466,"sync_0", false,-1);
    tracep->declBit(c+467,"sync_1", false,-1);
    tracep->declBit(c+468,"sync_2", false,-1);
    tracep->declBit(c+469,"sync_3", false,-1);
    tracep->declBit(c+470,"sync_4", false,-1);
    tracep->declBit(c+471,"sync_5", false,-1);
    tracep->declBit(c+472,"sync_6", false,-1);
    tracep->declBit(c+473,"sync_7", false,-1);
    tracep->declBit(c+474,"sync_8", false,-1);
    tracep->declBit(c+475,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+797,"auto_in_psel", false,-1);
    tracep->declBit(c+517,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"auto_in_pready", false,-1);
    tracep->declBit(c+1124,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1125,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1073,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1074,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1075,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1076,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1077,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1078,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+920,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+797,"in_psel", false,-1);
    tracep->declBit(c+517,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1123,"in_pready", false,-1);
    tracep->declBus(c+1125,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1124,"in_pslverr", false,-1);
    tracep->declBus(c+1073,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1074,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1075,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1076,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1077,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1078,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+795,"auto_in_psel", false,-1);
    tracep->declBit(c+516,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"auto_in_pready", false,-1);
    tracep->declBit(c+1121,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1122,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1083,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1084,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+920,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+795,"in_psel", false,-1);
    tracep->declBit(c+516,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"in_pready", false,-1);
    tracep->declBus(c+1122,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1121,"in_pslverr", false,-1);
    tracep->declBit(c+1083,"ps2_clk", false,-1);
    tracep->declBit(c+1084,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+852,"auto_in_awvalid", false,-1);
    tracep->declBit(c+853,"auto_in_wvalid", false,-1);
    tracep->declBit(c+87,"auto_in_arready", false,-1);
    tracep->declBit(c+854,"auto_in_arvalid", false,-1);
    tracep->declBus(c+15,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+855,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+547,"auto_in_rready", false,-1);
    tracep->declBit(c+88,"auto_in_rvalid", false,-1);
    tracep->declBus(c+89,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+88,"state", false,-1);
    tracep->declBus(c+90,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+89,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+921,"raddr", false,-1, 31,0);
    tracep->declBit(c+922,"ren", false,-1);
    tracep->declBus(c+923,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+798,"auto_in_psel", false,-1);
    tracep->declBit(c+518,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+786,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"auto_in_pready", false,-1);
    tracep->declBit(c+1116,"auto_in_pslverr", false,-1);
    tracep->declBus(c+10,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1094,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1095,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+961,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+786,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+798,"in_psel", false,-1);
    tracep->declBit(c+518,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"in_pready", false,-1);
    tracep->declBus(c+10,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1116,"in_pslverr", false,-1);
    tracep->declBit(c+1094,"qspi_sck", false,-1);
    tracep->declBit(c+1095,"qspi_ce_n", false,-1);
    tracep->declBus(c+961,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+961,"din", false,-1, 3,0);
    tracep->declBus(c+1058,"dout", false,-1, 3,0);
    tracep->declBus(c+1059,"douten", false,-1, 3,0);
    tracep->declBit(c+1103,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1071,"clk_i", false,-1);
    tracep->declBit(c+1072,"rst_i", false,-1);
    tracep->declBus(c+786,"adr_i", false,-1, 31,0);
    tracep->declBus(c+789,"dat_i", false,-1, 31,0);
    tracep->declBus(c+10,"dat_o", false,-1, 31,0);
    tracep->declBus(c+790,"sel_i", false,-1, 3,0);
    tracep->declBit(c+798,"cyc_i", false,-1);
    tracep->declBit(c+798,"stb_i", false,-1);
    tracep->declBit(c+1103,"ack_o", false,-1);
    tracep->declBit(c+788,"we_i", false,-1);
    tracep->declBit(c+1094,"sck", false,-1);
    tracep->declBit(c+1095,"ce_n", false,-1);
    tracep->declBus(c+961,"din", false,-1, 3,0);
    tracep->declBus(c+1058,"dout", false,-1, 3,0);
    tracep->declBus(c+1059,"douten", false,-1, 3,0);
    tracep->declBus(c+1130,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1131,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+591,"mr_sck", false,-1);
    tracep->declBit(c+592,"mr_ce_n", false,-1);
    tracep->declBus(c+961,"mr_din", false,-1, 3,0);
    tracep->declBus(c+593,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+594,"mr_doe", false,-1);
    tracep->declBit(c+595,"mw_sck", false,-1);
    tracep->declBit(c+596,"mw_ce_n", false,-1);
    tracep->declBus(c+961,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1060,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+597,"mw_doe", false,-1);
    tracep->declBit(c+1061,"mr_rd", false,-1);
    tracep->declBit(c+598,"mr_done", false,-1);
    tracep->declBit(c+1062,"mw_wr", false,-1);
    tracep->declBit(c+1063,"mw_done", false,-1);
    tracep->declBit(c+798,"wb_valid", false,-1);
    tracep->declBit(c+924,"wb_we", false,-1);
    tracep->declBit(c+925,"wb_re", false,-1);
    tracep->declBit(c+599,"state", false,-1);
    tracep->declBit(c+1064,"nstate", false,-1);
    tracep->declBus(c+926,"size", false,-1, 2,0);
    tracep->declBus(c+927,"byte0", false,-1, 7,0);
    tracep->declBus(c+928,"byte1", false,-1, 7,0);
    tracep->declBus(c+929,"byte2", false,-1, 7,0);
    tracep->declBus(c+930,"byte3", false,-1, 7,0);
    tracep->declBus(c+931,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1104,"rst_n", false,-1);
    tracep->declBus(c+932,"addr", false,-1, 23,0);
    tracep->declBit(c+1061,"rd", false,-1);
    tracep->declBus(c+1132,"size", false,-1, 2,0);
    tracep->declBit(c+598,"done", false,-1);
    tracep->declBus(c+10,"line", false,-1, 31,0);
    tracep->declBit(c+591,"sck", false,-1);
    tracep->declBit(c+592,"ce_n", false,-1);
    tracep->declBus(c+961,"din", false,-1, 3,0);
    tracep->declBus(c+593,"dout", false,-1, 3,0);
    tracep->declBit(c+594,"douten", false,-1);
    tracep->declBus(c+1130,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1131,"READ", false,-1, 0,0);
    tracep->declBus(c+1133,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+600,"state", false,-1);
    tracep->declBit(c+1065,"nstate", false,-1);
    tracep->declBus(c+601,"counter", false,-1, 7,0);
    tracep->declBus(c+602,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+476+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1134,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+603,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1104,"rst_n", false,-1);
    tracep->declBus(c+933,"addr", false,-1, 23,0);
    tracep->declBus(c+931,"line", false,-1, 31,0);
    tracep->declBus(c+926,"size", false,-1, 2,0);
    tracep->declBit(c+1062,"wr", false,-1);
    tracep->declBit(c+1063,"done", false,-1);
    tracep->declBit(c+595,"sck", false,-1);
    tracep->declBit(c+596,"ce_n", false,-1);
    tracep->declBus(c+961,"din", false,-1, 3,0);
    tracep->declBus(c+1060,"dout", false,-1, 3,0);
    tracep->declBit(c+597,"douten", false,-1);
    tracep->declBus(c+1130,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1131,"WRITE", false,-1, 0,0);
    tracep->declBus(c+934,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+604,"state", false,-1);
    tracep->declBit(c+1066,"nstate", false,-1);
    tracep->declBus(c+605,"counter", false,-1, 7,0);
    tracep->declBus(c+606,"saddr", false,-1, 23,0);
    tracep->declBus(c+1135,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+792,"auto_in_psel", false,-1);
    tracep->declBit(c+514,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+786,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"auto_in_pready", false,-1);
    tracep->declBit(c+1116,"auto_in_pslverr", false,-1);
    tracep->declBus(c+590,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1096,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+580,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+581,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+582,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+583,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+584,"sdram_bundle_we", false,-1);
    tracep->declBus(c+585,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+586,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+587,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+588,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+786,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+792,"in_psel", false,-1);
    tracep->declBit(c+514,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+589,"in_pready", false,-1);
    tracep->declBus(c+590,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1116,"in_pslverr", false,-1);
    tracep->declBit(c+1096,"sdram_clk", false,-1);
    tracep->declBit(c+580,"sdram_cke", false,-1);
    tracep->declBit(c+581,"sdram_cs", false,-1);
    tracep->declBit(c+582,"sdram_ras", false,-1);
    tracep->declBit(c+583,"sdram_cas", false,-1);
    tracep->declBit(c+584,"sdram_we", false,-1);
    tracep->declBus(c+585,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+586,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+587,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+588,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_dout_en", false,-1);
    tracep->declBus(c+608,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+480,"state", false,-1, 1,0);
    tracep->declBit(c+609,"req_accept", false,-1);
    tracep->declBit(c+935,"is_read", false,-1);
    tracep->declBit(c+936,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1071,"clk_i", false,-1);
    tracep->declBit(c+1072,"rst_i", false,-1);
    tracep->declBus(c+937,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+935,"inport_rd_i", false,-1);
    tracep->declBus(c+1113,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+786,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+789,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+588,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+609,"inport_accept_o", false,-1);
    tracep->declBit(c+589,"inport_ack_o", false,-1);
    tracep->declBit(c+1116,"inport_error_o", false,-1);
    tracep->declBus(c+590,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1096,"sdram_clk_o", false,-1);
    tracep->declBit(c+580,"sdram_cke_o", false,-1);
    tracep->declBit(c+581,"sdram_cs_o", false,-1);
    tracep->declBit(c+582,"sdram_ras_o", false,-1);
    tracep->declBit(c+583,"sdram_cas_o", false,-1);
    tracep->declBit(c+584,"sdram_we_o", false,-1);
    tracep->declBus(c+587,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+585,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+586,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+608,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1136,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1137,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1138,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1140,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1141,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1142,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1143,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1144,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1140,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1145,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1146,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1147,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1148,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1149,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1150,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1151,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1126,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1152,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1140,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1126,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1151,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1150,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1146,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1148,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1147,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1149,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1145,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1153,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1154,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1155,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1155,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1156,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1155,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1139,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1157,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+786,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+937,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+935,"ram_rd_w", false,-1);
    tracep->declBit(c+609,"ram_accept_w", false,-1);
    tracep->declBus(c+789,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+590,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+589,"ram_ack_w", false,-1);
    tracep->declBit(c+938,"ram_req_w", false,-1);
    tracep->declBus(c+610,"command_q", false,-1, 3,0);
    tracep->declBus(c+585,"addr_q", false,-1, 12,0);
    tracep->declBus(c+608,"data_q", false,-1, 15,0);
    tracep->declBit(c+611,"data_rd_en_q", false,-1);
    tracep->declBus(c+587,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+580,"cke_q", false,-1);
    tracep->declBus(c+586,"bank_q", false,-1, 1,0);
    tracep->declBus(c+612,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+613,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+588,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+614,"refresh_q", false,-1);
    tracep->declBus(c+615,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+616+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+620,"state_q", false,-1, 3,0);
    tracep->declBus(c+1067,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1068,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+621,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+622,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+939,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+940,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+941,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1140,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+623,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1069,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1158,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+624,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+625,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+626,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+627,"idx", false,-1, 31,0);
    tracep->declBus(c+628,"rd_q", false,-1, 3,0);
    tracep->declBit(c+589,"ack_q", false,-1);
    tracep->declArray(c+629,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+802,"auto_in_psel", false,-1);
    tracep->declBit(c+803,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+794,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"auto_in_pready", false,-1);
    tracep->declBit(c+1116,"auto_in_pslverr", false,-1);
    tracep->declBus(c+11,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1113,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1114,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1093,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1159,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1160,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1161,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+942,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+802,"in_psel", false,-1);
    tracep->declBit(c+803,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+804,"in_pready", false,-1);
    tracep->declBus(c+11,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1116,"in_pslverr", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1113,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1114,"spi_mosi", false,-1);
    tracep->declBit(c+1093,"spi_miso", false,-1);
    tracep->declBit(c+1116,"spi_irq_out", false,-1);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    tracep->declBus(c+1113,"invalid_cmd", false,-1, 7,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+943,"valid", false,-1);
    tracep->declBus(c+944,"cmd", false,-1, 7,0);
    tracep->declBus(c+945,"addr", false,-1, 31,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+799,"auto_in_psel", false,-1);
    tracep->declBit(c+800,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+801,"auto_in_pready", false,-1);
    tracep->declBit(c+1116,"auto_in_pslverr", false,-1);
    tracep->declBus(c+949,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1091,"uart_rx", false,-1);
    tracep->declBit(c+1092,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+799,"in_psel", false,-1);
    tracep->declBit(c+800,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+801,"in_pready", false,-1);
    tracep->declBit(c+1116,"in_pslverr", false,-1);
    tracep->declBus(c+920,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+949,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1091,"uart_rx", false,-1);
    tracep->declBit(c+1092,"uart_tx", false,-1);
    tracep->declBit(c+632,"rtsn", false,-1);
    tracep->declBit(c+1116,"ctsn", false,-1);
    tracep->declBit(c+633,"dtr_pad_o", false,-1);
    tracep->declBit(c+1116,"dsr_pad_i", false,-1);
    tracep->declBit(c+1116,"ri_pad_i", false,-1);
    tracep->declBit(c+1116,"dcd_pad_i", false,-1);
    tracep->declBit(c+634,"interrupt", false,-1);
    tracep->declBit(c+1105,"reg_we", false,-1);
    tracep->declBit(c+1106,"reg_re", false,-1);
    tracep->declBus(c+946,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+947,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+481,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1070,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+635,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1072,"wb_rst_i", false,-1);
    tracep->declBus(c+946,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+948,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1070,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1105,"wb_we_i", false,-1);
    tracep->declBit(c+1106,"wb_re_i", false,-1);
    tracep->declBit(c+1092,"stx_pad_o", false,-1);
    tracep->declBit(c+1091,"srx_pad_i", false,-1);
    tracep->declBus(c+1153,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+635,"rts_pad_o", false,-1);
    tracep->declBit(c+633,"dtr_pad_o", false,-1);
    tracep->declBit(c+634,"int_o", false,-1);
    tracep->declBit(c+636,"enable", false,-1);
    tracep->declBit(c+637,"srx_pad", false,-1);
    tracep->declBus(c+638,"ier", false,-1, 3,0);
    tracep->declBus(c+639,"iir", false,-1, 3,0);
    tracep->declBus(c+640,"fcr", false,-1, 1,0);
    tracep->declBus(c+641,"mcr", false,-1, 4,0);
    tracep->declBus(c+642,"lcr", false,-1, 7,0);
    tracep->declBus(c+643,"msr", false,-1, 7,0);
    tracep->declBus(c+644,"dl", false,-1, 15,0);
    tracep->declBus(c+645,"scratch", false,-1, 7,0);
    tracep->declBit(c+646,"start_dlc", false,-1);
    tracep->declBit(c+647,"lsr_mask_d", false,-1);
    tracep->declBit(c+648,"msi_reset", false,-1);
    tracep->declBus(c+649,"dlc", false,-1, 15,0);
    tracep->declBus(c+650,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+651,"rx_reset", false,-1);
    tracep->declBit(c+652,"tx_reset", false,-1);
    tracep->declBit(c+653,"dlab", false,-1);
    tracep->declBit(c+1114,"cts_pad_i", false,-1);
    tracep->declBit(c+1116,"dsr_pad_i", false,-1);
    tracep->declBit(c+1116,"ri_pad_i", false,-1);
    tracep->declBit(c+1116,"dcd_pad_i", false,-1);
    tracep->declBit(c+654,"loopback", false,-1);
    tracep->declBit(c+1116,"cts", false,-1);
    tracep->declBit(c+1114,"dsr", false,-1);
    tracep->declBit(c+1114,"ri", false,-1);
    tracep->declBit(c+1114,"dcd", false,-1);
    tracep->declBit(c+655,"cts_c", false,-1);
    tracep->declBit(c+656,"dsr_c", false,-1);
    tracep->declBit(c+657,"ri_c", false,-1);
    tracep->declBit(c+658,"dcd_c", false,-1);
    tracep->declBus(c+659,"lsr", false,-1, 7,0);
    tracep->declBit(c+660,"lsr0", false,-1);
    tracep->declBit(c+661,"lsr1", false,-1);
    tracep->declBit(c+662,"lsr2", false,-1);
    tracep->declBit(c+663,"lsr3", false,-1);
    tracep->declBit(c+664,"lsr4", false,-1);
    tracep->declBit(c+665,"lsr5", false,-1);
    tracep->declBit(c+666,"lsr6", false,-1);
    tracep->declBit(c+667,"lsr7", false,-1);
    tracep->declBit(c+668,"lsr0r", false,-1);
    tracep->declBit(c+669,"lsr1r", false,-1);
    tracep->declBit(c+670,"lsr2r", false,-1);
    tracep->declBit(c+671,"lsr3r", false,-1);
    tracep->declBit(c+672,"lsr4r", false,-1);
    tracep->declBit(c+673,"lsr5r", false,-1);
    tracep->declBit(c+674,"lsr6r", false,-1);
    tracep->declBit(c+675,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+676,"rls_int", false,-1);
    tracep->declBit(c+677,"rda_int", false,-1);
    tracep->declBit(c+678,"ti_int", false,-1);
    tracep->declBit(c+679,"thre_int", false,-1);
    tracep->declBit(c+680,"ms_int", false,-1);
    tracep->declBit(c+681,"tf_push", false,-1);
    tracep->declBit(c+682,"rf_pop", false,-1);
    tracep->declBus(c+1107,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+683,"rf_error_bit", false,-1);
    tracep->declBit(c+661,"rf_overrun", false,-1);
    tracep->declBit(c+684,"rf_push_pulse", false,-1);
    tracep->declBus(c+685,"rf_count", false,-1, 4,0);
    tracep->declBus(c+686,"tf_count", false,-1, 4,0);
    tracep->declBus(c+687,"tstate", false,-1, 2,0);
    tracep->declBus(c+688,"rstate", false,-1, 3,0);
    tracep->declBus(c+689,"counter_t", false,-1, 9,0);
    tracep->declBit(c+690,"thre_set_en", false,-1);
    tracep->declBus(c+691,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+692,"block_value", false,-1, 7,0);
    tracep->declBit(c+693,"serial_out", false,-1);
    tracep->declBit(c+694,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+695,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+696,"lsr0_d", false,-1);
    tracep->declBit(c+697,"lsr1_d", false,-1);
    tracep->declBit(c+698,"lsr2_d", false,-1);
    tracep->declBit(c+699,"lsr3_d", false,-1);
    tracep->declBit(c+700,"lsr4_d", false,-1);
    tracep->declBit(c+701,"lsr5_d", false,-1);
    tracep->declBit(c+702,"lsr6_d", false,-1);
    tracep->declBit(c+703,"lsr7_d", false,-1);
    tracep->declBit(c+704,"rls_int_d", false,-1);
    tracep->declBit(c+705,"thre_int_d", false,-1);
    tracep->declBit(c+706,"ms_int_d", false,-1);
    tracep->declBit(c+707,"ti_int_d", false,-1);
    tracep->declBit(c+708,"rda_int_d", false,-1);
    tracep->declBit(c+709,"rls_int_rise", false,-1);
    tracep->declBit(c+710,"thre_int_rise", false,-1);
    tracep->declBit(c+711,"ms_int_rise", false,-1);
    tracep->declBit(c+712,"ti_int_rise", false,-1);
    tracep->declBit(c+713,"rda_int_rise", false,-1);
    tracep->declBit(c+714,"rls_int_pnd", false,-1);
    tracep->declBit(c+715,"rda_int_pnd", false,-1);
    tracep->declBit(c+716,"thre_int_pnd", false,-1);
    tracep->declBit(c+717,"ms_int_pnd", false,-1);
    tracep->declBit(c+718,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1162,"Tp", false,-1, 31,0);
    tracep->declBus(c+1162,"width", false,-1, 31,0);
    tracep->declBus(c+1131,"init_value", false,-1, 0,0);
    tracep->declBit(c+1072,"rst_i", false,-1);
    tracep->declBit(c+1071,"clk_i", false,-1);
    tracep->declBit(c+1116,"stage1_rst_i", false,-1);
    tracep->declBit(c+1114,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1091,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+637,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+719,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1072,"wb_rst_i", false,-1);
    tracep->declBus(c+642,"lcr", false,-1, 7,0);
    tracep->declBit(c+682,"rf_pop", false,-1);
    tracep->declBit(c+694,"srx_pad_i", false,-1);
    tracep->declBit(c+636,"enable", false,-1);
    tracep->declBit(c+651,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+689,"counter_t", false,-1, 9,0);
    tracep->declBus(c+685,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1107,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+661,"rf_overrun", false,-1);
    tracep->declBit(c+683,"rf_error_bit", false,-1);
    tracep->declBus(c+688,"rstate", false,-1, 3,0);
    tracep->declBit(c+684,"rf_push_pulse", false,-1);
    tracep->declBus(c+720,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+721,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+722,"rshift", false,-1, 7,0);
    tracep->declBit(c+723,"rparity", false,-1);
    tracep->declBit(c+724,"rparity_error", false,-1);
    tracep->declBit(c+725,"rframing_error", false,-1);
    tracep->declBit(c+726,"rbit_in", false,-1);
    tracep->declBit(c+727,"rparity_xor", false,-1);
    tracep->declBus(c+728,"counter_b", false,-1, 7,0);
    tracep->declBit(c+729,"rf_push_q", false,-1);
    tracep->declBus(c+730,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+731,"rf_push", false,-1);
    tracep->declBit(c+732,"break_error", false,-1);
    tracep->declBit(c+733,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+734,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+735,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+736,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1126,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1151,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1150,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1146,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1148,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1147,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1149,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1145,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1153,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1154,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1163,"sr_push", false,-1, 3,0);
    tracep->declBus(c+737,"toc_value", false,-1, 9,0);
    tracep->declBus(c+738,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1164,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1156,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1140,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1165,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1072,"wb_rst_i", false,-1);
    tracep->declBit(c+684,"push", false,-1);
    tracep->declBit(c+682,"pop", false,-1);
    tracep->declBus(c+730,"data_in", false,-1, 10,0);
    tracep->declBit(c+651,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1107,"data_out", false,-1, 10,0);
    tracep->declBit(c+661,"overrun", false,-1);
    tracep->declBus(c+685,"count", false,-1, 4,0);
    tracep->declBit(c+683,"error_bit", false,-1);
    tracep->declBus(c+1108,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+739+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+755,"top", false,-1, 3,0);
    tracep->declBus(c+756,"bottom", false,-1, 3,0);
    tracep->declBus(c+757,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+758,"word0", false,-1, 2,0);
    tracep->declBus(c+759,"word1", false,-1, 2,0);
    tracep->declBus(c+760,"word2", false,-1, 2,0);
    tracep->declBus(c+761,"word3", false,-1, 2,0);
    tracep->declBus(c+762,"word4", false,-1, 2,0);
    tracep->declBus(c+763,"word5", false,-1, 2,0);
    tracep->declBus(c+764,"word6", false,-1, 2,0);
    tracep->declBus(c+765,"word7", false,-1, 2,0);
    tracep->declBus(c+766,"word8", false,-1, 2,0);
    tracep->declBus(c+767,"word9", false,-1, 2,0);
    tracep->declBus(c+768,"word10", false,-1, 2,0);
    tracep->declBus(c+769,"word11", false,-1, 2,0);
    tracep->declBus(c+770,"word12", false,-1, 2,0);
    tracep->declBus(c+771,"word13", false,-1, 2,0);
    tracep->declBus(c+772,"word14", false,-1, 2,0);
    tracep->declBus(c+773,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1140,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1161,"data_width", false,-1, 31,0);
    tracep->declBus(c+1156,"depth", false,-1, 31,0);
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+684,"we", false,-1);
    tracep->declBus(c+755,"a", false,-1, 3,0);
    tracep->declBus(c+756,"dpra", false,-1, 3,0);
    tracep->declBus(c+774,"di", false,-1, 7,0);
    tracep->declBus(c+1108,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+482+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1072,"wb_rst_i", false,-1);
    tracep->declBus(c+642,"lcr", false,-1, 7,0);
    tracep->declBit(c+681,"tf_push", false,-1);
    tracep->declBus(c+948,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+636,"enable", false,-1);
    tracep->declBit(c+652,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+693,"stx_pad_o", false,-1);
    tracep->declBus(c+687,"tstate", false,-1, 2,0);
    tracep->declBus(c+686,"tf_count", false,-1, 4,0);
    tracep->declBus(c+775,"counter", false,-1, 4,0);
    tracep->declBus(c+776,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+777,"shift_out", false,-1, 6,0);
    tracep->declBit(c+778,"stx_o_tmp", false,-1);
    tracep->declBit(c+779,"parity_xor", false,-1);
    tracep->declBit(c+780,"tf_pop", false,-1);
    tracep->declBit(c+781,"bit_out", false,-1);
    tracep->declBus(c+948,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1109,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+782,"tf_overrun", false,-1);
    tracep->declBus(c+1127,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1115,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1166,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1167,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1132,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1168,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1161,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1156,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1140,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1165,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+1072,"wb_rst_i", false,-1);
    tracep->declBit(c+681,"push", false,-1);
    tracep->declBit(c+780,"pop", false,-1);
    tracep->declBus(c+948,"data_in", false,-1, 7,0);
    tracep->declBit(c+652,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1109,"data_out", false,-1, 7,0);
    tracep->declBit(c+782,"overrun", false,-1);
    tracep->declBus(c+686,"count", false,-1, 4,0);
    tracep->declBus(c+783,"top", false,-1, 3,0);
    tracep->declBus(c+784,"bottom", false,-1, 3,0);
    tracep->declBus(c+785,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1140,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1161,"data_width", false,-1, 31,0);
    tracep->declBus(c+1156,"depth", false,-1, 31,0);
    tracep->declBit(c+1071,"clk", false,-1);
    tracep->declBit(c+681,"we", false,-1);
    tracep->declBus(c+783,"a", false,-1, 3,0);
    tracep->declBus(c+784,"dpra", false,-1, 3,0);
    tracep->declBus(c+948,"di", false,-1, 7,0);
    tracep->declBus(c+1109,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+498+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBit(c+793,"auto_in_psel", false,-1);
    tracep->declBit(c+515,"auto_in_penable", false,-1);
    tracep->declBit(c+788,"auto_in_pwrite", false,-1);
    tracep->declBus(c+794,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1115,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+789,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1117,"auto_in_pready", false,-1);
    tracep->declBit(c+1118,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1119,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1085,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1086,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1087,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1088,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1089,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1090,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1071,"clock", false,-1);
    tracep->declBit(c+1072,"reset", false,-1);
    tracep->declBus(c+942,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+793,"in_psel", false,-1);
    tracep->declBit(c+515,"in_penable", false,-1);
    tracep->declBus(c+1115,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+788,"in_pwrite", false,-1);
    tracep->declBus(c+789,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+790,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1117,"in_pready", false,-1);
    tracep->declBus(c+1119,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1118,"in_pslverr", false,-1);
    tracep->declBus(c+1085,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1086,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1087,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1088,"vga_hsync", false,-1);
    tracep->declBit(c+1089,"vga_vsync", false,-1);
    tracep->declBit(c+1090,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+1116,"ss", false,-1);
    tracep->declBit(c+1114,"mosi", false,-1);
    tracep->declBit(c+1114,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ss", false,-1);
    tracep->declBit(c+1114,"mosi", false,-1);
    tracep->declBit(c+1093,"miso", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+955,"state", false,-1, 2,0);
    tracep->declBus(c+956,"counter", false,-1, 7,0);
    tracep->declBus(c+957,"cmd", false,-1, 7,0);
    tracep->declBus(c+958,"addr", false,-1, 23,0);
    tracep->declBus(c+1110,"data", false,-1, 31,0);
    tracep->declBit(c+959,"ren", false,-1);
    tracep->declBus(c+1111,"rdata", false,-1, 31,0);
    tracep->declBus(c+960,"raddr", false,-1, 31,0);
    tracep->declBus(c+1112,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+959,"valid", false,-1);
    tracep->declBus(c+957,"cmd", false,-1, 7,0);
    tracep->declBus(c+960,"addr", false,-1, 31,0);
    tracep->declBus(c+1111,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1094,"sck", false,-1);
    tracep->declBit(c+1095,"ce_n", false,-1);
    tracep->declBus(c+961,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1096,"clk", false,-1);
    tracep->declBit(c+580,"cke", false,-1);
    tracep->declBit(c+581,"cs", false,-1);
    tracep->declBit(c+582,"ras", false,-1);
    tracep->declBit(c+583,"cas", false,-1);
    tracep->declBit(c+584,"we", false,-1);
    tracep->declBus(c+585,"a", false,-1, 12,0);
    tracep->declBus(c+586,"ba", false,-1, 1,0);
    tracep->declBus(c+587,"dqm", false,-1, 1,0);
    tracep->declBus(c+588,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+10,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+29,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+30,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+31,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                            & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                       >> 0x24U)))));
    bufp->fullQData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+77,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+78,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                               ? 0U : 3U)),2);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+87,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+151,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+183,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_reg));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__awvalid_reg));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wvalid_reg));
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r),32);
    bufp->fullBit(oldp+276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type))))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg));
    bufp->fullIData(oldp+278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op)
                                : 0U)),5);
    bufp->fullCData(oldp+293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us))));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg));
    bufp->fullIData(oldp+296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullBit(oldp+298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren))));
    bufp->fullBit(oldp+299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen))));
    bufp->fullIData(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask
                                : 0U)),32);
    bufp->fullIData(oldp+301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask
                                : 0U)),32);
    bufp->fullCData(oldp+302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+305,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2
                                : 0U)),32);
    bufp->fullIData(oldp+306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+307,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullBit(oldp+311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us))));
    bufp->fullIData(oldp+312,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_il_us));
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__out_data_alu_result),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_alu_op),5);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__in_data_il_us));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state));
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_pc),32);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_ren));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mem_wen));
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_rmask),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_m_wmask),32);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_src2),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_alu_op),5);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_inst_type),4);
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__out_data_il_us));
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_ren));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mem_wen));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_rmask),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_m_wmask),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_src2),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type),4);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_il_us));
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg_1));
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc),32);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr),5);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm),32);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type),4);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata),32);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp),2);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__casez_tmp),32);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid));
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullIData(oldp+412,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_alu_result))
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
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg));
    bufp->fullQData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+422,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31),32);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_waddr),5);
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen));
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_src1),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr_a5),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mstatus),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rdata),32);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                             & ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r 
                                        >> 0x1cU)) 
                                & (0x10001000U > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_addr_r)))));
    bufp->fullIData(oldp+520,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_5) 
                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_1))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+521,(((1U & ((~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__in_data_inst_type)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3))) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h184bf46c__0)))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg)),32);
    bufp->fullIData(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_5)
                                ? 0U : (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg))),4);
    bufp->fullIData(oldp+524,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_snpc
                                : 0U)),32);
    bufp->fullIData(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_pc
                                : 0U)),32);
    bufp->fullCData(oldp+527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_waddr)
                                : 0U)),5);
    bufp->fullBit(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_reg_wen))));
    bufp->fullIData(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_src1
                                : 0U)),32);
    bufp->fullIData(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr
                                : 0U)),32);
    bufp->fullIData(oldp+531,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_csr_a5
                                : 0U)),32);
    bufp->fullIData(oldp+532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mstatus
                                : 0U)),32);
    bufp->fullIData(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_imm
                                : 0U)),32);
    bufp->fullCData(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_inst_type)
                                : 0U)),4);
    bufp->fullIData(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_bresp)
                                : 0U)),2);
    bufp->fullCData(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_mem_rresp)
                                : 0U)),2);
    bufp->fullIData(oldp+538,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__out_data_alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+539,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+540,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+541,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullBit(oldp+542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_15)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))
                                     ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))
                                     : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_14)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_16) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_reg_wen))))))));
    bufp->fullIData(oldp+543,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+544,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+545,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+546,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+555,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+573,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+579,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+582,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+583,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+584,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+588,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+590,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
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
    bufp->fullBit(oldp+632,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+633,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+653,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+654,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+655,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+656,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+657,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+658,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+659,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+663,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+664,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+683,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+690,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+709,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+710,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+711,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+712,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+713,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+732,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+733,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+734,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+735,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+736,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+738,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+757,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+774,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+785,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+792,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+793,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+794,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+795,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+796,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+797,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel)))));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+822,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+832,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+843,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+844,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+845,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+846,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+847,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+848,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+849,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+852,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+853,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+854,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+855,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+860,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inv_flag));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_ar_arready));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_aw_awready));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_w_wready));
    bufp->fullIData(oldp+874,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg));
    bufp->fullIData(oldp+879,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0)
                                : 0U)),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out2idu_bits_pc_0),32);
    bufp->fullIData(oldp+881,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg
                                : 0U)),32);
    bufp->fullCData(oldp+882,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+884,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst),32);
    bufp->fullIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_1),5);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg));
    bufp->fullIData(oldp+893,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__valid_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc
                                : 0U)),32);
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__in_data_dnpc),32);
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__state));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__wbu2in_reg));
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg),32);
    bufp->fullIData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg_REG),32);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__valid_reg));
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_18)) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type))))));
    bufp->fullIData(oldp+904,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state)) 
                                      | ((0xcU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_18))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc)),32);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_pc),32);
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_csr),32);
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_imm),32);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_inst_type),4);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_bresp),2);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_mem_rresp),2);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__in_data_alu_result),32);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__state));
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__out_data_dnpc),32);
    bufp->fullIData(oldp+920,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+921,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+929,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+930,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+931,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+932,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+933,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+934,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+939,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+940,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+941,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+942,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+943,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel))));
    bufp->fullCData(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? 0U : 3U)),8);
    bufp->fullIData(oldp+945,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+946,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_hf03e42f1__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0))));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : 0U)),32);
    bufp->fullCData(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
                                : 0U)),2);
    bufp->fullBit(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullBit(oldp+959,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+960,((1U | (0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                  << 1U)))),32);
    bufp->fullCData(oldp+961,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1017,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1018,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1019,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1020,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1021,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1023,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1024,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1025,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1026,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1027,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1028,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1029,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1031,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1033,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1035,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1036,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1037,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1038,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1039,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1040,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1041,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1042,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1045,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1048,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_ifu_axi_r_rready_0));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_en));
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1071,(vlSelf->clock));
    bufp->fullBit(oldp+1072,(vlSelf->reset));
    bufp->fullSData(oldp+1073,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1074,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1075,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1076,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1077,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1078,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1079,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1080,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1081,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1082,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1083,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1084,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1085,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1086,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1087,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1088,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1089,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1090,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1091,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1092,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1093,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))))
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1096,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1097,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1099,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg
                                     : 0U) : 2U)),32);
    bufp->fullCData(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                     : 0U) : 3U)),2);
    bufp->fullCData(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_5)
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
    bufp->fullCData(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)
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
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1104,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1107,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1112,(((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1113,(0U),8);
    bufp->fullBit(oldp+1114,(1U));
    bufp->fullCData(oldp+1115,(1U),3);
    bufp->fullBit(oldp+1116,(0U));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1126,(0U),4);
    bufp->fullCData(oldp+1127,(0U),3);
    bufp->fullCData(oldp+1128,(0U),2);
    bufp->fullIData(oldp+1129,(0U),32);
    bufp->fullBit(oldp+1130,(0U));
    bufp->fullBit(oldp+1131,(1U));
    bufp->fullCData(oldp+1132,(4U),3);
    bufp->fullCData(oldp+1133,(0x1bU),8);
    bufp->fullCData(oldp+1134,(0xebU),8);
    bufp->fullCData(oldp+1135,(0x38U),8);
    bufp->fullIData(oldp+1136,(0x64U),32);
    bufp->fullIData(oldp+1137,(0x18U),32);
    bufp->fullIData(oldp+1138,(9U),32);
    bufp->fullIData(oldp+1139,(2U),32);
    bufp->fullIData(oldp+1140,(4U),32);
    bufp->fullIData(oldp+1141,(0xdU),32);
    bufp->fullIData(oldp+1142,(0x2000U),32);
    bufp->fullIData(oldp+1143,(0x2710U),32);
    bufp->fullIData(oldp+1144,(0x30cU),32);
    bufp->fullCData(oldp+1145,(7U),4);
    bufp->fullCData(oldp+1146,(3U),4);
    bufp->fullCData(oldp+1147,(5U),4);
    bufp->fullCData(oldp+1148,(4U),4);
    bufp->fullCData(oldp+1149,(6U),4);
    bufp->fullCData(oldp+1150,(2U),4);
    bufp->fullCData(oldp+1151,(1U),4);
    bufp->fullSData(oldp+1152,(0x21U),13);
    bufp->fullCData(oldp+1153,(8U),4);
    bufp->fullCData(oldp+1154,(9U),4);
    bufp->fullIData(oldp+1155,(0xaU),32);
    bufp->fullIData(oldp+1156,(0x10U),32);
    bufp->fullIData(oldp+1157,(6U),32);
    bufp->fullIData(oldp+1158,(0x11U),32);
    bufp->fullIData(oldp+1159,(0x30000000U),32);
    bufp->fullIData(oldp+1160,(0x3fffffffU),32);
    bufp->fullIData(oldp+1161,(8U),32);
    bufp->fullIData(oldp+1162,(1U),32);
    bufp->fullCData(oldp+1163,(0xaU),4);
    bufp->fullIData(oldp+1164,(0xbU),32);
    bufp->fullIData(oldp+1165,(5U),32);
    bufp->fullCData(oldp+1166,(2U),3);
    bufp->fullCData(oldp+1167,(3U),3);
    bufp->fullCData(oldp+1168,(5U),3);
}
