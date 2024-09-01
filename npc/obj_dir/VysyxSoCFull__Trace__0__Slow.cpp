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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+1027,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1028,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1029,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1030,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1031,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1032,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1033,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1034,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1035,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1036,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1037,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1038,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1039,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1040,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1041,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1042,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1043,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1044,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1045,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1046,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+1027,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1028,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1029,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1030,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1031,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1032,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1033,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1034,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1035,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1036,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1037,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1038,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1039,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1040,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1041,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1042,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1043,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1044,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1045,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1046,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+526,"spi_sck", false,-1);
    tracep->declBus(c+527,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1047,"spi_mosi", false,-1);
    tracep->declBit(c+1048,"spi_miso", false,-1);
    tracep->declBit(c+1045,"uart_rx", false,-1);
    tracep->declBit(c+1046,"uart_tx", false,-1);
    tracep->declBit(c+1049,"psram_sck", false,-1);
    tracep->declBit(c+1050,"psram_ce_n", false,-1);
    tracep->declBus(c+916,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1051,"sdram_clk", false,-1);
    tracep->declBit(c+528,"sdram_cke", false,-1);
    tracep->declBit(c+529,"sdram_cs", false,-1);
    tracep->declBit(c+530,"sdram_ras", false,-1);
    tracep->declBit(c+531,"sdram_cas", false,-1);
    tracep->declBit(c+532,"sdram_we", false,-1);
    tracep->declBus(c+533,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+534,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+535,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+536,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1027,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1028,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1029,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1032,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1033,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1034,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1035,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1036,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1037,"ps2_clk", false,-1);
    tracep->declBit(c+1038,"ps2_data", false,-1);
    tracep->declBus(c+1039,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1040,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1041,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1042,"vga_hsync", false,-1);
    tracep->declBit(c+1043,"vga_vsync", false,-1);
    tracep->declBit(c+1044,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+771,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+772,"in_psel", false,-1);
    tracep->declBit(c+7,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+917,"in_pready", false,-1);
    tracep->declBus(c+918,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+776,"in_pslverr", false,-1);
    tracep->declBus(c+771,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+772,"out_psel", false,-1);
    tracep->declBit(c+7,"out_penable", false,-1);
    tracep->declBus(c+1067,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"out_pwrite", false,-1);
    tracep->declBus(c+774,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+917,"out_pready", false,-1);
    tracep->declBus(c+918,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+776,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+772,"auto_in_psel", false,-1);
    tracep->declBit(c+7,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+771,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+917,"auto_in_pready", false,-1);
    tracep->declBit(c+776,"auto_in_pslverr", false,-1);
    tracep->declBus(c+918,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+777,"auto_out_6_psel", false,-1);
    tracep->declBit(c+475,"auto_out_6_penable", false,-1);
    tracep->declBit(c+773,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+771,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1068,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+538,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+778,"auto_out_5_psel", false,-1);
    tracep->declBit(c+476,"auto_out_5_penable", false,-1);
    tracep->declBit(c+773,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+779,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1067,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1070,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1071,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+780,"auto_out_4_psel", false,-1);
    tracep->declBit(c+477,"auto_out_4_penable", false,-1);
    tracep->declBit(c+773,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+781,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1072,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1073,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1074,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+782,"auto_out_3_psel", false,-1);
    tracep->declBit(c+478,"auto_out_3_penable", false,-1);
    tracep->declBit(c+773,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+781,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1076,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+783,"auto_out_2_psel", false,-1);
    tracep->declBit(c+479,"auto_out_2_penable", false,-1);
    tracep->declBit(c+773,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+771,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1068,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+8,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+784,"auto_out_1_psel", false,-1);
    tracep->declBit(c+785,"auto_out_1_penable", false,-1);
    tracep->declBit(c+773,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+781,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+786,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1068,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+911,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+787,"auto_out_0_psel", false,-1);
    tracep->declBit(c+788,"auto_out_0_penable", false,-1);
    tracep->declBit(c+773,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+779,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1067,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1068,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+540,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+789,"sel_0", false,-1);
    tracep->declBit(c+790,"sel_1", false,-1);
    tracep->declBit(c+791,"sel_2", false,-1);
    tracep->declBit(c+792,"sel_3", false,-1);
    tracep->declBit(c+793,"sel_4", false,-1);
    tracep->declBit(c+794,"sel_5", false,-1);
    tracep->declBit(c+795,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+796,"auto_in_awready", false,-1);
    tracep->declBit(c+797,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+796,"auto_in_wready", false,-1);
    tracep->declBit(c+799,"auto_in_wvalid", false,-1);
    tracep->declBus(c+800,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+919,"auto_in_bready", false,-1);
    tracep->declBit(c+920,"auto_in_bvalid", false,-1);
    tracep->declBus(c+11,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+803,"auto_in_arready", false,-1);
    tracep->declBit(c+804,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+921,"auto_in_rready", false,-1);
    tracep->declBit(c+922,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+487,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+802,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+772,"auto_out_psel", false,-1);
    tracep->declBit(c+7,"auto_out_penable", false,-1);
    tracep->declBit(c+773,"auto_out_pwrite", false,-1);
    tracep->declBus(c+771,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+774,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+917,"auto_out_pready", false,-1);
    tracep->declBit(c+776,"auto_out_pslverr", false,-1);
    tracep->declBus(c+918,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+7,"nodeOut_penable", false,-1);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBit(c+803,"accept_read", false,-1);
    tracep->declBit(c+796,"accept_write", false,-1);
    tracep->declBit(c+16,"is_write_r", false,-1);
    tracep->declBit(c+773,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+11,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+806,"resp", false,-1, 1,0);
    tracep->declBus(c+21,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+802,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+922,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+22,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+920,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+807,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+808,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+809,"auto_in_wvalid", false,-1);
    tracep->declBus(c+810,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_in_wlast", false,-1);
    tracep->declBit(c+912,"auto_in_bready", false,-1);
    tracep->declBit(c+923,"auto_in_bvalid", false,-1);
    tracep->declBus(c+924,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+812,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+925,"auto_in_rready", false,-1);
    tracep->declBit(c+926,"auto_in_rvalid", false,-1);
    tracep->declBus(c+927,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+489,"auto_in_rlast", false,-1);
    tracep->declBit(c+929,"auto_out_awready", false,-1);
    tracep->declBit(c+814,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+930,"auto_out_wready", false,-1);
    tracep->declBit(c+815,"auto_out_wvalid", false,-1);
    tracep->declBus(c+800,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_out_wlast", false,-1);
    tracep->declBit(c+931,"auto_out_bready", false,-1);
    tracep->declBit(c+932,"auto_out_bvalid", false,-1);
    tracep->declBus(c+924,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+935,"auto_out_arready", false,-1);
    tracep->declBit(c+817,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+925,"auto_out_rready", false,-1);
    tracep->declBit(c+926,"auto_out_rvalid", false,-1);
    tracep->declBus(c+927,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+490,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+936,"auto_out_rlast", false,-1);
    tracep->declBit(c+815,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+28,"w_idle", false,-1);
    tracep->declBit(c+937,"in_awready", false,-1);
    tracep->declBit(c+29,"busy", false,-1);
    tracep->declBus(c+30,"r_addr", false,-1, 31,0);
    tracep->declBus(c+31,"r_len", false,-1, 7,0);
    tracep->declBus(c+32,"len", false,-1, 7,0);
    tracep->declBus(c+818,"addr", false,-1, 31,0);
    tracep->declBit(c+33,"busy_1", false,-1);
    tracep->declBus(c+34,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+35,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+36,"len_1", false,-1, 7,0);
    tracep->declBus(c+819,"addr_1", false,-1, 31,0);
    tracep->declBit(c+37,"wbeats_latched", false,-1);
    tracep->declBit(c+814,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+820,"wbeats_valid", false,-1);
    tracep->declBus(c+38,"w_counter", false,-1, 8,0);
    tracep->declBus(c+821,"w_todo", false,-1, 8,0);
    tracep->declBit(c+816,"w_last", false,-1);
    tracep->declBit(c+931,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+812,"io_enq_valid", false,-1);
    tracep->declBus(c+1078,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+813,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1079,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1080,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1081,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+938,"io_deq_ready", false,-1);
    tracep->declBit(c+817,"io_deq_valid", false,-1);
    tracep->declBus(c+12,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+822,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+55,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+13,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+56,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+57,"ram", false,-1, 48,0);
    tracep->declBit(c+59,"full", false,-1);
    tracep->declBit(c+817,"io_deq_valid_0", false,-1);
    tracep->declBit(c+939,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+807,"io_enq_valid", false,-1);
    tracep->declBus(c+1078,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+808,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1079,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1080,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1081,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+823,"io_deq_valid", false,-1);
    tracep->declBus(c+9,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+824,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+60,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+10,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+61,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+62,"ram", false,-1, 48,0);
    tracep->declBit(c+64,"full", false,-1);
    tracep->declBit(c+823,"io_deq_valid_0", false,-1);
    tracep->declBit(c+941,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+809,"io_enq_valid", false,-1);
    tracep->declBus(c+810,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+811,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_enq_bits_last", false,-1);
    tracep->declBit(c+942,"io_deq_ready", false,-1);
    tracep->declBit(c+825,"io_deq_valid", false,-1);
    tracep->declBus(c+800,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+801,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+65,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+66,"ram", false,-1, 36,0);
    tracep->declBit(c+68,"full", false,-1);
    tracep->declBit(c+825,"io_deq_valid_0", false,-1);
    tracep->declBit(c+943,"do_enq", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+944,"auto_in_awready", false,-1);
    tracep->declBit(c+826,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+827,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+913,"auto_in_wready", false,-1);
    tracep->declBit(c+828,"auto_in_wvalid", false,-1);
    tracep->declBus(c+800,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+945,"auto_in_bready", false,-1);
    tracep->declBit(c+69,"auto_in_bvalid", false,-1);
    tracep->declBus(c+70,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+946,"auto_in_arready", false,-1);
    tracep->declBit(c+829,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+947,"auto_in_rready", false,-1);
    tracep->declBit(c+72,"auto_in_rvalid", false,-1);
    tracep->declBus(c+73,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+946,"nodeIn_arready", false,-1);
    tracep->declBit(c+944,"nodeIn_awready", false,-1);
    tracep->declBit(c+831,"w_sel0", false,-1);
    tracep->declBit(c+69,"w_full", false,-1);
    tracep->declBus(c+70,"w_id", false,-1, 3,0);
    tracep->declBit(c+76,"r_sel1", false,-1);
    tracep->declBit(c+77,"w_sel1", false,-1);
    tracep->declBit(c+72,"r_full", false,-1);
    tracep->declBus(c+73,"r_id", false,-1, 3,0);
    tracep->declBit(c+948,"ren", false,-1);
    tracep->declBit(c+78,"rdata_REG", false,-1);
    tracep->declBus(c+79,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+80,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+81,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+82,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+832,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+948,"R0_en", false,-1);
    tracep->declBit(c+1025,"R0_clk", false,-1);
    tracep->declBus(c+83,"R0_data", false,-1, 31,0);
    tracep->declBus(c+833,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+949,"W0_en", false,-1);
    tracep->declBit(c+1025,"W0_clk", false,-1);
    tracep->declBus(c+800,"W0_data", false,-1, 31,0);
    tracep->declBus(c+801,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+807,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+808,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+809,"auto_in_wvalid", false,-1);
    tracep->declBus(c+810,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_in_wlast", false,-1);
    tracep->declBit(c+912,"auto_in_bready", false,-1);
    tracep->declBit(c+923,"auto_in_bvalid", false,-1);
    tracep->declBus(c+924,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+812,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+925,"auto_in_rready", false,-1);
    tracep->declBit(c+926,"auto_in_rvalid", false,-1);
    tracep->declBus(c+927,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+489,"auto_in_rlast", false,-1);
    tracep->declBit(c+23,"auto_out_awready", false,-1);
    tracep->declBit(c+807,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1078,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+808,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_out_wready", false,-1);
    tracep->declBit(c+809,"auto_out_wvalid", false,-1);
    tracep->declBus(c+810,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_out_wlast", false,-1);
    tracep->declBit(c+912,"auto_out_bready", false,-1);
    tracep->declBit(c+923,"auto_out_bvalid", false,-1);
    tracep->declBus(c+924,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_out_arready", false,-1);
    tracep->declBit(c+812,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+925,"auto_out_rready", false,-1);
    tracep->declBit(c+926,"auto_out_rvalid", false,-1);
    tracep->declBus(c+927,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+489,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+950,"auto_in_awready", false,-1);
    tracep->declBit(c+834,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+930,"auto_in_wready", false,-1);
    tracep->declBit(c+815,"auto_in_wvalid", false,-1);
    tracep->declBus(c+800,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_in_wlast", false,-1);
    tracep->declBit(c+931,"auto_in_bready", false,-1);
    tracep->declBit(c+932,"auto_in_bvalid", false,-1);
    tracep->declBus(c+924,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_in_arready", false,-1);
    tracep->declBit(c+835,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+925,"auto_in_rready", false,-1);
    tracep->declBit(c+926,"auto_in_rvalid", false,-1);
    tracep->declBus(c+927,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+936,"auto_in_rlast", false,-1);
    tracep->declBit(c+944,"auto_out_2_awready", false,-1);
    tracep->declBit(c+826,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+827,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+913,"auto_out_2_wready", false,-1);
    tracep->declBit(c+828,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+800,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+945,"auto_out_2_bready", false,-1);
    tracep->declBit(c+69,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+70,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+946,"auto_out_2_arready", false,-1);
    tracep->declBit(c+829,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+830,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+947,"auto_out_2_rready", false,-1);
    tracep->declBit(c+72,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+73,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+836,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+837,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+84,"auto_out_1_arready", false,-1);
    tracep->declBit(c+838,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+491,"auto_out_1_rready", false,-1);
    tracep->declBit(c+85,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+86,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+796,"auto_out_0_awready", false,-1);
    tracep->declBit(c+797,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+796,"auto_out_0_wready", false,-1);
    tracep->declBit(c+799,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+800,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+919,"auto_out_0_bready", false,-1);
    tracep->declBit(c+920,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+11,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+802,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+803,"auto_out_0_arready", false,-1);
    tracep->declBit(c+804,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+921,"auto_out_0_rready", false,-1);
    tracep->declBit(c+922,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+487,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+802,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+932,"in_0_bvalid", false,-1);
    tracep->declBit(c+926,"in_0_rvalid", false,-1);
    tracep->declBit(c+950,"nodeIn_awready", false,-1);
    tracep->declBit(c+840,"requestARIO_0_0", false,-1);
    tracep->declBit(c+841,"requestARIO_0_1", false,-1);
    tracep->declBit(c+842,"requestARIO_0_2", false,-1);
    tracep->declBit(c+843,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+844,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+845,"requestAWIO_0_2", false,-1);
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
    tracep->declBit(c+846,"in_0_awvalid", false,-1);
    tracep->declBit(c+847,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+848,"in_0_wvalid", false,-1);
    tracep->declBit(c+121,"idle_3", false,-1);
    tracep->declBit(c+952,"anyValid", false,-1);
    tracep->declBus(c+953,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+954,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+955,"prefixOR_1", false,-1);
    tracep->declBit(c+956,"winner_3_1", false,-1);
    tracep->declBit(c+957,"winner_3_2", false,-1);
    tracep->declBit(c+123,"state_3_0", false,-1);
    tracep->declBit(c+124,"state_3_1", false,-1);
    tracep->declBit(c+125,"state_3_2", false,-1);
    tracep->declBit(c+958,"muxState_3_0", false,-1);
    tracep->declBit(c+959,"muxState_3_1", false,-1);
    tracep->declBit(c+960,"muxState_3_2", false,-1);
    tracep->declBit(c+126,"idle_4", false,-1);
    tracep->declBit(c+961,"anyValid_1", false,-1);
    tracep->declBus(c+962,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+127,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+963,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+964,"winner_4_0", false,-1);
    tracep->declBit(c+965,"winner_4_2", false,-1);
    tracep->declBit(c+128,"state_4_0", false,-1);
    tracep->declBit(c+129,"state_4_2", false,-1);
    tracep->declBit(c+966,"muxState_4_0", false,-1);
    tracep->declBit(c+967,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+130,"io_enq_ready", false,-1);
    tracep->declBit(c+847,"io_enq_valid", false,-1);
    tracep->declBus(c+849,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+968,"io_deq_ready", false,-1);
    tracep->declBit(c+850,"io_deq_valid", false,-1);
    tracep->declBus(c+851,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+131,"wrap", false,-1);
    tracep->declBit(c+132,"wrap_1", false,-1);
    tracep->declBit(c+133,"maybe_full", false,-1);
    tracep->declBit(c+134,"ptr_match", false,-1);
    tracep->declBit(c+135,"empty", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+850,"io_deq_valid_0", false,-1);
    tracep->declBit(c+969,"do_deq", false,-1);
    tracep->declBit(c+970,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+132,"R0_addr", false,-1);
    tracep->declBit(c+1082,"R0_en", false,-1);
    tracep->declBit(c+1025,"R0_clk", false,-1);
    tracep->declBus(c+137,"R0_data", false,-1, 2,0);
    tracep->declBit(c+131,"W0_addr", false,-1);
    tracep->declBit(c+970,"W0_en", false,-1);
    tracep->declBit(c+1025,"W0_clk", false,-1);
    tracep->declBus(c+849,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+929,"auto_in_awready", false,-1);
    tracep->declBit(c+814,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+930,"auto_in_wready", false,-1);
    tracep->declBit(c+815,"auto_in_wvalid", false,-1);
    tracep->declBus(c+800,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_in_wlast", false,-1);
    tracep->declBit(c+931,"auto_in_bready", false,-1);
    tracep->declBit(c+932,"auto_in_bvalid", false,-1);
    tracep->declBus(c+924,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+935,"auto_in_arready", false,-1);
    tracep->declBit(c+817,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+925,"auto_in_rready", false,-1);
    tracep->declBit(c+926,"auto_in_rvalid", false,-1);
    tracep->declBus(c+927,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+490,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+936,"auto_in_rlast", false,-1);
    tracep->declBit(c+950,"auto_out_awready", false,-1);
    tracep->declBit(c+834,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+798,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+930,"auto_out_wready", false,-1);
    tracep->declBit(c+815,"auto_out_wvalid", false,-1);
    tracep->declBus(c+800,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+801,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_out_wlast", false,-1);
    tracep->declBit(c+931,"auto_out_bready", false,-1);
    tracep->declBit(c+932,"auto_out_bvalid", false,-1);
    tracep->declBus(c+924,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+933,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_out_arready", false,-1);
    tracep->declBit(c+835,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+805,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+925,"auto_out_rready", false,-1);
    tracep->declBit(c+926,"auto_out_rvalid", false,-1);
    tracep->declBus(c+927,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+936,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+971,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+972,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+494,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+974,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+496,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+975,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+497,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+976,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+499,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+500,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+979,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+501,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+980,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+502,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+981,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+503,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+504,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+505,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+506,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+507,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+508,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+509,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+510,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+511,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+990,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+512,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+513,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+992,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+514,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+993,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+515,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+994,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+516,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+517,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+996,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+518,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+519,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+998,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+520,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+521,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1000,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+522,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1001,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1002,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+23,"auto_master_out_awready", false,-1);
    tracep->declBit(c+807,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1078,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+808,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_wready", false,-1);
    tracep->declBit(c+809,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+810,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+912,"auto_master_out_bready", false,-1);
    tracep->declBit(c+923,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+924,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+488,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_arready", false,-1);
    tracep->declBit(c+812,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1078,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1079,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+925,"auto_master_out_rready", false,-1);
    tracep->declBit(c+926,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+927,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+928,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+489,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+1068,"io_interrupt", false,-1);
    tracep->declBit(c+23,"io_master_awready", false,-1);
    tracep->declBit(c+807,"io_master_awvalid", false,-1);
    tracep->declBus(c+808,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1078,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1079,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_wready", false,-1);
    tracep->declBit(c+809,"io_master_wvalid", false,-1);
    tracep->declBus(c+810,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_master_wlast", false,-1);
    tracep->declBit(c+912,"io_master_bready", false,-1);
    tracep->declBit(c+923,"io_master_bvalid", false,-1);
    tracep->declBus(c+488,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+924,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+25,"io_master_arready", false,-1);
    tracep->declBit(c+812,"io_master_arvalid", false,-1);
    tracep->declBus(c+813,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1078,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+925,"io_master_rready", false,-1);
    tracep->declBit(c+926,"io_master_rvalid", false,-1);
    tracep->declBus(c+1053,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+928,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+489,"io_master_rlast", false,-1);
    tracep->declBus(c+927,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1068,"io_slave_awready", false,-1);
    tracep->declBit(c+1068,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1083,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1078,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1079,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1068,"io_slave_wready", false,-1);
    tracep->declBit(c+1068,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1083,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1078,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"io_slave_wlast", false,-1);
    tracep->declBit(c+1068,"io_slave_bready", false,-1);
    tracep->declBit(c+1068,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1081,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1078,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1068,"io_slave_arready", false,-1);
    tracep->declBit(c+1068,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1083,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1078,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1079,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1068,"io_slave_rready", false,-1);
    tracep->declBit(c+1068,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1081,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1083,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1068,"io_slave_rlast", false,-1);
    tracep->declBus(c+1078,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+852,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+813,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+812,"io_axi_ar_arvalid", false,-1);
    tracep->declBit(c+25,"io_axi_ar_arready", false,-1);
    tracep->declBus(c+928,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1053,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+926,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+925,"io_axi_r_rready", false,-1);
    tracep->declBus(c+808,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+807,"io_axi_aw_awvalid", false,-1);
    tracep->declBus(c+810,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+811,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+809,"io_axi_w_wvalid", false,-1);
    tracep->declBus(c+488,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+923,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+912,"io_axi_b_bready", false,-1);
    tracep->declBus(c+480,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+853,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+481,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+482,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+854,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+269,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1003,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1055,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1004,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+271,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+272,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBus(c+274,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+276,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBus(c+1056,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1005,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1006,"io_lsu_axi_b_bready", false,-1);
    tracep->declBit(c+277,"io_lsu_sta", false,-1);
    tracep->declBus(c+855,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+856,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+857,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+914,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+1007,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1008,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+915,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+858,"io_ifu_sta", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+278,"io_idu2in_valid", false,-1);
    tracep->declBus(c+279,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+280,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+281,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+282,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+283,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+284,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+285,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+286,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+287,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+288,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+289,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+290,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+291,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+292,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+293,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+294,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+295,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+296,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+297,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+298,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+299,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+300,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+301,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+302,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+303,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+304,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+305,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+306,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+307,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+308,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+309,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+310,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+311,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+312,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+313,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+314,"m2IDUstate", false,-1);
    tracep->declBit(c+296,"state_reg", false,-1);
    tracep->declBus(c+315,"alu_result_reg", false,-1, 31,0);
    tracep->declBus(c+297,"lsu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+298,"lsu_data_pc", false,-1, 31,0);
    tracep->declBit(c+299,"lsu_data_mem_ren", false,-1);
    tracep->declBit(c+300,"lsu_data_mem_wen", false,-1);
    tracep->declBus(c+301,"lsu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+302,"lsu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+303,"lsu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+304,"lsu_data_reg_wen", false,-1);
    tracep->declBus(c+305,"lsu_data_src1", false,-1, 31,0);
    tracep->declBus(c+306,"lsu_data_src2", false,-1, 31,0);
    tracep->declBus(c+307,"lsu_data_csr", false,-1, 31,0);
    tracep->declBus(c+308,"lsu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+309,"lsu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+310,"lsu_data_imm", false,-1, 31,0);
    tracep->declBus(c+311,"lsu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+312,"lsu_data_il_us", false,-1);
    tracep->declBus(c+313,"lsu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+316,"io_src1", false,-1, 31,0);
    tracep->declBus(c+317,"io_src2", false,-1, 31,0);
    tracep->declBus(c+318,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+319,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+1008,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+859,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+860,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+861,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+278,"io_out2exu_valid", false,-1);
    tracep->declBus(c+279,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+280,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+281,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+282,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+283,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+284,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+285,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+286,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+287,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+288,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+289,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+290,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+291,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+292,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+293,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+294,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+295,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+862,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+863,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+864,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+865,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+866,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+483,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+321,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+852,"io_inv_flag", false,-1);
    tracep->declBus(c+279,"exu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+280,"exu_data_pc", false,-1, 31,0);
    tracep->declBit(c+281,"exu_data_mem_ren", false,-1);
    tracep->declBit(c+282,"exu_data_mem_wen", false,-1);
    tracep->declBus(c+283,"exu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+284,"exu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+285,"exu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+286,"exu_data_reg_wen", false,-1);
    tracep->declBus(c+287,"exu_data_src1", false,-1, 31,0);
    tracep->declBus(c+288,"exu_data_src2", false,-1, 31,0);
    tracep->declBus(c+289,"exu_data_csr", false,-1, 31,0);
    tracep->declBus(c+290,"exu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+291,"exu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+292,"exu_data_imm", false,-1, 31,0);
    tracep->declBus(c+293,"exu_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+294,"exu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+295,"exu_data_il_us", false,-1);
    tracep->declBit(c+322,"state", false,-1);
    tracep->declBit(c+278,"state_reg", false,-1);
    tracep->declBus(c+867,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+868,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+869,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+861,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+1008,"io_out_valid", false,-1);
    tracep->declBus(c+859,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+860,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+861,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+870,"io_exu2in_valid", false,-1);
    tracep->declBus(c+871,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+855,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+856,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+857,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+914,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+1007,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+1008,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+915,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+858,"io_ifu_sta", false,-1);
    tracep->declBus(c+860,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+872,"m2EXUstate", false,-1);
    tracep->declBit(c+873,"exu2in_reg", false,-1);
    tracep->declBus(c+874,"indata_dnpc", false,-1, 31,0);
    tracep->declBus(c+875,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+861,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+856,"arvalid_reg", false,-1);
    tracep->declBit(c+858,"sta_reg", false,-1);
    tracep->declBus(c+876,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->declBit(c+1008,"io_ifu_axi_r_rready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+296,"io_exu2in_valid", false,-1);
    tracep->declBus(c+297,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+298,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+299,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+300,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+301,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+302,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+303,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+304,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+305,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+306,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+307,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+308,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+309,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+310,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+311,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+312,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+313,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+1009,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+323,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+324,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+325,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+326,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+327,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+328,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+329,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+330,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+331,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+332,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+333,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+334,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+335,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+336,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+269,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1003,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1055,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1004,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+271,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+274,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+276,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBus(c+272,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBus(c+1056,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+1005,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+1006,"io_lsu_axi_b_bready", false,-1);
    tracep->declBit(c+277,"io_lsu_sta", false,-1);
    tracep->declBit(c+1006,"io_lsu_axi_b_bready_0", false,-1);
    tracep->declBit(c+271,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+337,"m2EXUstate", false,-1);
    tracep->declBit(c+338,"state_reg", false,-1);
    tracep->declBit(c+1009,"io_out2wbu_valid_0", false,-1);
    tracep->declBit(c+339,"exu2in_valid", false,-1);
    tracep->declBit(c+340,"exu2in_valid_reg", false,-1);
    tracep->declBit(c+341,"rready_reg", false,-1);
    tracep->declBus(c+342,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+343,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+344,"mem_ren_reg", false,-1);
    tracep->declBit(c+270,"io_lsu_axi_ar_arvalid_0", false,-1);
    tracep->declBit(c+345,"rvalid_reg", false,-1);
    tracep->declBus(c+346,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+347,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+348,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+349,"mem_wen_reg", false,-1);
    tracep->declBit(c+350,"m_wen_reg_delay", false,-1);
    tracep->declBit(c+273,"io_lsu_axi_aw_awvalid_0", false,-1);
    tracep->declBit(c+276,"io_lsu_axi_w_wvalid_0", false,-1);
    tracep->declBus(c+323,"wbu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+324,"wbu_data_pc", false,-1, 31,0);
    tracep->declBus(c+325,"wbu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+326,"wbu_data_reg_wen", false,-1);
    tracep->declBus(c+327,"wbu_data_src1", false,-1, 31,0);
    tracep->declBus(c+328,"wbu_data_csr", false,-1, 31,0);
    tracep->declBus(c+329,"wbu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+330,"wbu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+331,"wbu_data_imm", false,-1, 31,0);
    tracep->declBus(c+332,"wbu_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+333,"wbu_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+334,"wbu_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+335,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+336,"wbu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+351,"io_inData", false,-1, 31,0);
    tracep->declBit(c+352,"io_inValid", false,-1);
    tracep->declBus(c+353,"io_outData", false,-1, 31,0);
    tracep->declBit(c+354,"io_delayDone", false,-1);
    tracep->declBus(c+355,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+356,"counter", false,-1, 4,0);
    tracep->declBus(c+357,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+358,"io_inData", false,-1, 31,0);
    tracep->declBit(c+359,"io_inValid", false,-1);
    tracep->declBus(c+360,"io_outData", false,-1, 31,0);
    tracep->declBit(c+361,"io_delayDone", false,-1);
    tracep->declBus(c+362,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+363,"counter", false,-1, 4,0);
    tracep->declBus(c+364,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+1010,"io_inData", false,-1, 31,0);
    tracep->declBit(c+524,"io_inValid", false,-1);
    tracep->declBus(c+365,"io_outData", false,-1, 31,0);
    tracep->declBit(c+525,"io_delayDone", false,-1);
    tracep->declBus(c+366,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+367,"counter", false,-1, 4,0);
    tracep->declBus(c+368,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+358,"io_inData", false,-1, 31,0);
    tracep->declBit(c+359,"io_inValid", false,-1);
    tracep->declBus(c+369,"io_outData", false,-1, 31,0);
    tracep->declBit(c+370,"io_delayDone", false,-1);
    tracep->declBus(c+371,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+372,"counter", false,-1, 4,0);
    tracep->declBus(c+373,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+480,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+853,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+481,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+482,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+854,"io_axi_r_rready", false,-1);
    tracep->declBus(c+877,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+374,"mtime", false,-1, 63,0);
    tracep->declBus(c+376,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+268,"rvalid_reg", false,-1);
    tracep->declBus(c+377,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+378,"arvalid_reg", false,-1);
    tracep->declBit(c+878,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBus(c+484,"io_inData", false,-1, 31,0);
    tracep->declBit(c+485,"io_inValid", false,-1);
    tracep->declBus(c+379,"io_outData", false,-1, 31,0);
    tracep->declBit(c+486,"io_delayDone", false,-1);
    tracep->declBus(c+380,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+381,"counter", false,-1, 4,0);
    tracep->declBus(c+382,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+383,"io_csr_wen_2", false,-1);
    tracep->declBus(c+384,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+862,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+863,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+864,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+865,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+866,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+483,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+320,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+321,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+385,"io_wen", false,-1);
    tracep->declBus(c+386,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+387,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+388,"io_csr_wen_1", false,-1);
    tracep->declBus(c+389,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+390,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+391,"csr_0", false,-1, 31,0);
    tracep->declBus(c+392,"csr_1", false,-1, 31,0);
    tracep->declBus(c+321,"csr_2", false,-1, 31,0);
    tracep->declBus(c+393,"csr_3", false,-1, 31,0);
    tracep->declBus(c+394,"reg_0", false,-1, 31,0);
    tracep->declBus(c+395,"reg_1", false,-1, 31,0);
    tracep->declBus(c+396,"reg_2", false,-1, 31,0);
    tracep->declBus(c+397,"reg_3", false,-1, 31,0);
    tracep->declBus(c+398,"reg_4", false,-1, 31,0);
    tracep->declBus(c+399,"reg_5", false,-1, 31,0);
    tracep->declBus(c+400,"reg_6", false,-1, 31,0);
    tracep->declBus(c+401,"reg_7", false,-1, 31,0);
    tracep->declBus(c+402,"reg_8", false,-1, 31,0);
    tracep->declBus(c+403,"reg_9", false,-1, 31,0);
    tracep->declBus(c+404,"reg_10", false,-1, 31,0);
    tracep->declBus(c+405,"reg_11", false,-1, 31,0);
    tracep->declBus(c+406,"reg_12", false,-1, 31,0);
    tracep->declBus(c+407,"reg_13", false,-1, 31,0);
    tracep->declBus(c+408,"reg_14", false,-1, 31,0);
    tracep->declBus(c+320,"reg_15", false,-1, 31,0);
    tracep->declBus(c+409,"reg_16", false,-1, 31,0);
    tracep->declBus(c+410,"reg_17", false,-1, 31,0);
    tracep->declBus(c+411,"reg_18", false,-1, 31,0);
    tracep->declBus(c+412,"reg_19", false,-1, 31,0);
    tracep->declBus(c+413,"reg_20", false,-1, 31,0);
    tracep->declBus(c+414,"reg_21", false,-1, 31,0);
    tracep->declBus(c+415,"reg_22", false,-1, 31,0);
    tracep->declBus(c+416,"reg_23", false,-1, 31,0);
    tracep->declBus(c+417,"reg_24", false,-1, 31,0);
    tracep->declBus(c+418,"reg_25", false,-1, 31,0);
    tracep->declBus(c+419,"reg_26", false,-1, 31,0);
    tracep->declBus(c+420,"reg_27", false,-1, 31,0);
    tracep->declBus(c+421,"reg_28", false,-1, 31,0);
    tracep->declBus(c+422,"reg_29", false,-1, 31,0);
    tracep->declBus(c+423,"reg_30", false,-1, 31,0);
    tracep->declBus(c+424,"reg_31", false,-1, 31,0);
    tracep->declBus(c+863,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+865,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+483,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1054,"reset", false,-1);
    tracep->declBit(c+1009,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+323,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+324,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+325,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+326,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+327,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+328,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+329,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+330,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+331,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+332,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+333,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+334,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+335,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+336,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+870,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+871,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+387,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+385,"io_reg_wen", false,-1);
    tracep->declBus(c+386,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+389,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+390,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+388,"io_csr_wen_1", false,-1);
    tracep->declBus(c+384,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+383,"io_csr_wen_2", false,-1);
    tracep->declBus(c+871,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+425,"m2LSUstate", false,-1);
    tracep->declBus(c+426,"lastdnpc", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"io_d", false,-1);
    tracep->declBit(c+427,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"io_d", false,-1);
    tracep->declBit(c+427,"io_q", false,-1);
    tracep->declBit(c+427,"sync_0", false,-1);
    tracep->declBit(c+428,"sync_1", false,-1);
    tracep->declBit(c+429,"sync_2", false,-1);
    tracep->declBit(c+430,"sync_3", false,-1);
    tracep->declBit(c+431,"sync_4", false,-1);
    tracep->declBit(c+432,"sync_5", false,-1);
    tracep->declBit(c+433,"sync_6", false,-1);
    tracep->declBit(c+434,"sync_7", false,-1);
    tracep->declBit(c+435,"sync_8", false,-1);
    tracep->declBit(c+436,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+782,"auto_in_psel", false,-1);
    tracep->declBit(c+478,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+781,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_in_pready", false,-1);
    tracep->declBit(c+1076,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1027,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1028,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1029,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1032,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1033,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1034,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1035,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1036,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+879,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+782,"in_psel", false,-1);
    tracep->declBit(c+478,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"in_pready", false,-1);
    tracep->declBus(c+1077,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1076,"in_pslverr", false,-1);
    tracep->declBus(c+1027,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1028,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1029,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1032,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1033,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1034,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1035,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1036,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+780,"auto_in_psel", false,-1);
    tracep->declBit(c+477,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+781,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1072,"auto_in_pready", false,-1);
    tracep->declBit(c+1073,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1074,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1037,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1038,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+879,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+780,"in_psel", false,-1);
    tracep->declBit(c+477,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1072,"in_pready", false,-1);
    tracep->declBus(c+1074,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1073,"in_pslverr", false,-1);
    tracep->declBit(c+1037,"ps2_clk", false,-1);
    tracep->declBit(c+1038,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+836,"auto_in_awvalid", false,-1);
    tracep->declBit(c+837,"auto_in_wvalid", false,-1);
    tracep->declBit(c+84,"auto_in_arready", false,-1);
    tracep->declBit(c+838,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+839,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+491,"auto_in_rready", false,-1);
    tracep->declBit(c+85,"auto_in_rvalid", false,-1);
    tracep->declBus(c+86,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+85,"state", false,-1);
    tracep->declBus(c+87,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+86,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+880,"raddr", false,-1, 31,0);
    tracep->declBit(c+881,"ren", false,-1);
    tracep->declBus(c+882,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+783,"auto_in_psel", false,-1);
    tracep->declBit(c+479,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+771,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"auto_in_pready", false,-1);
    tracep->declBit(c+1068,"auto_in_pslverr", false,-1);
    tracep->declBus(c+8,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1049,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1050,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+916,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+771,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+783,"in_psel", false,-1);
    tracep->declBit(c+479,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1052,"in_pready", false,-1);
    tracep->declBus(c+8,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1068,"in_pslverr", false,-1);
    tracep->declBit(c+1049,"qspi_sck", false,-1);
    tracep->declBit(c+1050,"qspi_ce_n", false,-1);
    tracep->declBus(c+916,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+916,"din", false,-1, 3,0);
    tracep->declBus(c+1011,"dout", false,-1, 3,0);
    tracep->declBus(c+1012,"douten", false,-1, 3,0);
    tracep->declBit(c+1057,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1025,"clk_i", false,-1);
    tracep->declBit(c+1026,"rst_i", false,-1);
    tracep->declBus(c+771,"adr_i", false,-1, 31,0);
    tracep->declBus(c+774,"dat_i", false,-1, 31,0);
    tracep->declBus(c+8,"dat_o", false,-1, 31,0);
    tracep->declBus(c+775,"sel_i", false,-1, 3,0);
    tracep->declBit(c+783,"cyc_i", false,-1);
    tracep->declBit(c+783,"stb_i", false,-1);
    tracep->declBit(c+1057,"ack_o", false,-1);
    tracep->declBit(c+773,"we_i", false,-1);
    tracep->declBit(c+1049,"sck", false,-1);
    tracep->declBit(c+1050,"ce_n", false,-1);
    tracep->declBus(c+916,"din", false,-1, 3,0);
    tracep->declBus(c+1011,"dout", false,-1, 3,0);
    tracep->declBus(c+1012,"douten", false,-1, 3,0);
    tracep->declBus(c+1084,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1085,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+541,"mr_sck", false,-1);
    tracep->declBit(c+542,"mr_ce_n", false,-1);
    tracep->declBus(c+916,"mr_din", false,-1, 3,0);
    tracep->declBus(c+543,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+544,"mr_doe", false,-1);
    tracep->declBit(c+545,"mw_sck", false,-1);
    tracep->declBit(c+546,"mw_ce_n", false,-1);
    tracep->declBus(c+916,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1013,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+547,"mw_doe", false,-1);
    tracep->declBit(c+1014,"mr_rd", false,-1);
    tracep->declBit(c+548,"mr_done", false,-1);
    tracep->declBit(c+1015,"mw_wr", false,-1);
    tracep->declBit(c+1016,"mw_done", false,-1);
    tracep->declBit(c+783,"wb_valid", false,-1);
    tracep->declBit(c+883,"wb_we", false,-1);
    tracep->declBit(c+884,"wb_re", false,-1);
    tracep->declBit(c+549,"state", false,-1);
    tracep->declBit(c+1017,"nstate", false,-1);
    tracep->declBus(c+885,"size", false,-1, 2,0);
    tracep->declBus(c+886,"byte0", false,-1, 7,0);
    tracep->declBus(c+887,"byte1", false,-1, 7,0);
    tracep->declBus(c+888,"byte2", false,-1, 7,0);
    tracep->declBus(c+889,"byte3", false,-1, 7,0);
    tracep->declBus(c+890,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1058,"rst_n", false,-1);
    tracep->declBus(c+891,"addr", false,-1, 23,0);
    tracep->declBit(c+1014,"rd", false,-1);
    tracep->declBus(c+1086,"size", false,-1, 2,0);
    tracep->declBit(c+548,"done", false,-1);
    tracep->declBus(c+8,"line", false,-1, 31,0);
    tracep->declBit(c+541,"sck", false,-1);
    tracep->declBit(c+542,"ce_n", false,-1);
    tracep->declBus(c+916,"din", false,-1, 3,0);
    tracep->declBus(c+543,"dout", false,-1, 3,0);
    tracep->declBit(c+544,"douten", false,-1);
    tracep->declBus(c+1084,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1085,"READ", false,-1, 0,0);
    tracep->declBus(c+1087,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+550,"state", false,-1);
    tracep->declBit(c+1018,"nstate", false,-1);
    tracep->declBus(c+551,"counter", false,-1, 7,0);
    tracep->declBus(c+552,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+437+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1088,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+553,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1058,"rst_n", false,-1);
    tracep->declBus(c+892,"addr", false,-1, 23,0);
    tracep->declBus(c+890,"line", false,-1, 31,0);
    tracep->declBus(c+885,"size", false,-1, 2,0);
    tracep->declBit(c+1015,"wr", false,-1);
    tracep->declBit(c+1016,"done", false,-1);
    tracep->declBit(c+545,"sck", false,-1);
    tracep->declBit(c+546,"ce_n", false,-1);
    tracep->declBus(c+916,"din", false,-1, 3,0);
    tracep->declBus(c+1013,"dout", false,-1, 3,0);
    tracep->declBit(c+547,"douten", false,-1);
    tracep->declBus(c+1084,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1085,"WRITE", false,-1, 0,0);
    tracep->declBus(c+893,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+554,"state", false,-1);
    tracep->declBit(c+1019,"nstate", false,-1);
    tracep->declBus(c+555,"counter", false,-1, 7,0);
    tracep->declBus(c+556,"saddr", false,-1, 23,0);
    tracep->declBus(c+1089,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+777,"auto_in_psel", false,-1);
    tracep->declBit(c+475,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+771,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"auto_in_pready", false,-1);
    tracep->declBit(c+1068,"auto_in_pslverr", false,-1);
    tracep->declBus(c+538,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1051,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+528,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+529,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+530,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+531,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+532,"sdram_bundle_we", false,-1);
    tracep->declBus(c+533,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+534,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+535,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+536,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+771,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+777,"in_psel", false,-1);
    tracep->declBit(c+475,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+537,"in_pready", false,-1);
    tracep->declBus(c+538,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1068,"in_pslverr", false,-1);
    tracep->declBit(c+1051,"sdram_clk", false,-1);
    tracep->declBit(c+528,"sdram_cke", false,-1);
    tracep->declBit(c+529,"sdram_cs", false,-1);
    tracep->declBit(c+530,"sdram_ras", false,-1);
    tracep->declBit(c+531,"sdram_cas", false,-1);
    tracep->declBit(c+532,"sdram_we", false,-1);
    tracep->declBus(c+533,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+534,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+535,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+536,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+557,"sdram_dout_en", false,-1);
    tracep->declBus(c+558,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+441,"state", false,-1, 1,0);
    tracep->declBit(c+559,"req_accept", false,-1);
    tracep->declBit(c+894,"is_read", false,-1);
    tracep->declBit(c+895,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1025,"clk_i", false,-1);
    tracep->declBit(c+1026,"rst_i", false,-1);
    tracep->declBus(c+896,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+894,"inport_rd_i", false,-1);
    tracep->declBus(c+1079,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+771,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+774,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+536,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+559,"inport_accept_o", false,-1);
    tracep->declBit(c+537,"inport_ack_o", false,-1);
    tracep->declBit(c+1068,"inport_error_o", false,-1);
    tracep->declBus(c+538,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1051,"sdram_clk_o", false,-1);
    tracep->declBit(c+528,"sdram_cke_o", false,-1);
    tracep->declBit(c+529,"sdram_cs_o", false,-1);
    tracep->declBit(c+530,"sdram_ras_o", false,-1);
    tracep->declBit(c+531,"sdram_cas_o", false,-1);
    tracep->declBit(c+532,"sdram_we_o", false,-1);
    tracep->declBus(c+535,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+533,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+534,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+558,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+557,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1090,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1091,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1092,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1093,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1093,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1093,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1094,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1095,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1096,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1097,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1094,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1099,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1100,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1101,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1102,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1103,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1104,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1105,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1078,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1106,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1094,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1078,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1105,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1104,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1100,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1102,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1101,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1103,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1099,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1107,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1108,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1109,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1109,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1110,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1109,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1093,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1093,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1111,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+771,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+896,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+894,"ram_rd_w", false,-1);
    tracep->declBit(c+559,"ram_accept_w", false,-1);
    tracep->declBus(c+774,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+538,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+537,"ram_ack_w", false,-1);
    tracep->declBit(c+897,"ram_req_w", false,-1);
    tracep->declBus(c+560,"command_q", false,-1, 3,0);
    tracep->declBus(c+533,"addr_q", false,-1, 12,0);
    tracep->declBus(c+558,"data_q", false,-1, 15,0);
    tracep->declBit(c+561,"data_rd_en_q", false,-1);
    tracep->declBus(c+535,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+528,"cke_q", false,-1);
    tracep->declBus(c+534,"bank_q", false,-1, 1,0);
    tracep->declBus(c+562,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+563,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+536,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+564,"refresh_q", false,-1);
    tracep->declBus(c+565,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+566+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+570,"state_q", false,-1, 3,0);
    tracep->declBus(c+1020,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1021,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+571,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+572,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+898,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+899,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+900,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1094,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+573,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1022,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1112,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+574,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+575,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+576,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+577,"idx", false,-1, 31,0);
    tracep->declBus(c+578,"rd_q", false,-1, 3,0);
    tracep->declBit(c+537,"ack_q", false,-1);
    tracep->declArray(c+579,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+787,"auto_in_psel", false,-1);
    tracep->declBit(c+788,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+779,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"auto_in_pready", false,-1);
    tracep->declBit(c+1068,"auto_in_pslverr", false,-1);
    tracep->declBus(c+540,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+526,"spi_bundle_sck", false,-1);
    tracep->declBus(c+527,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1047,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1048,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1113,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1114,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1115,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+901,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+787,"in_psel", false,-1);
    tracep->declBit(c+788,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+539,"in_pready", false,-1);
    tracep->declBus(c+540,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1068,"in_pslverr", false,-1);
    tracep->declBit(c+526,"spi_sck", false,-1);
    tracep->declBus(c+527,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1047,"spi_mosi", false,-1);
    tracep->declBit(c+1048,"spi_miso", false,-1);
    tracep->declBit(c+582,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1116,"Tp", false,-1, 31,0);
    tracep->declBit(c+1025,"wb_clk_i", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBus(c+902,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+774,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+540,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+775,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+773,"wb_we_i", false,-1);
    tracep->declBit(c+787,"wb_stb_i", false,-1);
    tracep->declBit(c+788,"wb_cyc_i", false,-1);
    tracep->declBit(c+539,"wb_ack_o", false,-1);
    tracep->declBit(c+1068,"wb_err_o", false,-1);
    tracep->declBit(c+582,"wb_int_o", false,-1);
    tracep->declBus(c+527,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+526,"sclk_pad_o", false,-1);
    tracep->declBit(c+1047,"mosi_pad_o", false,-1);
    tracep->declBit(c+1048,"miso_pad_i", false,-1);
    tracep->declBus(c+583,"divider", false,-1, 15,0);
    tracep->declBus(c+584,"ctrl", false,-1, 13,0);
    tracep->declBus(c+585,"ss", false,-1, 7,0);
    tracep->declBus(c+1023,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+586,"rx", false,-1, 127,0);
    tracep->declBit(c+590,"rx_negedge", false,-1);
    tracep->declBit(c+591,"tx_negedge", false,-1);
    tracep->declBus(c+592,"char_len", false,-1, 6,0);
    tracep->declBit(c+593,"go", false,-1);
    tracep->declBit(c+594,"lsb", false,-1);
    tracep->declBit(c+595,"ie", false,-1);
    tracep->declBit(c+596,"ass", false,-1);
    tracep->declBit(c+903,"spi_divider_sel", false,-1);
    tracep->declBit(c+904,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+905,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+906,"spi_ss_sel", false,-1);
    tracep->declBit(c+597,"tip", false,-1);
    tracep->declBit(c+598,"pos_edge", false,-1);
    tracep->declBit(c+599,"neg_edge", false,-1);
    tracep->declBit(c+600,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1116,"Tp", false,-1, 31,0);
    tracep->declBit(c+1025,"clk_in", false,-1);
    tracep->declBit(c+1026,"rst", false,-1);
    tracep->declBit(c+597,"enable", false,-1);
    tracep->declBit(c+593,"go", false,-1);
    tracep->declBit(c+600,"last_clk", false,-1);
    tracep->declBus(c+583,"divider", false,-1, 15,0);
    tracep->declBit(c+526,"clk_out", false,-1);
    tracep->declBit(c+598,"pos_edge", false,-1);
    tracep->declBit(c+599,"neg_edge", false,-1);
    tracep->declBus(c+601,"cnt", false,-1, 15,0);
    tracep->declBit(c+602,"cnt_zero", false,-1);
    tracep->declBit(c+603,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1116,"Tp", false,-1, 31,0);
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"rst", false,-1);
    tracep->declBus(c+907,"latch", false,-1, 3,0);
    tracep->declBus(c+775,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+592,"len", false,-1, 6,0);
    tracep->declBit(c+594,"lsb", false,-1);
    tracep->declBit(c+593,"go", false,-1);
    tracep->declBit(c+598,"pos_edge", false,-1);
    tracep->declBit(c+599,"neg_edge", false,-1);
    tracep->declBit(c+590,"rx_negedge", false,-1);
    tracep->declBit(c+591,"tx_negedge", false,-1);
    tracep->declBit(c+597,"tip", false,-1);
    tracep->declBit(c+600,"last", false,-1);
    tracep->declBus(c+774,"p_in", false,-1, 31,0);
    tracep->declArray(c+586,"p_out", false,-1, 127,0);
    tracep->declBit(c+526,"s_clk", false,-1);
    tracep->declBit(c+1048,"s_in", false,-1);
    tracep->declBit(c+1047,"s_out", false,-1);
    tracep->declBus(c+604,"cnt", false,-1, 7,0);
    tracep->declArray(c+586,"data", false,-1, 127,0);
    tracep->declBus(c+605,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+606,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+607,"rx_clk", false,-1);
    tracep->declBit(c+608,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+784,"auto_in_psel", false,-1);
    tracep->declBit(c+785,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+781,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+786,"auto_in_pready", false,-1);
    tracep->declBit(c+1068,"auto_in_pslverr", false,-1);
    tracep->declBus(c+911,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1045,"uart_rx", false,-1);
    tracep->declBit(c+1046,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+784,"in_psel", false,-1);
    tracep->declBit(c+785,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+786,"in_pready", false,-1);
    tracep->declBit(c+1068,"in_pslverr", false,-1);
    tracep->declBus(c+879,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+911,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1045,"uart_rx", false,-1);
    tracep->declBit(c+1046,"uart_tx", false,-1);
    tracep->declBit(c+609,"rtsn", false,-1);
    tracep->declBit(c+1068,"ctsn", false,-1);
    tracep->declBit(c+610,"dtr_pad_o", false,-1);
    tracep->declBit(c+1068,"dsr_pad_i", false,-1);
    tracep->declBit(c+1068,"ri_pad_i", false,-1);
    tracep->declBit(c+1068,"dcd_pad_i", false,-1);
    tracep->declBit(c+611,"interrupt", false,-1);
    tracep->declBit(c+1059,"reg_we", false,-1);
    tracep->declBit(c+1060,"reg_re", false,-1);
    tracep->declBus(c+908,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+909,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+442,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1024,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+612,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBus(c+908,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+910,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1024,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1059,"wb_we_i", false,-1);
    tracep->declBit(c+1060,"wb_re_i", false,-1);
    tracep->declBit(c+1046,"stx_pad_o", false,-1);
    tracep->declBit(c+1045,"srx_pad_i", false,-1);
    tracep->declBus(c+1107,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+612,"rts_pad_o", false,-1);
    tracep->declBit(c+610,"dtr_pad_o", false,-1);
    tracep->declBit(c+611,"int_o", false,-1);
    tracep->declBit(c+613,"enable", false,-1);
    tracep->declBit(c+614,"srx_pad", false,-1);
    tracep->declBus(c+615,"ier", false,-1, 3,0);
    tracep->declBus(c+616,"iir", false,-1, 3,0);
    tracep->declBus(c+617,"fcr", false,-1, 1,0);
    tracep->declBus(c+618,"mcr", false,-1, 4,0);
    tracep->declBus(c+619,"lcr", false,-1, 7,0);
    tracep->declBus(c+620,"msr", false,-1, 7,0);
    tracep->declBus(c+621,"dl", false,-1, 15,0);
    tracep->declBus(c+622,"scratch", false,-1, 7,0);
    tracep->declBit(c+623,"start_dlc", false,-1);
    tracep->declBit(c+624,"lsr_mask_d", false,-1);
    tracep->declBit(c+625,"msi_reset", false,-1);
    tracep->declBus(c+626,"dlc", false,-1, 15,0);
    tracep->declBus(c+627,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+628,"rx_reset", false,-1);
    tracep->declBit(c+629,"tx_reset", false,-1);
    tracep->declBit(c+630,"dlab", false,-1);
    tracep->declBit(c+1082,"cts_pad_i", false,-1);
    tracep->declBit(c+1068,"dsr_pad_i", false,-1);
    tracep->declBit(c+1068,"ri_pad_i", false,-1);
    tracep->declBit(c+1068,"dcd_pad_i", false,-1);
    tracep->declBit(c+631,"loopback", false,-1);
    tracep->declBit(c+1068,"cts", false,-1);
    tracep->declBit(c+1082,"dsr", false,-1);
    tracep->declBit(c+1082,"ri", false,-1);
    tracep->declBit(c+1082,"dcd", false,-1);
    tracep->declBit(c+632,"cts_c", false,-1);
    tracep->declBit(c+633,"dsr_c", false,-1);
    tracep->declBit(c+634,"ri_c", false,-1);
    tracep->declBit(c+635,"dcd_c", false,-1);
    tracep->declBus(c+636,"lsr", false,-1, 7,0);
    tracep->declBit(c+637,"lsr0", false,-1);
    tracep->declBit(c+638,"lsr1", false,-1);
    tracep->declBit(c+639,"lsr2", false,-1);
    tracep->declBit(c+640,"lsr3", false,-1);
    tracep->declBit(c+641,"lsr4", false,-1);
    tracep->declBit(c+642,"lsr5", false,-1);
    tracep->declBit(c+643,"lsr6", false,-1);
    tracep->declBit(c+644,"lsr7", false,-1);
    tracep->declBit(c+645,"lsr0r", false,-1);
    tracep->declBit(c+646,"lsr1r", false,-1);
    tracep->declBit(c+647,"lsr2r", false,-1);
    tracep->declBit(c+648,"lsr3r", false,-1);
    tracep->declBit(c+649,"lsr4r", false,-1);
    tracep->declBit(c+650,"lsr5r", false,-1);
    tracep->declBit(c+651,"lsr6r", false,-1);
    tracep->declBit(c+652,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+653,"rls_int", false,-1);
    tracep->declBit(c+654,"rda_int", false,-1);
    tracep->declBit(c+655,"ti_int", false,-1);
    tracep->declBit(c+656,"thre_int", false,-1);
    tracep->declBit(c+657,"ms_int", false,-1);
    tracep->declBit(c+658,"tf_push", false,-1);
    tracep->declBit(c+659,"rf_pop", false,-1);
    tracep->declBus(c+1061,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+660,"rf_error_bit", false,-1);
    tracep->declBit(c+638,"rf_overrun", false,-1);
    tracep->declBit(c+661,"rf_push_pulse", false,-1);
    tracep->declBus(c+662,"rf_count", false,-1, 4,0);
    tracep->declBus(c+663,"tf_count", false,-1, 4,0);
    tracep->declBus(c+664,"tstate", false,-1, 2,0);
    tracep->declBus(c+665,"rstate", false,-1, 3,0);
    tracep->declBus(c+666,"counter_t", false,-1, 9,0);
    tracep->declBit(c+667,"thre_set_en", false,-1);
    tracep->declBus(c+668,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+669,"block_value", false,-1, 7,0);
    tracep->declBit(c+670,"serial_out", false,-1);
    tracep->declBit(c+671,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+672,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+673,"lsr0_d", false,-1);
    tracep->declBit(c+674,"lsr1_d", false,-1);
    tracep->declBit(c+675,"lsr2_d", false,-1);
    tracep->declBit(c+676,"lsr3_d", false,-1);
    tracep->declBit(c+677,"lsr4_d", false,-1);
    tracep->declBit(c+678,"lsr5_d", false,-1);
    tracep->declBit(c+679,"lsr6_d", false,-1);
    tracep->declBit(c+680,"lsr7_d", false,-1);
    tracep->declBit(c+681,"rls_int_d", false,-1);
    tracep->declBit(c+682,"thre_int_d", false,-1);
    tracep->declBit(c+683,"ms_int_d", false,-1);
    tracep->declBit(c+684,"ti_int_d", false,-1);
    tracep->declBit(c+685,"rda_int_d", false,-1);
    tracep->declBit(c+686,"rls_int_rise", false,-1);
    tracep->declBit(c+687,"thre_int_rise", false,-1);
    tracep->declBit(c+688,"ms_int_rise", false,-1);
    tracep->declBit(c+689,"ti_int_rise", false,-1);
    tracep->declBit(c+690,"rda_int_rise", false,-1);
    tracep->declBit(c+691,"rls_int_pnd", false,-1);
    tracep->declBit(c+692,"rda_int_pnd", false,-1);
    tracep->declBit(c+693,"thre_int_pnd", false,-1);
    tracep->declBit(c+694,"ms_int_pnd", false,-1);
    tracep->declBit(c+695,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1116,"Tp", false,-1, 31,0);
    tracep->declBus(c+1116,"width", false,-1, 31,0);
    tracep->declBus(c+1085,"init_value", false,-1, 0,0);
    tracep->declBit(c+1026,"rst_i", false,-1);
    tracep->declBit(c+1025,"clk_i", false,-1);
    tracep->declBit(c+1068,"stage1_rst_i", false,-1);
    tracep->declBit(c+1082,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1045,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+614,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+696,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBus(c+619,"lcr", false,-1, 7,0);
    tracep->declBit(c+659,"rf_pop", false,-1);
    tracep->declBit(c+671,"srx_pad_i", false,-1);
    tracep->declBit(c+613,"enable", false,-1);
    tracep->declBit(c+628,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+666,"counter_t", false,-1, 9,0);
    tracep->declBus(c+662,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1061,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+638,"rf_overrun", false,-1);
    tracep->declBit(c+660,"rf_error_bit", false,-1);
    tracep->declBus(c+665,"rstate", false,-1, 3,0);
    tracep->declBit(c+661,"rf_push_pulse", false,-1);
    tracep->declBus(c+697,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+698,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+699,"rshift", false,-1, 7,0);
    tracep->declBit(c+700,"rparity", false,-1);
    tracep->declBit(c+701,"rparity_error", false,-1);
    tracep->declBit(c+702,"rframing_error", false,-1);
    tracep->declBit(c+703,"rbit_in", false,-1);
    tracep->declBit(c+704,"rparity_xor", false,-1);
    tracep->declBus(c+705,"counter_b", false,-1, 7,0);
    tracep->declBit(c+706,"rf_push_q", false,-1);
    tracep->declBus(c+707,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+708,"rf_push", false,-1);
    tracep->declBit(c+709,"break_error", false,-1);
    tracep->declBit(c+710,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+711,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+712,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+713,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1078,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1105,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1104,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1100,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1102,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1101,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1103,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1099,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1107,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1108,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1117,"sr_push", false,-1, 3,0);
    tracep->declBus(c+714,"toc_value", false,-1, 9,0);
    tracep->declBus(c+715,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1118,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1110,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1094,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1119,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBit(c+661,"push", false,-1);
    tracep->declBit(c+659,"pop", false,-1);
    tracep->declBus(c+707,"data_in", false,-1, 10,0);
    tracep->declBit(c+628,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1061,"data_out", false,-1, 10,0);
    tracep->declBit(c+638,"overrun", false,-1);
    tracep->declBus(c+662,"count", false,-1, 4,0);
    tracep->declBit(c+660,"error_bit", false,-1);
    tracep->declBus(c+1062,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+716+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+732,"top", false,-1, 3,0);
    tracep->declBus(c+733,"bottom", false,-1, 3,0);
    tracep->declBus(c+734,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+735,"word0", false,-1, 2,0);
    tracep->declBus(c+736,"word1", false,-1, 2,0);
    tracep->declBus(c+737,"word2", false,-1, 2,0);
    tracep->declBus(c+738,"word3", false,-1, 2,0);
    tracep->declBus(c+739,"word4", false,-1, 2,0);
    tracep->declBus(c+740,"word5", false,-1, 2,0);
    tracep->declBus(c+741,"word6", false,-1, 2,0);
    tracep->declBus(c+742,"word7", false,-1, 2,0);
    tracep->declBus(c+743,"word8", false,-1, 2,0);
    tracep->declBus(c+744,"word9", false,-1, 2,0);
    tracep->declBus(c+745,"word10", false,-1, 2,0);
    tracep->declBus(c+746,"word11", false,-1, 2,0);
    tracep->declBus(c+747,"word12", false,-1, 2,0);
    tracep->declBus(c+748,"word13", false,-1, 2,0);
    tracep->declBus(c+749,"word14", false,-1, 2,0);
    tracep->declBus(c+750,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1094,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1115,"data_width", false,-1, 31,0);
    tracep->declBus(c+1110,"depth", false,-1, 31,0);
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+661,"we", false,-1);
    tracep->declBus(c+732,"a", false,-1, 3,0);
    tracep->declBus(c+733,"dpra", false,-1, 3,0);
    tracep->declBus(c+751,"di", false,-1, 7,0);
    tracep->declBus(c+1062,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+443+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBus(c+619,"lcr", false,-1, 7,0);
    tracep->declBit(c+658,"tf_push", false,-1);
    tracep->declBus(c+910,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+613,"enable", false,-1);
    tracep->declBit(c+629,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+670,"stx_pad_o", false,-1);
    tracep->declBus(c+664,"tstate", false,-1, 2,0);
    tracep->declBus(c+663,"tf_count", false,-1, 4,0);
    tracep->declBus(c+752,"counter", false,-1, 4,0);
    tracep->declBus(c+753,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+754,"shift_out", false,-1, 6,0);
    tracep->declBit(c+755,"stx_o_tmp", false,-1);
    tracep->declBit(c+756,"parity_xor", false,-1);
    tracep->declBit(c+757,"tf_pop", false,-1);
    tracep->declBit(c+758,"bit_out", false,-1);
    tracep->declBus(c+910,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1063,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+759,"tf_overrun", false,-1);
    tracep->declBus(c+1080,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1067,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1120,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1121,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1086,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1122,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1115,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1110,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1094,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1119,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+1026,"wb_rst_i", false,-1);
    tracep->declBit(c+658,"push", false,-1);
    tracep->declBit(c+757,"pop", false,-1);
    tracep->declBus(c+910,"data_in", false,-1, 7,0);
    tracep->declBit(c+629,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1063,"data_out", false,-1, 7,0);
    tracep->declBit(c+759,"overrun", false,-1);
    tracep->declBus(c+663,"count", false,-1, 4,0);
    tracep->declBus(c+760,"top", false,-1, 3,0);
    tracep->declBus(c+761,"bottom", false,-1, 3,0);
    tracep->declBus(c+762,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1094,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1115,"data_width", false,-1, 31,0);
    tracep->declBus(c+1110,"depth", false,-1, 31,0);
    tracep->declBit(c+1025,"clk", false,-1);
    tracep->declBit(c+658,"we", false,-1);
    tracep->declBus(c+760,"a", false,-1, 3,0);
    tracep->declBus(c+761,"dpra", false,-1, 3,0);
    tracep->declBus(c+910,"di", false,-1, 7,0);
    tracep->declBus(c+1063,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+459+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBit(c+778,"auto_in_psel", false,-1);
    tracep->declBit(c+476,"auto_in_penable", false,-1);
    tracep->declBit(c+773,"auto_in_pwrite", false,-1);
    tracep->declBus(c+779,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1067,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+774,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"auto_in_pready", false,-1);
    tracep->declBit(c+1070,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1071,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1039,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1040,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1041,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1042,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1043,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1044,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1025,"clock", false,-1);
    tracep->declBit(c+1026,"reset", false,-1);
    tracep->declBus(c+901,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+778,"in_psel", false,-1);
    tracep->declBit(c+476,"in_penable", false,-1);
    tracep->declBus(c+1067,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+773,"in_pwrite", false,-1);
    tracep->declBus(c+774,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+775,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1069,"in_pready", false,-1);
    tracep->declBus(c+1071,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1070,"in_pslverr", false,-1);
    tracep->declBus(c+1039,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1040,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1041,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1042,"vga_hsync", false,-1);
    tracep->declBit(c+1043,"vga_vsync", false,-1);
    tracep->declBit(c+1044,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+526,"sck", false,-1);
    tracep->declBit(c+763,"ss", false,-1);
    tracep->declBit(c+1047,"mosi", false,-1);
    tracep->declBit(c+1082,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+526,"sck", false,-1);
    tracep->declBit(c+764,"ss", false,-1);
    tracep->declBit(c+1047,"mosi", false,-1);
    tracep->declBit(c+1048,"miso", false,-1);
    tracep->declBit(c+764,"reset", false,-1);
    tracep->declBus(c+765,"state", false,-1, 2,0);
    tracep->declBus(c+766,"counter", false,-1, 7,0);
    tracep->declBus(c+767,"cmd", false,-1, 7,0);
    tracep->declBus(c+768,"addr", false,-1, 23,0);
    tracep->declBus(c+769,"data", false,-1, 31,0);
    tracep->declBit(c+770,"ren", false,-1);
    tracep->declBus(c+1064,"rdata", false,-1, 31,0);
    tracep->declBus(c+1065,"raddr", false,-1, 31,0);
    tracep->declBus(c+1066,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+526,"clock", false,-1);
    tracep->declBit(c+770,"valid", false,-1);
    tracep->declBus(c+767,"cmd", false,-1, 7,0);
    tracep->declBus(c+1065,"addr", false,-1, 31,0);
    tracep->declBus(c+1064,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1049,"sck", false,-1);
    tracep->declBit(c+1050,"ce_n", false,-1);
    tracep->declBus(c+916,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1051,"clk", false,-1);
    tracep->declBit(c+528,"cke", false,-1);
    tracep->declBit(c+529,"cs", false,-1);
    tracep->declBit(c+530,"ras", false,-1);
    tracep->declBit(c+531,"cas", false,-1);
    tracep->declBit(c+532,"we", false,-1);
    tracep->declBus(c+533,"a", false,-1, 12,0);
    tracep->declBus(c+534,"ba", false,-1, 1,0);
    tracep->declBus(c+535,"dqm", false,-1, 1,0);
    tracep->declBus(c+536,"dq", false,-1, 15,0);
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
    bufp->fullIData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_aw_awaddr),32);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0));
    bufp->fullIData(oldp+274,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_4)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+275,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_4)
                                ? 0U : (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg))),4);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0));
    bufp->fullBit(oldp+277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state_reg));
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_snpc),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_pc),32);
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mem_ren));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mem_wen));
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_m_rmask),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_m_wmask),32);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_reg_waddr),5);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_reg_wen));
    bufp->fullIData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_src1),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_src2),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_csr),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_csr_a5),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mstatus),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_imm),32);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_alu_op),5);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_inst_type),4);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_il_us));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state_reg));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_snpc),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_pc),32);
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mem_ren));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mem_wen));
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_m_rmask),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_m_wmask),32);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_reg_waddr),5);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_reg_wen));
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_src1),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_src2),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_csr),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_csr_a5),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mstatus),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_imm),32);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type),4);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_il_us));
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_alu_result),32);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result_reg),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_snpc),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_pc),32);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_waddr),5);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen));
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_src1),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_csr),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_csr_a5),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mstatus),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_imm),32);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type),4);
    bufp->fullIData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_rdata),32);
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_bresp),2);
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__m2EXUstate));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state_reg));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid_reg));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rready_reg));
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rvalid_reg));
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__m_wen_reg_delay));
    bufp->fullIData(oldp+351,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_ren_reg)
                                : 0U)),32);
    bufp->fullBit(oldp+352,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid_reg))));
    bufp->fullIData(oldp+353,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+354,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_1),32);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_2));
    bufp->fullIData(oldp+360,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+361,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+365,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+369,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+370,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullQData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+379,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullBit(oldp+383,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type))))));
    bufp->fullIData(oldp+384,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_pc)),32);
    bufp->fullBit(oldp+385,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type))
                                     ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen))
                                     : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen))))))));
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+478,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+479,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+480,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+481,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg
                                    : 0U) : 2U)),32);
    bufp->fullCData(oldp+482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                    : 0U) : 3U)),2);
    bufp->fullIData(oldp+483,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+486,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullIData(oldp+487,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+488,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+489,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+490,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+524,(((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__rvalid_reg) 
                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3))));
    bufp->fullBit(oldp+525,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__delay_r__DOT__counter))))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+529,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+530,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+532,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+536,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+538,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+543,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+544,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+548,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+553,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+559,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+590,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+591,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+592,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+594,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+595,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+596,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+600,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+602,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+603,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+605,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+609,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+610,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+612,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+632,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+633,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+634,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+635,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+636,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+640,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+660,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+667,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+686,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+687,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+688,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+689,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+690,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+709,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+710,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+711,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+712,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+713,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+715,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+734,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+751,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+762,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+763,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+770,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+777,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+779,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+780,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+781,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+782,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+786,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+816,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+827,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+828,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+829,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+830,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+831,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+832,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+833,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+836,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+838,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+839,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+844,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inv_flag));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+855,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__m2EXUstate) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg));
    bufp->fullIData(oldp+859,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0)),32);
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0),32);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+862,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+864,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_out2ifu_valid));
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__m2EXUstate));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_en));
    bufp->fullIData(oldp+879,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+880,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+888,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+889,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+890,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+891,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+892,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+893,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+898,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+899,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+900,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+901,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+902,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+905,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+906,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+908,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+911,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+912,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h0042779b__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0))));
    bufp->fullBit(oldp+913,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullCData(oldp+916,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+992,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+993,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+994,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1001,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1002,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_ifu_axi_r_rready_0));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_out2wbu_valid_0));
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3),32);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1025,(vlSelf->clock));
    bufp->fullBit(oldp+1026,(vlSelf->reset));
    bufp->fullSData(oldp+1027,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1028,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1029,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1030,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1031,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1032,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1033,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1034,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1035,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1036,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1037,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1038,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1039,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1040,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1041,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1042,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1043,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1044,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1045,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1046,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1048,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1050,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1051,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1052,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullCData(oldp+1053,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1055,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0)
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                               : 0U) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                                   : 0U)
                                                  : 3U)
                                              : 0U)))),2);
    bufp->fullCData(oldp+1056,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_2)
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
    bufp->fullBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1058,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1061,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1065,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1067,(1U),3);
    bufp->fullBit(oldp+1068,(0U));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1078,(0U),4);
    bufp->fullCData(oldp+1079,(0U),8);
    bufp->fullCData(oldp+1080,(0U),3);
    bufp->fullCData(oldp+1081,(0U),2);
    bufp->fullBit(oldp+1082,(1U));
    bufp->fullIData(oldp+1083,(0U),32);
    bufp->fullBit(oldp+1084,(0U));
    bufp->fullBit(oldp+1085,(1U));
    bufp->fullCData(oldp+1086,(4U),3);
    bufp->fullCData(oldp+1087,(0x1bU),8);
    bufp->fullCData(oldp+1088,(0xebU),8);
    bufp->fullCData(oldp+1089,(0x38U),8);
    bufp->fullIData(oldp+1090,(0x64U),32);
    bufp->fullIData(oldp+1091,(0x18U),32);
    bufp->fullIData(oldp+1092,(9U),32);
    bufp->fullIData(oldp+1093,(2U),32);
    bufp->fullIData(oldp+1094,(4U),32);
    bufp->fullIData(oldp+1095,(0xdU),32);
    bufp->fullIData(oldp+1096,(0x2000U),32);
    bufp->fullIData(oldp+1097,(0x2710U),32);
    bufp->fullIData(oldp+1098,(0x30cU),32);
    bufp->fullCData(oldp+1099,(7U),4);
    bufp->fullCData(oldp+1100,(3U),4);
    bufp->fullCData(oldp+1101,(5U),4);
    bufp->fullCData(oldp+1102,(4U),4);
    bufp->fullCData(oldp+1103,(6U),4);
    bufp->fullCData(oldp+1104,(2U),4);
    bufp->fullCData(oldp+1105,(1U),4);
    bufp->fullSData(oldp+1106,(0x21U),13);
    bufp->fullCData(oldp+1107,(8U),4);
    bufp->fullCData(oldp+1108,(9U),4);
    bufp->fullIData(oldp+1109,(0xaU),32);
    bufp->fullIData(oldp+1110,(0x10U),32);
    bufp->fullIData(oldp+1111,(6U),32);
    bufp->fullIData(oldp+1112,(0x11U),32);
    bufp->fullIData(oldp+1113,(0x30000000U),32);
    bufp->fullIData(oldp+1114,(0x3fffffffU),32);
    bufp->fullIData(oldp+1115,(8U),32);
    bufp->fullIData(oldp+1116,(1U),32);
    bufp->fullCData(oldp+1117,(0xaU),4);
    bufp->fullIData(oldp+1118,(0xbU),32);
    bufp->fullIData(oldp+1119,(5U),32);
    bufp->fullCData(oldp+1120,(2U),3);
    bufp->fullCData(oldp+1121,(3U),3);
    bufp->fullCData(oldp+1122,(5U),3);
}
