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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+1004,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1005,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1006,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1007,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1008,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1009,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1010,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1011,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1012,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1013,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1014,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1015,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1016,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1019,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1020,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1021,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1022,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1023,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+1004,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1005,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1006,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1007,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1008,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1009,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1010,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1011,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1012,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1013,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1014,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1015,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1016,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1019,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1020,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1021,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1022,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1023,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+500,"spi_sck", false,-1);
    tracep->declBus(c+501,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1024,"spi_mosi", false,-1);
    tracep->declBit(c+1025,"spi_miso", false,-1);
    tracep->declBit(c+1022,"uart_rx", false,-1);
    tracep->declBit(c+1023,"uart_tx", false,-1);
    tracep->declBit(c+1026,"psram_sck", false,-1);
    tracep->declBit(c+1027,"psram_ce_n", false,-1);
    tracep->declBus(c+893,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1028,"sdram_clk", false,-1);
    tracep->declBit(c+502,"sdram_cke", false,-1);
    tracep->declBit(c+503,"sdram_cs", false,-1);
    tracep->declBit(c+504,"sdram_ras", false,-1);
    tracep->declBit(c+505,"sdram_cas", false,-1);
    tracep->declBit(c+506,"sdram_we", false,-1);
    tracep->declBus(c+507,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1004,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1005,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1006,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1007,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1008,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1009,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1010,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1011,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1012,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1014,"ps2_clk", false,-1);
    tracep->declBit(c+1015,"ps2_data", false,-1);
    tracep->declBus(c+1016,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1017,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1018,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1019,"vga_hsync", false,-1);
    tracep->declBit(c+1020,"vga_vsync", false,-1);
    tracep->declBit(c+1021,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+745,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+746,"in_psel", false,-1);
    tracep->declBit(c+7,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+894,"in_pready", false,-1);
    tracep->declBus(c+895,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+750,"in_pslverr", false,-1);
    tracep->declBus(c+745,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+746,"out_psel", false,-1);
    tracep->declBit(c+7,"out_penable", false,-1);
    tracep->declBus(c+1046,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"out_pwrite", false,-1);
    tracep->declBus(c+748,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+894,"out_pready", false,-1);
    tracep->declBus(c+895,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+750,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+746,"auto_in_psel", false,-1);
    tracep->declBit(c+7,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+745,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+894,"auto_in_pready", false,-1);
    tracep->declBit(c+750,"auto_in_pslverr", false,-1);
    tracep->declBus(c+895,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+751,"auto_out_6_psel", false,-1);
    tracep->declBit(c+448,"auto_out_6_penable", false,-1);
    tracep->declBit(c+747,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+745,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1047,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+512,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+752,"auto_out_5_psel", false,-1);
    tracep->declBit(c+449,"auto_out_5_penable", false,-1);
    tracep->declBit(c+747,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+753,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1046,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1049,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1050,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+754,"auto_out_4_psel", false,-1);
    tracep->declBit(c+450,"auto_out_4_penable", false,-1);
    tracep->declBit(c+747,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+755,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1052,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1053,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+756,"auto_out_3_psel", false,-1);
    tracep->declBit(c+451,"auto_out_3_penable", false,-1);
    tracep->declBit(c+747,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+755,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1054,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1055,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1056,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+757,"auto_out_2_psel", false,-1);
    tracep->declBit(c+452,"auto_out_2_penable", false,-1);
    tracep->declBit(c+747,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+745,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1047,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+8,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+758,"auto_out_1_psel", false,-1);
    tracep->declBit(c+759,"auto_out_1_penable", false,-1);
    tracep->declBit(c+747,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+755,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+760,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1047,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+887,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+761,"auto_out_0_psel", false,-1);
    tracep->declBit(c+762,"auto_out_0_penable", false,-1);
    tracep->declBit(c+747,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+753,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1046,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1047,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+514,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+763,"sel_0", false,-1);
    tracep->declBit(c+764,"sel_1", false,-1);
    tracep->declBit(c+765,"sel_2", false,-1);
    tracep->declBit(c+766,"sel_3", false,-1);
    tracep->declBit(c+767,"sel_4", false,-1);
    tracep->declBit(c+768,"sel_5", false,-1);
    tracep->declBit(c+769,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+770,"auto_in_awready", false,-1);
    tracep->declBit(c+771,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+770,"auto_in_wready", false,-1);
    tracep->declBit(c+773,"auto_in_wvalid", false,-1);
    tracep->declBus(c+774,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+896,"auto_in_bready", false,-1);
    tracep->declBit(c+897,"auto_in_bvalid", false,-1);
    tracep->declBus(c+11,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+776,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+777,"auto_in_arready", false,-1);
    tracep->declBit(c+778,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+898,"auto_in_rready", false,-1);
    tracep->declBit(c+899,"auto_in_rvalid", false,-1);
    tracep->declBus(c+14,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+463,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+776,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+746,"auto_out_psel", false,-1);
    tracep->declBit(c+7,"auto_out_penable", false,-1);
    tracep->declBit(c+747,"auto_out_pwrite", false,-1);
    tracep->declBus(c+745,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+748,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+894,"auto_out_pready", false,-1);
    tracep->declBit(c+750,"auto_out_pslverr", false,-1);
    tracep->declBus(c+895,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+7,"nodeOut_penable", false,-1);
    tracep->declBus(c+15,"state", false,-1, 1,0);
    tracep->declBit(c+777,"accept_read", false,-1);
    tracep->declBit(c+770,"accept_write", false,-1);
    tracep->declBit(c+16,"is_write_r", false,-1);
    tracep->declBit(c+747,"is_write", false,-1);
    tracep->declBus(c+14,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+11,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+17,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+18,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+19,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+20,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+780,"resp", false,-1, 1,0);
    tracep->declBus(c+21,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+776,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+899,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+22,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+897,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+781,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1057,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+782,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+783,"auto_in_wvalid", false,-1);
    tracep->declBus(c+784,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_in_wlast", false,-1);
    tracep->declBit(c+888,"auto_in_bready", false,-1);
    tracep->declBit(c+900,"auto_in_bvalid", false,-1);
    tracep->declBus(c+901,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+464,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+786,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1057,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+787,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+903,"auto_in_rvalid", false,-1);
    tracep->declBus(c+904,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_in_rlast", false,-1);
    tracep->declBit(c+906,"auto_out_awready", false,-1);
    tracep->declBit(c+788,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+907,"auto_out_wready", false,-1);
    tracep->declBit(c+789,"auto_out_wvalid", false,-1);
    tracep->declBus(c+774,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+790,"auto_out_wlast", false,-1);
    tracep->declBit(c+908,"auto_out_bready", false,-1);
    tracep->declBit(c+909,"auto_out_bvalid", false,-1);
    tracep->declBus(c+901,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+911,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+912,"auto_out_arready", false,-1);
    tracep->declBit(c+791,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+902,"auto_out_rready", false,-1);
    tracep->declBit(c+903,"auto_out_rvalid", false,-1);
    tracep->declBus(c+904,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+466,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+913,"auto_out_rlast", false,-1);
    tracep->declBit(c+789,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+28,"w_idle", false,-1);
    tracep->declBit(c+914,"in_awready", false,-1);
    tracep->declBit(c+29,"busy", false,-1);
    tracep->declBus(c+30,"r_addr", false,-1, 31,0);
    tracep->declBus(c+31,"r_len", false,-1, 7,0);
    tracep->declBus(c+32,"len", false,-1, 7,0);
    tracep->declBus(c+792,"addr", false,-1, 31,0);
    tracep->declBit(c+33,"busy_1", false,-1);
    tracep->declBus(c+34,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+35,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+36,"len_1", false,-1, 7,0);
    tracep->declBus(c+793,"addr_1", false,-1, 31,0);
    tracep->declBit(c+37,"wbeats_latched", false,-1);
    tracep->declBit(c+788,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+794,"wbeats_valid", false,-1);
    tracep->declBus(c+38,"w_counter", false,-1, 8,0);
    tracep->declBus(c+795,"w_todo", false,-1, 8,0);
    tracep->declBit(c+790,"w_last", false,-1);
    tracep->declBit(c+908,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+25,"io_enq_ready", false,-1);
    tracep->declBit(c+786,"io_enq_valid", false,-1);
    tracep->declBus(c+1057,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+787,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1058,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1059,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1060,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+915,"io_deq_ready", false,-1);
    tracep->declBit(c+791,"io_deq_valid", false,-1);
    tracep->declBus(c+12,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+796,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+55,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+13,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+56,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+57,"ram", false,-1, 48,0);
    tracep->declBit(c+59,"full", false,-1);
    tracep->declBit(c+791,"io_deq_valid_0", false,-1);
    tracep->declBit(c+916,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+23,"io_enq_ready", false,-1);
    tracep->declBit(c+781,"io_enq_valid", false,-1);
    tracep->declBus(c+1057,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+782,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1058,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1059,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1060,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+917,"io_deq_ready", false,-1);
    tracep->declBit(c+797,"io_deq_valid", false,-1);
    tracep->declBus(c+9,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+798,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+60,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+10,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+61,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+62,"ram", false,-1, 48,0);
    tracep->declBit(c+64,"full", false,-1);
    tracep->declBit(c+797,"io_deq_valid_0", false,-1);
    tracep->declBit(c+918,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+24,"io_enq_ready", false,-1);
    tracep->declBit(c+783,"io_enq_valid", false,-1);
    tracep->declBus(c+784,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+785,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1047,"io_enq_bits_last", false,-1);
    tracep->declBit(c+919,"io_deq_ready", false,-1);
    tracep->declBit(c+799,"io_deq_valid", false,-1);
    tracep->declBus(c+774,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+775,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+65,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+66,"ram", false,-1, 36,0);
    tracep->declBit(c+68,"full", false,-1);
    tracep->declBit(c+799,"io_deq_valid_0", false,-1);
    tracep->declBit(c+920,"do_enq", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+921,"auto_in_awready", false,-1);
    tracep->declBit(c+800,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+801,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+889,"auto_in_wready", false,-1);
    tracep->declBit(c+802,"auto_in_wvalid", false,-1);
    tracep->declBus(c+774,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_in_bready", false,-1);
    tracep->declBit(c+69,"auto_in_bvalid", false,-1);
    tracep->declBus(c+70,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+923,"auto_in_arready", false,-1);
    tracep->declBit(c+803,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+804,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+924,"auto_in_rready", false,-1);
    tracep->declBit(c+72,"auto_in_rvalid", false,-1);
    tracep->declBus(c+73,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+923,"nodeIn_arready", false,-1);
    tracep->declBit(c+921,"nodeIn_awready", false,-1);
    tracep->declBit(c+805,"w_sel0", false,-1);
    tracep->declBit(c+69,"w_full", false,-1);
    tracep->declBus(c+70,"w_id", false,-1, 3,0);
    tracep->declBit(c+76,"r_sel1", false,-1);
    tracep->declBit(c+77,"w_sel1", false,-1);
    tracep->declBit(c+72,"r_full", false,-1);
    tracep->declBus(c+73,"r_id", false,-1, 3,0);
    tracep->declBit(c+925,"ren", false,-1);
    tracep->declBit(c+78,"rdata_REG", false,-1);
    tracep->declBus(c+79,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+80,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+81,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+82,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+806,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+1002,"R0_clk", false,-1);
    tracep->declBus(c+83,"R0_data", false,-1, 31,0);
    tracep->declBus(c+807,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+926,"W0_en", false,-1);
    tracep->declBit(c+1002,"W0_clk", false,-1);
    tracep->declBus(c+774,"W0_data", false,-1, 31,0);
    tracep->declBus(c+775,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+781,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1057,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+782,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_wready", false,-1);
    tracep->declBit(c+783,"auto_in_wvalid", false,-1);
    tracep->declBus(c+784,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_in_wlast", false,-1);
    tracep->declBit(c+888,"auto_in_bready", false,-1);
    tracep->declBit(c+900,"auto_in_bvalid", false,-1);
    tracep->declBus(c+901,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+464,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_arready", false,-1);
    tracep->declBit(c+786,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1057,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+787,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+903,"auto_in_rvalid", false,-1);
    tracep->declBus(c+904,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_in_rlast", false,-1);
    tracep->declBit(c+23,"auto_out_awready", false,-1);
    tracep->declBit(c+781,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1057,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+782,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_out_wready", false,-1);
    tracep->declBit(c+783,"auto_out_wvalid", false,-1);
    tracep->declBus(c+784,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_out_wlast", false,-1);
    tracep->declBit(c+888,"auto_out_bready", false,-1);
    tracep->declBit(c+900,"auto_out_bvalid", false,-1);
    tracep->declBus(c+901,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+464,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_out_arready", false,-1);
    tracep->declBit(c+786,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1057,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+787,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"auto_out_rready", false,-1);
    tracep->declBit(c+903,"auto_out_rvalid", false,-1);
    tracep->declBus(c+904,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+927,"auto_in_awready", false,-1);
    tracep->declBit(c+808,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+907,"auto_in_wready", false,-1);
    tracep->declBit(c+789,"auto_in_wvalid", false,-1);
    tracep->declBus(c+774,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+790,"auto_in_wlast", false,-1);
    tracep->declBit(c+908,"auto_in_bready", false,-1);
    tracep->declBit(c+909,"auto_in_bvalid", false,-1);
    tracep->declBus(c+901,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+928,"auto_in_arready", false,-1);
    tracep->declBit(c+809,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+903,"auto_in_rvalid", false,-1);
    tracep->declBus(c+904,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+913,"auto_in_rlast", false,-1);
    tracep->declBit(c+921,"auto_out_2_awready", false,-1);
    tracep->declBit(c+800,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+801,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+889,"auto_out_2_wready", false,-1);
    tracep->declBit(c+802,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+774,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+922,"auto_out_2_bready", false,-1);
    tracep->declBit(c+69,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+70,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+71,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+923,"auto_out_2_arready", false,-1);
    tracep->declBit(c+803,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+804,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+924,"auto_out_2_rready", false,-1);
    tracep->declBit(c+72,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+73,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+74,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+75,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+810,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+811,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+84,"auto_out_1_arready", false,-1);
    tracep->declBit(c+812,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+467,"auto_out_1_rready", false,-1);
    tracep->declBit(c+85,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+86,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+770,"auto_out_0_awready", false,-1);
    tracep->declBit(c+771,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+770,"auto_out_0_wready", false,-1);
    tracep->declBit(c+773,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+774,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+896,"auto_out_0_bready", false,-1);
    tracep->declBit(c+897,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+11,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+776,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+777,"auto_out_0_arready", false,-1);
    tracep->declBit(c+778,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+898,"auto_out_0_rready", false,-1);
    tracep->declBit(c+899,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+14,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+463,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+776,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+909,"in_0_bvalid", false,-1);
    tracep->declBit(c+903,"in_0_rvalid", false,-1);
    tracep->declBit(c+927,"nodeIn_awready", false,-1);
    tracep->declBit(c+814,"requestARIO_0_0", false,-1);
    tracep->declBit(c+815,"requestARIO_0_1", false,-1);
    tracep->declBit(c+816,"requestARIO_0_2", false,-1);
    tracep->declBit(c+817,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+818,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+819,"requestAWIO_0_2", false,-1);
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
    tracep->declBit(c+820,"in_0_awvalid", false,-1);
    tracep->declBit(c+821,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+822,"in_0_wvalid", false,-1);
    tracep->declBit(c+121,"idle_3", false,-1);
    tracep->declBit(c+929,"anyValid", false,-1);
    tracep->declBus(c+930,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+122,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+931,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+932,"prefixOR_1", false,-1);
    tracep->declBit(c+933,"winner_3_1", false,-1);
    tracep->declBit(c+934,"winner_3_2", false,-1);
    tracep->declBit(c+123,"state_3_0", false,-1);
    tracep->declBit(c+124,"state_3_1", false,-1);
    tracep->declBit(c+125,"state_3_2", false,-1);
    tracep->declBit(c+935,"muxState_3_0", false,-1);
    tracep->declBit(c+936,"muxState_3_1", false,-1);
    tracep->declBit(c+937,"muxState_3_2", false,-1);
    tracep->declBit(c+126,"idle_4", false,-1);
    tracep->declBit(c+938,"anyValid_1", false,-1);
    tracep->declBus(c+939,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+127,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+940,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+941,"winner_4_0", false,-1);
    tracep->declBit(c+942,"winner_4_2", false,-1);
    tracep->declBit(c+128,"state_4_0", false,-1);
    tracep->declBit(c+129,"state_4_2", false,-1);
    tracep->declBit(c+943,"muxState_4_0", false,-1);
    tracep->declBit(c+944,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+130,"io_enq_ready", false,-1);
    tracep->declBit(c+821,"io_enq_valid", false,-1);
    tracep->declBus(c+823,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+945,"io_deq_ready", false,-1);
    tracep->declBit(c+824,"io_deq_valid", false,-1);
    tracep->declBus(c+825,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+131,"wrap", false,-1);
    tracep->declBit(c+132,"wrap_1", false,-1);
    tracep->declBit(c+133,"maybe_full", false,-1);
    tracep->declBit(c+134,"ptr_match", false,-1);
    tracep->declBit(c+135,"empty", false,-1);
    tracep->declBit(c+136,"full", false,-1);
    tracep->declBit(c+824,"io_deq_valid_0", false,-1);
    tracep->declBit(c+946,"do_deq", false,-1);
    tracep->declBit(c+947,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+132,"R0_addr", false,-1);
    tracep->declBit(c+1061,"R0_en", false,-1);
    tracep->declBit(c+1002,"R0_clk", false,-1);
    tracep->declBus(c+137,"R0_data", false,-1, 2,0);
    tracep->declBit(c+131,"W0_addr", false,-1);
    tracep->declBit(c+947,"W0_en", false,-1);
    tracep->declBit(c+1002,"W0_clk", false,-1);
    tracep->declBus(c+823,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+906,"auto_in_awready", false,-1);
    tracep->declBit(c+788,"auto_in_awvalid", false,-1);
    tracep->declBus(c+9,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+907,"auto_in_wready", false,-1);
    tracep->declBit(c+789,"auto_in_wvalid", false,-1);
    tracep->declBus(c+774,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+790,"auto_in_wlast", false,-1);
    tracep->declBit(c+908,"auto_in_bready", false,-1);
    tracep->declBit(c+909,"auto_in_bvalid", false,-1);
    tracep->declBus(c+901,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+911,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+912,"auto_in_arready", false,-1);
    tracep->declBit(c+791,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+27,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+903,"auto_in_rvalid", false,-1);
    tracep->declBus(c+904,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+466,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+913,"auto_in_rlast", false,-1);
    tracep->declBit(c+927,"auto_out_awready", false,-1);
    tracep->declBit(c+808,"auto_out_awvalid", false,-1);
    tracep->declBus(c+9,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+772,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+10,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+907,"auto_out_wready", false,-1);
    tracep->declBit(c+789,"auto_out_wvalid", false,-1);
    tracep->declBus(c+774,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+775,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+790,"auto_out_wlast", false,-1);
    tracep->declBit(c+908,"auto_out_bready", false,-1);
    tracep->declBit(c+909,"auto_out_bvalid", false,-1);
    tracep->declBus(c+901,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+928,"auto_out_arready", false,-1);
    tracep->declBit(c+809,"auto_out_arvalid", false,-1);
    tracep->declBus(c+12,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+779,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+902,"auto_out_rready", false,-1);
    tracep->declBit(c+903,"auto_out_rvalid", false,-1);
    tracep->declBus(c+904,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+913,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+468,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+948,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+144,"io_enq_ready", false,-1);
    tracep->declBit(c+469,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+949,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+470,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+950,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+471,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+951,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+156,"io_enq_ready", false,-1);
    tracep->declBit(c+472,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+952,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+473,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+953,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+164,"io_enq_ready", false,-1);
    tracep->declBit(c+474,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+954,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+168,"io_enq_ready", false,-1);
    tracep->declBit(c+475,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+955,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+172,"io_enq_ready", false,-1);
    tracep->declBit(c+476,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+956,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+176,"io_enq_ready", false,-1);
    tracep->declBit(c+477,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+180,"io_enq_ready", false,-1);
    tracep->declBit(c+478,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+958,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+479,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+959,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+480,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+960,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+481,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+961,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+482,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+962,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+483,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+963,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+484,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+964,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+485,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+965,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+486,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+966,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+487,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+967,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+488,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+968,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+489,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+969,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+970,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+491,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+971,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+972,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBit(c+26,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+494,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+974,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+975,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+496,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+976,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+497,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+498,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+499,"io_enq_valid", false,-1);
    tracep->declBit(c+27,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+979,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+23,"auto_master_out_awready", false,-1);
    tracep->declBit(c+781,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1057,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+782,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"auto_master_out_wready", false,-1);
    tracep->declBit(c+783,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+784,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+888,"auto_master_out_bready", false,-1);
    tracep->declBit(c+900,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+901,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+464,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_arready", false,-1);
    tracep->declBit(c+786,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1057,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+787,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1058,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"auto_master_out_rready", false,-1);
    tracep->declBit(c+903,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+904,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+465,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+1047,"io_interrupt", false,-1);
    tracep->declBit(c+23,"io_master_awready", false,-1);
    tracep->declBit(c+781,"io_master_awvalid", false,-1);
    tracep->declBus(c+782,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1057,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1058,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+24,"io_master_wready", false,-1);
    tracep->declBit(c+783,"io_master_wvalid", false,-1);
    tracep->declBus(c+784,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"io_master_wlast", false,-1);
    tracep->declBit(c+888,"io_master_bready", false,-1);
    tracep->declBit(c+900,"io_master_bvalid", false,-1);
    tracep->declBus(c+464,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+901,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+25,"io_master_arready", false,-1);
    tracep->declBit(c+786,"io_master_arvalid", false,-1);
    tracep->declBus(c+787,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1057,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1058,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"io_master_rready", false,-1);
    tracep->declBit(c+903,"io_master_rvalid", false,-1);
    tracep->declBus(c+1030,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+905,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+465,"io_master_rlast", false,-1);
    tracep->declBus(c+904,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1047,"io_slave_awready", false,-1);
    tracep->declBit(c+1047,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1062,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1057,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1058,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1047,"io_slave_wready", false,-1);
    tracep->declBit(c+1047,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1062,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1057,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"io_slave_wlast", false,-1);
    tracep->declBit(c+1047,"io_slave_bready", false,-1);
    tracep->declBit(c+1047,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1060,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1057,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1047,"io_slave_arready", false,-1);
    tracep->declBit(c+1047,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1062,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1057,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1058,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1047,"io_slave_rready", false,-1);
    tracep->declBit(c+1047,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1060,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1062,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1047,"io_slave_rlast", false,-1);
    tracep->declBus(c+1057,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+826,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+787,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+786,"io_axi_ar_arvalid", false,-1);
    tracep->declBit(c+25,"io_axi_ar_arready", false,-1);
    tracep->declBus(c+905,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1030,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+903,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+902,"io_axi_r_rready", false,-1);
    tracep->declBus(c+782,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+781,"io_axi_aw_awvalid", false,-1);
    tracep->declBit(c+23,"io_axi_aw_awready", false,-1);
    tracep->declBus(c+784,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+783,"io_axi_w_wvalid", false,-1);
    tracep->declBit(c+24,"io_axi_w_wready", false,-1);
    tracep->declBit(c+900,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+888,"io_axi_b_bready", false,-1);
    tracep->declBus(c+453,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+827,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1032,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1033,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+980,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+828,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+269,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+829,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+981,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1034,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+982,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+983,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+454,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+455,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+456,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+457,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+271,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+830,"io_lsu_axi_w_wready", false,-1);
    tracep->declBit(c+1035,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+984,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+272,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_sta", false,-1);
    tracep->declBus(c+458,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+831,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+832,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+890,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+891,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+985,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+892,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+833,"io_ifu_sta", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
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
    tracep->declBit(c+310,"m2IDUstate", false,-1);
    tracep->declBit(c+292,"state_reg", false,-1);
    tracep->declBus(c+311,"alu_result_reg", false,-1, 31,0);
    tracep->declBus(c+293,"lsu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+294,"lsu_data_pc", false,-1, 31,0);
    tracep->declBit(c+295,"lsu_data_mem_ren", false,-1);
    tracep->declBit(c+296,"lsu_data_mem_wen", false,-1);
    tracep->declBus(c+297,"lsu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+298,"lsu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+299,"lsu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+300,"lsu_data_reg_wen", false,-1);
    tracep->declBus(c+301,"lsu_data_src1", false,-1, 31,0);
    tracep->declBus(c+302,"lsu_data_src2", false,-1, 31,0);
    tracep->declBus(c+303,"lsu_data_csr", false,-1, 31,0);
    tracep->declBus(c+304,"lsu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+305,"lsu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+306,"lsu_data_imm", false,-1, 31,0);
    tracep->declBus(c+307,"lsu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+308,"lsu_data_il_us", false,-1);
    tracep->declBus(c+309,"lsu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+312,"io_src1", false,-1, 31,0);
    tracep->declBus(c+313,"io_src2", false,-1, 31,0);
    tracep->declBus(c+314,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+315,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+834,"io_ifu2in_ready", false,-1);
    tracep->declBit(c+834,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+835,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+836,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+837,"io_ifu2in_bits_inst", false,-1, 31,0);
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
    tracep->declBus(c+838,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+839,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+840,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+841,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+842,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+459,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+317,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+826,"io_inv_flag", false,-1);
    tracep->declBus(c+275,"exu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+276,"exu_data_pc", false,-1, 31,0);
    tracep->declBit(c+277,"exu_data_mem_ren", false,-1);
    tracep->declBit(c+278,"exu_data_mem_wen", false,-1);
    tracep->declBus(c+279,"exu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+280,"exu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+281,"exu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+282,"exu_data_reg_wen", false,-1);
    tracep->declBus(c+283,"exu_data_src1", false,-1, 31,0);
    tracep->declBus(c+284,"exu_data_src2", false,-1, 31,0);
    tracep->declBus(c+285,"exu_data_csr", false,-1, 31,0);
    tracep->declBus(c+286,"exu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+287,"exu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+288,"exu_data_imm", false,-1, 31,0);
    tracep->declBus(c+289,"exu_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+290,"exu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+291,"exu_data_il_us", false,-1);
    tracep->declBus(c+318,"in_data_snpc", false,-1, 31,0);
    tracep->declBus(c+319,"in_data_pc", false,-1, 31,0);
    tracep->declBus(c+843,"in_data_inst", false,-1, 31,0);
    tracep->declBit(c+320,"state", false,-1);
    tracep->declBit(c+274,"state_reg", false,-1);
    tracep->declBus(c+844,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+845,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+846,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+843,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+834,"io_out_ready", false,-1);
    tracep->declBit(c+834,"io_out_valid", false,-1);
    tracep->declBus(c+835,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+836,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+837,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+847,"io_exu2in_valid", false,-1);
    tracep->declBus(c+848,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+458,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+831,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+832,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+890,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+891,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+985,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+892,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+833,"io_ifu_sta", false,-1);
    tracep->declBus(c+836,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+834,"ready_reg", false,-1);
    tracep->declBit(c+321,"m2EXUstate", false,-1);
    tracep->declBit(c+849,"exu2in_reg", false,-1);
    tracep->declBus(c+850,"indata_dnpc", false,-1, 31,0);
    tracep->declBus(c+851,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+852,"inst_reg", false,-1, 31,0);
    tracep->declBus(c+322,"pc_reg", false,-1, 31,0);
    tracep->declBit(c+831,"arvalid_reg", false,-1);
    tracep->declBit(c+833,"sta_reg", false,-1);
    tracep->declBus(c+853,"pc_reg_REG", false,-1, 31,0);
    tracep->declBit(c+985,"io_ifu_axi_r_rready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
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
    tracep->declBit(c+986,"io_out2wbu_valid", false,-1);
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
    tracep->declBus(c+334,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+335,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+828,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+269,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+829,"io_lsu_axi_ar_arready", false,-1);
    tracep->declBus(c+981,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1034,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+982,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+983,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+456,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+457,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+271,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+830,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+454,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+270,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+455,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBit(c+1035,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+984,"io_lsu_axi_b_bready", false,-1);
    tracep->declBus(c+272,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+273,"io_lsu_sta", false,-1);
    tracep->declBit(c+984,"io_lsu_axi_b_bready_0", false,-1);
    tracep->declBit(c+983,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+336,"m2EXUstate", false,-1);
    tracep->declBit(c+337,"ready_reg", false,-1);
    tracep->declBit(c+338,"ready_reg_1", false,-1);
    tracep->declBit(c+339,"state_reg", false,-1);
    tracep->declBit(c+986,"io_out2wbu_valid_0", false,-1);
    tracep->declBit(c+340,"exu2in_valid", false,-1);
    tracep->declBus(c+341,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+342,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+269,"mem_ren_reg", false,-1);
    tracep->declBus(c+343,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+344,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+345,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+270,"awvalid_reg", false,-1);
    tracep->declBit(c+271,"wvalid_reg", false,-1);
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
    tracep->declBus(c+334,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+335,"wbu_data_alu_result", false,-1, 31,0);
    tracep->declBus(c+272,"io_lsu_addr_r", false,-1, 31,0);
    tracep->declBit(c+346,"sta_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBus(c+453,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+827,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+1032,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+1033,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+268,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+980,"io_axi_r_rready", false,-1);
    tracep->declBus(c+854,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+347,"mtime", false,-1, 63,0);
    tracep->declBus(c+349,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+268,"rvalid_reg", false,-1);
    tracep->declBus(c+350,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+351,"arvalid_reg", false,-1);
    tracep->declBit(c+987,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBus(c+460,"io_inData", false,-1, 31,0);
    tracep->declBit(c+461,"io_inValid", false,-1);
    tracep->declBus(c+352,"io_outData", false,-1, 31,0);
    tracep->declBit(c+462,"io_delayDone", false,-1);
    tracep->declBus(c+353,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+354,"counter", false,-1, 4,0);
    tracep->declBus(c+355,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+356,"io_csr_wen_2", false,-1);
    tracep->declBus(c+357,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+838,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+839,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+840,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+841,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+842,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+459,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+317,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+358,"io_wen", false,-1);
    tracep->declBus(c+359,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+360,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+361,"io_csr_wen_1", false,-1);
    tracep->declBus(c+362,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+363,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+364,"csr_0", false,-1, 31,0);
    tracep->declBus(c+365,"csr_1", false,-1, 31,0);
    tracep->declBus(c+317,"csr_2", false,-1, 31,0);
    tracep->declBus(c+366,"csr_3", false,-1, 31,0);
    tracep->declBus(c+367,"reg_0", false,-1, 31,0);
    tracep->declBus(c+368,"reg_1", false,-1, 31,0);
    tracep->declBus(c+369,"reg_2", false,-1, 31,0);
    tracep->declBus(c+370,"reg_3", false,-1, 31,0);
    tracep->declBus(c+371,"reg_4", false,-1, 31,0);
    tracep->declBus(c+372,"reg_5", false,-1, 31,0);
    tracep->declBus(c+373,"reg_6", false,-1, 31,0);
    tracep->declBus(c+374,"reg_7", false,-1, 31,0);
    tracep->declBus(c+375,"reg_8", false,-1, 31,0);
    tracep->declBus(c+376,"reg_9", false,-1, 31,0);
    tracep->declBus(c+377,"reg_10", false,-1, 31,0);
    tracep->declBus(c+378,"reg_11", false,-1, 31,0);
    tracep->declBus(c+379,"reg_12", false,-1, 31,0);
    tracep->declBus(c+380,"reg_13", false,-1, 31,0);
    tracep->declBus(c+381,"reg_14", false,-1, 31,0);
    tracep->declBus(c+316,"reg_15", false,-1, 31,0);
    tracep->declBus(c+382,"reg_16", false,-1, 31,0);
    tracep->declBus(c+383,"reg_17", false,-1, 31,0);
    tracep->declBus(c+384,"reg_18", false,-1, 31,0);
    tracep->declBus(c+385,"reg_19", false,-1, 31,0);
    tracep->declBus(c+386,"reg_20", false,-1, 31,0);
    tracep->declBus(c+387,"reg_21", false,-1, 31,0);
    tracep->declBus(c+388,"reg_22", false,-1, 31,0);
    tracep->declBus(c+389,"reg_23", false,-1, 31,0);
    tracep->declBus(c+390,"reg_24", false,-1, 31,0);
    tracep->declBus(c+391,"reg_25", false,-1, 31,0);
    tracep->declBus(c+392,"reg_26", false,-1, 31,0);
    tracep->declBus(c+393,"reg_27", false,-1, 31,0);
    tracep->declBus(c+394,"reg_28", false,-1, 31,0);
    tracep->declBus(c+395,"reg_29", false,-1, 31,0);
    tracep->declBus(c+396,"reg_30", false,-1, 31,0);
    tracep->declBus(c+397,"reg_31", false,-1, 31,0);
    tracep->declBus(c+839,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+841,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+459,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1031,"reset", false,-1);
    tracep->declBit(c+986,"io_lsu2in_valid", false,-1);
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
    tracep->declBus(c+334,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+335,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+847,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+848,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+360,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+358,"io_reg_wen", false,-1);
    tracep->declBus(c+359,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+362,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+363,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+361,"io_csr_wen_1", false,-1);
    tracep->declBus(c+357,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+356,"io_csr_wen_2", false,-1);
    tracep->declBus(c+848,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+398,"m2LSUstate", false,-1);
    tracep->declBus(c+399,"lastdnpc", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"io_d", false,-1);
    tracep->declBit(c+400,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"io_d", false,-1);
    tracep->declBit(c+400,"io_q", false,-1);
    tracep->declBit(c+400,"sync_0", false,-1);
    tracep->declBit(c+401,"sync_1", false,-1);
    tracep->declBit(c+402,"sync_2", false,-1);
    tracep->declBit(c+403,"sync_3", false,-1);
    tracep->declBit(c+404,"sync_4", false,-1);
    tracep->declBit(c+405,"sync_5", false,-1);
    tracep->declBit(c+406,"sync_6", false,-1);
    tracep->declBit(c+407,"sync_7", false,-1);
    tracep->declBit(c+408,"sync_8", false,-1);
    tracep->declBit(c+409,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+756,"auto_in_psel", false,-1);
    tracep->declBit(c+451,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+755,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1054,"auto_in_pready", false,-1);
    tracep->declBit(c+1055,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1056,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1004,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1005,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1006,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1007,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1008,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1009,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1010,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1011,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1012,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+855,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+756,"in_psel", false,-1);
    tracep->declBit(c+451,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1054,"in_pready", false,-1);
    tracep->declBus(c+1056,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1055,"in_pslverr", false,-1);
    tracep->declBus(c+1004,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1005,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1006,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1007,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1008,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1009,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1010,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1011,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1012,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1013,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+754,"auto_in_psel", false,-1);
    tracep->declBit(c+450,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+755,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"auto_in_pready", false,-1);
    tracep->declBit(c+1052,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1053,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1014,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1015,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+855,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+754,"in_psel", false,-1);
    tracep->declBit(c+450,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1051,"in_pready", false,-1);
    tracep->declBus(c+1053,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1052,"in_pslverr", false,-1);
    tracep->declBit(c+1014,"ps2_clk", false,-1);
    tracep->declBit(c+1015,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+810,"auto_in_awvalid", false,-1);
    tracep->declBit(c+811,"auto_in_wvalid", false,-1);
    tracep->declBit(c+84,"auto_in_arready", false,-1);
    tracep->declBit(c+812,"auto_in_arvalid", false,-1);
    tracep->declBus(c+12,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+813,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+467,"auto_in_rready", false,-1);
    tracep->declBit(c+85,"auto_in_rvalid", false,-1);
    tracep->declBus(c+86,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+87,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+85,"state", false,-1);
    tracep->declBus(c+87,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+86,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+856,"raddr", false,-1, 31,0);
    tracep->declBit(c+857,"ren", false,-1);
    tracep->declBus(c+858,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+757,"auto_in_psel", false,-1);
    tracep->declBit(c+452,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+745,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"auto_in_pready", false,-1);
    tracep->declBit(c+1047,"auto_in_pslverr", false,-1);
    tracep->declBus(c+8,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1026,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1027,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+893,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+745,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+757,"in_psel", false,-1);
    tracep->declBit(c+452,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"in_pready", false,-1);
    tracep->declBus(c+8,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1047,"in_pslverr", false,-1);
    tracep->declBit(c+1026,"qspi_sck", false,-1);
    tracep->declBit(c+1027,"qspi_ce_n", false,-1);
    tracep->declBus(c+893,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+893,"din", false,-1, 3,0);
    tracep->declBus(c+988,"dout", false,-1, 3,0);
    tracep->declBus(c+989,"douten", false,-1, 3,0);
    tracep->declBit(c+1036,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1002,"clk_i", false,-1);
    tracep->declBit(c+1003,"rst_i", false,-1);
    tracep->declBus(c+745,"adr_i", false,-1, 31,0);
    tracep->declBus(c+748,"dat_i", false,-1, 31,0);
    tracep->declBus(c+8,"dat_o", false,-1, 31,0);
    tracep->declBus(c+749,"sel_i", false,-1, 3,0);
    tracep->declBit(c+757,"cyc_i", false,-1);
    tracep->declBit(c+757,"stb_i", false,-1);
    tracep->declBit(c+1036,"ack_o", false,-1);
    tracep->declBit(c+747,"we_i", false,-1);
    tracep->declBit(c+1026,"sck", false,-1);
    tracep->declBit(c+1027,"ce_n", false,-1);
    tracep->declBus(c+893,"din", false,-1, 3,0);
    tracep->declBus(c+988,"dout", false,-1, 3,0);
    tracep->declBus(c+989,"douten", false,-1, 3,0);
    tracep->declBus(c+1063,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1064,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+515,"mr_sck", false,-1);
    tracep->declBit(c+516,"mr_ce_n", false,-1);
    tracep->declBus(c+893,"mr_din", false,-1, 3,0);
    tracep->declBus(c+517,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+518,"mr_doe", false,-1);
    tracep->declBit(c+519,"mw_sck", false,-1);
    tracep->declBit(c+520,"mw_ce_n", false,-1);
    tracep->declBus(c+893,"mw_din", false,-1, 3,0);
    tracep->declBus(c+990,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+521,"mw_doe", false,-1);
    tracep->declBit(c+991,"mr_rd", false,-1);
    tracep->declBit(c+522,"mr_done", false,-1);
    tracep->declBit(c+992,"mw_wr", false,-1);
    tracep->declBit(c+993,"mw_done", false,-1);
    tracep->declBit(c+757,"wb_valid", false,-1);
    tracep->declBit(c+859,"wb_we", false,-1);
    tracep->declBit(c+860,"wb_re", false,-1);
    tracep->declBit(c+523,"state", false,-1);
    tracep->declBit(c+994,"nstate", false,-1);
    tracep->declBus(c+861,"size", false,-1, 2,0);
    tracep->declBus(c+862,"byte0", false,-1, 7,0);
    tracep->declBus(c+863,"byte1", false,-1, 7,0);
    tracep->declBus(c+864,"byte2", false,-1, 7,0);
    tracep->declBus(c+865,"byte3", false,-1, 7,0);
    tracep->declBus(c+866,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1037,"rst_n", false,-1);
    tracep->declBus(c+867,"addr", false,-1, 23,0);
    tracep->declBit(c+991,"rd", false,-1);
    tracep->declBus(c+1065,"size", false,-1, 2,0);
    tracep->declBit(c+522,"done", false,-1);
    tracep->declBus(c+8,"line", false,-1, 31,0);
    tracep->declBit(c+515,"sck", false,-1);
    tracep->declBit(c+516,"ce_n", false,-1);
    tracep->declBus(c+893,"din", false,-1, 3,0);
    tracep->declBus(c+517,"dout", false,-1, 3,0);
    tracep->declBit(c+518,"douten", false,-1);
    tracep->declBus(c+1063,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1064,"READ", false,-1, 0,0);
    tracep->declBus(c+1066,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+524,"state", false,-1);
    tracep->declBit(c+995,"nstate", false,-1);
    tracep->declBus(c+525,"counter", false,-1, 7,0);
    tracep->declBus(c+526,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+410+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1067,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+527,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1037,"rst_n", false,-1);
    tracep->declBus(c+868,"addr", false,-1, 23,0);
    tracep->declBus(c+866,"line", false,-1, 31,0);
    tracep->declBus(c+861,"size", false,-1, 2,0);
    tracep->declBit(c+992,"wr", false,-1);
    tracep->declBit(c+993,"done", false,-1);
    tracep->declBit(c+519,"sck", false,-1);
    tracep->declBit(c+520,"ce_n", false,-1);
    tracep->declBus(c+893,"din", false,-1, 3,0);
    tracep->declBus(c+990,"dout", false,-1, 3,0);
    tracep->declBit(c+521,"douten", false,-1);
    tracep->declBus(c+1063,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1064,"WRITE", false,-1, 0,0);
    tracep->declBus(c+869,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+528,"state", false,-1);
    tracep->declBit(c+996,"nstate", false,-1);
    tracep->declBus(c+529,"counter", false,-1, 7,0);
    tracep->declBus(c+530,"saddr", false,-1, 23,0);
    tracep->declBus(c+1068,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+751,"auto_in_psel", false,-1);
    tracep->declBit(c+448,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+745,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"auto_in_pready", false,-1);
    tracep->declBit(c+1047,"auto_in_pslverr", false,-1);
    tracep->declBus(c+512,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1028,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+502,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+503,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+504,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+505,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+506,"sdram_bundle_we", false,-1);
    tracep->declBus(c+507,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+745,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+751,"in_psel", false,-1);
    tracep->declBit(c+448,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+511,"in_pready", false,-1);
    tracep->declBus(c+512,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1047,"in_pslverr", false,-1);
    tracep->declBit(c+1028,"sdram_clk", false,-1);
    tracep->declBit(c+502,"sdram_cke", false,-1);
    tracep->declBit(c+503,"sdram_cs", false,-1);
    tracep->declBit(c+504,"sdram_ras", false,-1);
    tracep->declBit(c+505,"sdram_cas", false,-1);
    tracep->declBit(c+506,"sdram_we", false,-1);
    tracep->declBus(c+507,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+509,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+531,"sdram_dout_en", false,-1);
    tracep->declBus(c+532,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+414,"state", false,-1, 1,0);
    tracep->declBit(c+533,"req_accept", false,-1);
    tracep->declBit(c+870,"is_read", false,-1);
    tracep->declBit(c+871,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1002,"clk_i", false,-1);
    tracep->declBit(c+1003,"rst_i", false,-1);
    tracep->declBus(c+872,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+870,"inport_rd_i", false,-1);
    tracep->declBus(c+1058,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+745,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+748,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+510,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+533,"inport_accept_o", false,-1);
    tracep->declBit(c+511,"inport_ack_o", false,-1);
    tracep->declBit(c+1047,"inport_error_o", false,-1);
    tracep->declBus(c+512,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1028,"sdram_clk_o", false,-1);
    tracep->declBit(c+502,"sdram_cke_o", false,-1);
    tracep->declBit(c+503,"sdram_cs_o", false,-1);
    tracep->declBit(c+504,"sdram_ras_o", false,-1);
    tracep->declBit(c+505,"sdram_cas_o", false,-1);
    tracep->declBit(c+506,"sdram_we_o", false,-1);
    tracep->declBus(c+509,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+507,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+508,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+532,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+531,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1069,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1070,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1071,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1072,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1072,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1072,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1073,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1074,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1075,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1076,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1077,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1073,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1078,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1079,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1080,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1081,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1082,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1083,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1084,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1057,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1085,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1073,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1057,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1084,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1083,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1079,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1081,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1080,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1082,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1078,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1086,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1087,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1088,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1088,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1089,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1088,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1072,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1072,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1090,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+745,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+872,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+870,"ram_rd_w", false,-1);
    tracep->declBit(c+533,"ram_accept_w", false,-1);
    tracep->declBus(c+748,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+512,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+511,"ram_ack_w", false,-1);
    tracep->declBit(c+873,"ram_req_w", false,-1);
    tracep->declBus(c+534,"command_q", false,-1, 3,0);
    tracep->declBus(c+507,"addr_q", false,-1, 12,0);
    tracep->declBus(c+532,"data_q", false,-1, 15,0);
    tracep->declBit(c+535,"data_rd_en_q", false,-1);
    tracep->declBus(c+509,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+502,"cke_q", false,-1);
    tracep->declBus(c+508,"bank_q", false,-1, 1,0);
    tracep->declBus(c+536,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+537,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+510,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+538,"refresh_q", false,-1);
    tracep->declBus(c+539,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+540+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+544,"state_q", false,-1, 3,0);
    tracep->declBus(c+997,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+998,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+545,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+546,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+874,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+875,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+876,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1073,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+547,"delay_q", false,-1, 3,0);
    tracep->declBus(c+999,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1091,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+548,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+549,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+550,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+551,"idx", false,-1, 31,0);
    tracep->declBus(c+552,"rd_q", false,-1, 3,0);
    tracep->declBit(c+511,"ack_q", false,-1);
    tracep->declArray(c+553,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+761,"auto_in_psel", false,-1);
    tracep->declBit(c+762,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+753,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"auto_in_pready", false,-1);
    tracep->declBit(c+1047,"auto_in_pslverr", false,-1);
    tracep->declBus(c+514,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+500,"spi_bundle_sck", false,-1);
    tracep->declBus(c+501,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1024,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1025,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1092,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1093,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1094,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+877,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+761,"in_psel", false,-1);
    tracep->declBit(c+762,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+513,"in_pready", false,-1);
    tracep->declBus(c+514,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1047,"in_pslverr", false,-1);
    tracep->declBit(c+500,"spi_sck", false,-1);
    tracep->declBus(c+501,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1024,"spi_mosi", false,-1);
    tracep->declBit(c+1025,"spi_miso", false,-1);
    tracep->declBit(c+556,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1095,"Tp", false,-1, 31,0);
    tracep->declBit(c+1002,"wb_clk_i", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBus(c+878,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+748,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+514,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+749,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+747,"wb_we_i", false,-1);
    tracep->declBit(c+761,"wb_stb_i", false,-1);
    tracep->declBit(c+762,"wb_cyc_i", false,-1);
    tracep->declBit(c+513,"wb_ack_o", false,-1);
    tracep->declBit(c+1047,"wb_err_o", false,-1);
    tracep->declBit(c+556,"wb_int_o", false,-1);
    tracep->declBus(c+501,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+500,"sclk_pad_o", false,-1);
    tracep->declBit(c+1024,"mosi_pad_o", false,-1);
    tracep->declBit(c+1025,"miso_pad_i", false,-1);
    tracep->declBus(c+557,"divider", false,-1, 15,0);
    tracep->declBus(c+558,"ctrl", false,-1, 13,0);
    tracep->declBus(c+559,"ss", false,-1, 7,0);
    tracep->declBus(c+1000,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+560,"rx", false,-1, 127,0);
    tracep->declBit(c+564,"rx_negedge", false,-1);
    tracep->declBit(c+565,"tx_negedge", false,-1);
    tracep->declBus(c+566,"char_len", false,-1, 6,0);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+568,"lsb", false,-1);
    tracep->declBit(c+569,"ie", false,-1);
    tracep->declBit(c+570,"ass", false,-1);
    tracep->declBit(c+879,"spi_divider_sel", false,-1);
    tracep->declBit(c+880,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+881,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+882,"spi_ss_sel", false,-1);
    tracep->declBit(c+571,"tip", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBit(c+574,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1095,"Tp", false,-1, 31,0);
    tracep->declBit(c+1002,"clk_in", false,-1);
    tracep->declBit(c+1003,"rst", false,-1);
    tracep->declBit(c+571,"enable", false,-1);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+574,"last_clk", false,-1);
    tracep->declBus(c+557,"divider", false,-1, 15,0);
    tracep->declBit(c+500,"clk_out", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBus(c+575,"cnt", false,-1, 15,0);
    tracep->declBit(c+576,"cnt_zero", false,-1);
    tracep->declBit(c+577,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1095,"Tp", false,-1, 31,0);
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"rst", false,-1);
    tracep->declBus(c+883,"latch", false,-1, 3,0);
    tracep->declBus(c+749,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+566,"len", false,-1, 6,0);
    tracep->declBit(c+568,"lsb", false,-1);
    tracep->declBit(c+567,"go", false,-1);
    tracep->declBit(c+572,"pos_edge", false,-1);
    tracep->declBit(c+573,"neg_edge", false,-1);
    tracep->declBit(c+564,"rx_negedge", false,-1);
    tracep->declBit(c+565,"tx_negedge", false,-1);
    tracep->declBit(c+571,"tip", false,-1);
    tracep->declBit(c+574,"last", false,-1);
    tracep->declBus(c+748,"p_in", false,-1, 31,0);
    tracep->declArray(c+560,"p_out", false,-1, 127,0);
    tracep->declBit(c+500,"s_clk", false,-1);
    tracep->declBit(c+1025,"s_in", false,-1);
    tracep->declBit(c+1024,"s_out", false,-1);
    tracep->declBus(c+578,"cnt", false,-1, 7,0);
    tracep->declArray(c+560,"data", false,-1, 127,0);
    tracep->declBus(c+579,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+580,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+581,"rx_clk", false,-1);
    tracep->declBit(c+582,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+758,"auto_in_psel", false,-1);
    tracep->declBit(c+759,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+755,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+760,"auto_in_pready", false,-1);
    tracep->declBit(c+1047,"auto_in_pslverr", false,-1);
    tracep->declBus(c+887,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1022,"uart_rx", false,-1);
    tracep->declBit(c+1023,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+758,"in_psel", false,-1);
    tracep->declBit(c+759,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+760,"in_pready", false,-1);
    tracep->declBit(c+1047,"in_pslverr", false,-1);
    tracep->declBus(c+855,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+887,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1022,"uart_rx", false,-1);
    tracep->declBit(c+1023,"uart_tx", false,-1);
    tracep->declBit(c+583,"rtsn", false,-1);
    tracep->declBit(c+1047,"ctsn", false,-1);
    tracep->declBit(c+584,"dtr_pad_o", false,-1);
    tracep->declBit(c+1047,"dsr_pad_i", false,-1);
    tracep->declBit(c+1047,"ri_pad_i", false,-1);
    tracep->declBit(c+1047,"dcd_pad_i", false,-1);
    tracep->declBit(c+585,"interrupt", false,-1);
    tracep->declBit(c+1038,"reg_we", false,-1);
    tracep->declBit(c+1039,"reg_re", false,-1);
    tracep->declBus(c+884,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+885,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+415,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1001,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+586,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBus(c+884,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+886,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1001,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1038,"wb_we_i", false,-1);
    tracep->declBit(c+1039,"wb_re_i", false,-1);
    tracep->declBit(c+1023,"stx_pad_o", false,-1);
    tracep->declBit(c+1022,"srx_pad_i", false,-1);
    tracep->declBus(c+1086,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+586,"rts_pad_o", false,-1);
    tracep->declBit(c+584,"dtr_pad_o", false,-1);
    tracep->declBit(c+585,"int_o", false,-1);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+588,"srx_pad", false,-1);
    tracep->declBus(c+589,"ier", false,-1, 3,0);
    tracep->declBus(c+590,"iir", false,-1, 3,0);
    tracep->declBus(c+591,"fcr", false,-1, 1,0);
    tracep->declBus(c+592,"mcr", false,-1, 4,0);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBus(c+594,"msr", false,-1, 7,0);
    tracep->declBus(c+595,"dl", false,-1, 15,0);
    tracep->declBus(c+596,"scratch", false,-1, 7,0);
    tracep->declBit(c+597,"start_dlc", false,-1);
    tracep->declBit(c+598,"lsr_mask_d", false,-1);
    tracep->declBit(c+599,"msi_reset", false,-1);
    tracep->declBus(c+600,"dlc", false,-1, 15,0);
    tracep->declBus(c+601,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+602,"rx_reset", false,-1);
    tracep->declBit(c+603,"tx_reset", false,-1);
    tracep->declBit(c+604,"dlab", false,-1);
    tracep->declBit(c+1061,"cts_pad_i", false,-1);
    tracep->declBit(c+1047,"dsr_pad_i", false,-1);
    tracep->declBit(c+1047,"ri_pad_i", false,-1);
    tracep->declBit(c+1047,"dcd_pad_i", false,-1);
    tracep->declBit(c+605,"loopback", false,-1);
    tracep->declBit(c+1047,"cts", false,-1);
    tracep->declBit(c+1061,"dsr", false,-1);
    tracep->declBit(c+1061,"ri", false,-1);
    tracep->declBit(c+1061,"dcd", false,-1);
    tracep->declBit(c+606,"cts_c", false,-1);
    tracep->declBit(c+607,"dsr_c", false,-1);
    tracep->declBit(c+608,"ri_c", false,-1);
    tracep->declBit(c+609,"dcd_c", false,-1);
    tracep->declBus(c+610,"lsr", false,-1, 7,0);
    tracep->declBit(c+611,"lsr0", false,-1);
    tracep->declBit(c+612,"lsr1", false,-1);
    tracep->declBit(c+613,"lsr2", false,-1);
    tracep->declBit(c+614,"lsr3", false,-1);
    tracep->declBit(c+615,"lsr4", false,-1);
    tracep->declBit(c+616,"lsr5", false,-1);
    tracep->declBit(c+617,"lsr6", false,-1);
    tracep->declBit(c+618,"lsr7", false,-1);
    tracep->declBit(c+619,"lsr0r", false,-1);
    tracep->declBit(c+620,"lsr1r", false,-1);
    tracep->declBit(c+621,"lsr2r", false,-1);
    tracep->declBit(c+622,"lsr3r", false,-1);
    tracep->declBit(c+623,"lsr4r", false,-1);
    tracep->declBit(c+624,"lsr5r", false,-1);
    tracep->declBit(c+625,"lsr6r", false,-1);
    tracep->declBit(c+626,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+627,"rls_int", false,-1);
    tracep->declBit(c+628,"rda_int", false,-1);
    tracep->declBit(c+629,"ti_int", false,-1);
    tracep->declBit(c+630,"thre_int", false,-1);
    tracep->declBit(c+631,"ms_int", false,-1);
    tracep->declBit(c+632,"tf_push", false,-1);
    tracep->declBit(c+633,"rf_pop", false,-1);
    tracep->declBus(c+1040,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+634,"rf_error_bit", false,-1);
    tracep->declBit(c+612,"rf_overrun", false,-1);
    tracep->declBit(c+635,"rf_push_pulse", false,-1);
    tracep->declBus(c+636,"rf_count", false,-1, 4,0);
    tracep->declBus(c+637,"tf_count", false,-1, 4,0);
    tracep->declBus(c+638,"tstate", false,-1, 2,0);
    tracep->declBus(c+639,"rstate", false,-1, 3,0);
    tracep->declBus(c+640,"counter_t", false,-1, 9,0);
    tracep->declBit(c+641,"thre_set_en", false,-1);
    tracep->declBus(c+642,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+643,"block_value", false,-1, 7,0);
    tracep->declBit(c+644,"serial_out", false,-1);
    tracep->declBit(c+645,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+646,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+647,"lsr0_d", false,-1);
    tracep->declBit(c+648,"lsr1_d", false,-1);
    tracep->declBit(c+649,"lsr2_d", false,-1);
    tracep->declBit(c+650,"lsr3_d", false,-1);
    tracep->declBit(c+651,"lsr4_d", false,-1);
    tracep->declBit(c+652,"lsr5_d", false,-1);
    tracep->declBit(c+653,"lsr6_d", false,-1);
    tracep->declBit(c+654,"lsr7_d", false,-1);
    tracep->declBit(c+655,"rls_int_d", false,-1);
    tracep->declBit(c+656,"thre_int_d", false,-1);
    tracep->declBit(c+657,"ms_int_d", false,-1);
    tracep->declBit(c+658,"ti_int_d", false,-1);
    tracep->declBit(c+659,"rda_int_d", false,-1);
    tracep->declBit(c+660,"rls_int_rise", false,-1);
    tracep->declBit(c+661,"thre_int_rise", false,-1);
    tracep->declBit(c+662,"ms_int_rise", false,-1);
    tracep->declBit(c+663,"ti_int_rise", false,-1);
    tracep->declBit(c+664,"rda_int_rise", false,-1);
    tracep->declBit(c+665,"rls_int_pnd", false,-1);
    tracep->declBit(c+666,"rda_int_pnd", false,-1);
    tracep->declBit(c+667,"thre_int_pnd", false,-1);
    tracep->declBit(c+668,"ms_int_pnd", false,-1);
    tracep->declBit(c+669,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1095,"Tp", false,-1, 31,0);
    tracep->declBus(c+1095,"width", false,-1, 31,0);
    tracep->declBus(c+1064,"init_value", false,-1, 0,0);
    tracep->declBit(c+1003,"rst_i", false,-1);
    tracep->declBit(c+1002,"clk_i", false,-1);
    tracep->declBit(c+1047,"stage1_rst_i", false,-1);
    tracep->declBit(c+1061,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1022,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+588,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+670,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBit(c+633,"rf_pop", false,-1);
    tracep->declBit(c+645,"srx_pad_i", false,-1);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+602,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+640,"counter_t", false,-1, 9,0);
    tracep->declBus(c+636,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1040,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+612,"rf_overrun", false,-1);
    tracep->declBit(c+634,"rf_error_bit", false,-1);
    tracep->declBus(c+639,"rstate", false,-1, 3,0);
    tracep->declBit(c+635,"rf_push_pulse", false,-1);
    tracep->declBus(c+671,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+672,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+673,"rshift", false,-1, 7,0);
    tracep->declBit(c+674,"rparity", false,-1);
    tracep->declBit(c+675,"rparity_error", false,-1);
    tracep->declBit(c+676,"rframing_error", false,-1);
    tracep->declBit(c+677,"rbit_in", false,-1);
    tracep->declBit(c+678,"rparity_xor", false,-1);
    tracep->declBus(c+679,"counter_b", false,-1, 7,0);
    tracep->declBit(c+680,"rf_push_q", false,-1);
    tracep->declBus(c+681,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+682,"rf_push", false,-1);
    tracep->declBit(c+683,"break_error", false,-1);
    tracep->declBit(c+684,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+685,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+686,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+687,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1057,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1084,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1083,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1079,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1081,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1080,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1082,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1078,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1086,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1087,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1096,"sr_push", false,-1, 3,0);
    tracep->declBus(c+688,"toc_value", false,-1, 9,0);
    tracep->declBus(c+689,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1097,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1089,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1073,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1098,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBit(c+635,"push", false,-1);
    tracep->declBit(c+633,"pop", false,-1);
    tracep->declBus(c+681,"data_in", false,-1, 10,0);
    tracep->declBit(c+602,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1040,"data_out", false,-1, 10,0);
    tracep->declBit(c+612,"overrun", false,-1);
    tracep->declBus(c+636,"count", false,-1, 4,0);
    tracep->declBit(c+634,"error_bit", false,-1);
    tracep->declBus(c+1041,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+690+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+706,"top", false,-1, 3,0);
    tracep->declBus(c+707,"bottom", false,-1, 3,0);
    tracep->declBus(c+708,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+709,"word0", false,-1, 2,0);
    tracep->declBus(c+710,"word1", false,-1, 2,0);
    tracep->declBus(c+711,"word2", false,-1, 2,0);
    tracep->declBus(c+712,"word3", false,-1, 2,0);
    tracep->declBus(c+713,"word4", false,-1, 2,0);
    tracep->declBus(c+714,"word5", false,-1, 2,0);
    tracep->declBus(c+715,"word6", false,-1, 2,0);
    tracep->declBus(c+716,"word7", false,-1, 2,0);
    tracep->declBus(c+717,"word8", false,-1, 2,0);
    tracep->declBus(c+718,"word9", false,-1, 2,0);
    tracep->declBus(c+719,"word10", false,-1, 2,0);
    tracep->declBus(c+720,"word11", false,-1, 2,0);
    tracep->declBus(c+721,"word12", false,-1, 2,0);
    tracep->declBus(c+722,"word13", false,-1, 2,0);
    tracep->declBus(c+723,"word14", false,-1, 2,0);
    tracep->declBus(c+724,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1073,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1094,"data_width", false,-1, 31,0);
    tracep->declBus(c+1089,"depth", false,-1, 31,0);
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+635,"we", false,-1);
    tracep->declBus(c+706,"a", false,-1, 3,0);
    tracep->declBus(c+707,"dpra", false,-1, 3,0);
    tracep->declBus(c+725,"di", false,-1, 7,0);
    tracep->declBus(c+1041,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+416+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBus(c+593,"lcr", false,-1, 7,0);
    tracep->declBit(c+632,"tf_push", false,-1);
    tracep->declBus(c+886,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+587,"enable", false,-1);
    tracep->declBit(c+603,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+644,"stx_pad_o", false,-1);
    tracep->declBus(c+638,"tstate", false,-1, 2,0);
    tracep->declBus(c+637,"tf_count", false,-1, 4,0);
    tracep->declBus(c+726,"counter", false,-1, 4,0);
    tracep->declBus(c+727,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+728,"shift_out", false,-1, 6,0);
    tracep->declBit(c+729,"stx_o_tmp", false,-1);
    tracep->declBit(c+730,"parity_xor", false,-1);
    tracep->declBit(c+731,"tf_pop", false,-1);
    tracep->declBit(c+732,"bit_out", false,-1);
    tracep->declBus(c+886,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1042,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+733,"tf_overrun", false,-1);
    tracep->declBus(c+1059,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1046,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1099,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1100,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1065,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1101,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1094,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1089,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1073,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1098,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"wb_rst_i", false,-1);
    tracep->declBit(c+632,"push", false,-1);
    tracep->declBit(c+731,"pop", false,-1);
    tracep->declBus(c+886,"data_in", false,-1, 7,0);
    tracep->declBit(c+603,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1042,"data_out", false,-1, 7,0);
    tracep->declBit(c+733,"overrun", false,-1);
    tracep->declBus(c+637,"count", false,-1, 4,0);
    tracep->declBus(c+734,"top", false,-1, 3,0);
    tracep->declBus(c+735,"bottom", false,-1, 3,0);
    tracep->declBus(c+736,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1073,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1094,"data_width", false,-1, 31,0);
    tracep->declBus(c+1089,"depth", false,-1, 31,0);
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+632,"we", false,-1);
    tracep->declBus(c+734,"a", false,-1, 3,0);
    tracep->declBus(c+735,"dpra", false,-1, 3,0);
    tracep->declBus(c+886,"di", false,-1, 7,0);
    tracep->declBus(c+1042,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+432+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBit(c+752,"auto_in_psel", false,-1);
    tracep->declBit(c+449,"auto_in_penable", false,-1);
    tracep->declBit(c+747,"auto_in_pwrite", false,-1);
    tracep->declBus(c+753,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1046,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+748,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"auto_in_pready", false,-1);
    tracep->declBit(c+1049,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1050,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1016,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1017,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1018,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1019,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1020,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1021,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1002,"clock", false,-1);
    tracep->declBit(c+1003,"reset", false,-1);
    tracep->declBus(c+877,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+752,"in_psel", false,-1);
    tracep->declBit(c+449,"in_penable", false,-1);
    tracep->declBus(c+1046,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+747,"in_pwrite", false,-1);
    tracep->declBus(c+748,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+749,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"in_pready", false,-1);
    tracep->declBus(c+1050,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1049,"in_pslverr", false,-1);
    tracep->declBus(c+1016,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1017,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1018,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1019,"vga_hsync", false,-1);
    tracep->declBit(c+1020,"vga_vsync", false,-1);
    tracep->declBit(c+1021,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+500,"sck", false,-1);
    tracep->declBit(c+737,"ss", false,-1);
    tracep->declBit(c+1024,"mosi", false,-1);
    tracep->declBit(c+1061,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+500,"sck", false,-1);
    tracep->declBit(c+738,"ss", false,-1);
    tracep->declBit(c+1024,"mosi", false,-1);
    tracep->declBit(c+1025,"miso", false,-1);
    tracep->declBit(c+738,"reset", false,-1);
    tracep->declBus(c+739,"state", false,-1, 2,0);
    tracep->declBus(c+740,"counter", false,-1, 7,0);
    tracep->declBus(c+741,"cmd", false,-1, 7,0);
    tracep->declBus(c+742,"addr", false,-1, 23,0);
    tracep->declBus(c+743,"data", false,-1, 31,0);
    tracep->declBit(c+744,"ren", false,-1);
    tracep->declBus(c+1043,"rdata", false,-1, 31,0);
    tracep->declBus(c+1044,"raddr", false,-1, 31,0);
    tracep->declBus(c+1045,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+500,"clock", false,-1);
    tracep->declBit(c+744,"valid", false,-1);
    tracep->declBus(c+741,"cmd", false,-1, 7,0);
    tracep->declBus(c+1044,"addr", false,-1, 31,0);
    tracep->declBus(c+1043,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1026,"sck", false,-1);
    tracep->declBit(c+1027,"ce_n", false,-1);
    tracep->declBus(c+893,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1028,"clk", false,-1);
    tracep->declBit(c+502,"cke", false,-1);
    tracep->declBit(c+503,"cs", false,-1);
    tracep->declBit(c+504,"ras", false,-1);
    tracep->declBit(c+505,"cas", false,-1);
    tracep->declBit(c+506,"we", false,-1);
    tracep->declBus(c+507,"a", false,-1, 12,0);
    tracep->declBus(c+508,"ba", false,-1, 1,0);
    tracep->declBus(c+509,"dqm", false,-1, 1,0);
    tracep->declBus(c+510,"dq", false,-1, 15,0);
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
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type)) 
                                | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type))))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state_reg));
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_snpc),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_pc),32);
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mem_ren));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mem_wen));
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_m_rmask),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_m_wmask),32);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_reg_waddr),5);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_reg_wen));
    bufp->fullIData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_src1),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_src2),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_csr),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_csr_a5),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_mstatus),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_imm),32);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_alu_op),5);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_inst_type),4);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__exu_data_il_us));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state_reg));
    bufp->fullIData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_snpc),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_pc),32);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mem_ren));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mem_wen));
    bufp->fullIData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_m_rmask),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_m_wmask),32);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_reg_waddr),5);
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_reg_wen));
    bufp->fullIData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_src1),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_src2),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_csr),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_csr_a5),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_mstatus),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_imm),32);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type),4);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_il_us));
    bufp->fullIData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_alu_result),32);
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alu_result_reg),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_snpc),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_pc),32);
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__m2EXUstate));
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg),32);
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
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__m2EXUstate));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__ready_reg_1));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__state_reg));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__exu2in_valid));
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__sta_reg));
    bufp->fullQData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+352,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullBit(oldp+356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type))))));
    bufp->fullIData(oldp+357,(((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_pc)),32);
    bufp->fullBit(oldp+358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_inst_type))
                                     ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen))
                                     : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__wbu_data_reg_wen))))))));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+449,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+450,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+451,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+453,(((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4) 
                                      | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0))))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+454,(((1U & ((~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__lsu_data_inst_type)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_1))) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)))
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_awaddr_reg)),32);
    bufp->fullBit(oldp+455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0)
                                 ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))
                                 : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3))))));
    bufp->fullIData(oldp+456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3)
                                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT___GEN_3)
                                ? 0U : (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_wstrb_reg))),4);
    bufp->fullIData(oldp+458,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__m2EXUstate) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready)))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullIData(oldp+459,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2
                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+461,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+462,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullIData(oldp+463,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+464,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+465,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+466,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+468,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+470,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+471,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+472,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+473,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+474,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+478,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+479,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+481,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+482,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+483,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+484,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+486,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+487,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+493,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+494,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+496,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+504,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+506,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+510,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+512,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+517,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+518,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+522,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+527,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+533,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+565,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+566,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+567,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+568,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+569,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+570,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+574,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+576,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+577,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+579,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+583,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+584,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+586,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+605,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+606,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+607,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+608,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+609,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+610,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+614,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+615,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+634,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+641,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+660,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+661,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+662,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+663,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+664,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+683,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+684,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+685,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+686,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+687,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+689,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+708,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+725,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+736,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+737,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+744,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+752,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+753,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+754,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+755,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+756,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+760,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+780,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+790,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+801,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+804,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+805,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullSData(oldp+806,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+807,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+810,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+811,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+812,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+813,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+818,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inv_flag));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_ar_arready));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_w_wready));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__arvalid_reg));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_ifu_axi_ar_arready));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_reg));
    bufp->fullIData(oldp+835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_reg)
                                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0)
                                : 0U)),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0),32);
    bufp->fullIData(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ready_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg
                                : 0U)),32);
    bufp->fullCData(oldp+838,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+840,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__in_data_inst),32);
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WBU_io_out2ifu_valid));
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg_REG),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullIData(oldp+855,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+856,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+864,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+865,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+866,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+867,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+868,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+869,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+874,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+875,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+876,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+877,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+878,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),5);
    bufp->fullBit(oldp+879,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+880,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+881,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+882,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+884,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullIData(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h7d41aaa5__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0))));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullIData(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullBit(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__sta_reg))));
    bufp->fullCData(oldp+893,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+955,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+958,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+960,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+963,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_ifu_axi_r_rready_0));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__io_out2wbu_valid_0));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rvalid_en));
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1002,(vlSelf->clock));
    bufp->fullBit(oldp+1003,(vlSelf->reset));
    bufp->fullSData(oldp+1004,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1005,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1006,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1007,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1008,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1009,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1010,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1011,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1012,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1013,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1014,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1015,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1016,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1017,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1018,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1019,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1020,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1021,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1022,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1023,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1025,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1026,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1027,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1028,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1029,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullCData(oldp+1030,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rdata_reg
                                     : 0U) : 2U)),32);
    bufp->fullCData(oldp+1033,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT___GEN)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RTC__DOT__rresp_reg)
                                     : 0U) : 3U)),2);
    bufp->fullCData(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_4)
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
    bufp->fullBit(oldp+1035,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AXI_arbiter__DOT___GEN_3))))));
    bufp->fullBit(oldp+1036,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1037,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1040,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1044,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1046,(1U),3);
    bufp->fullBit(oldp+1047,(0U));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1057,(0U),4);
    bufp->fullCData(oldp+1058,(0U),8);
    bufp->fullCData(oldp+1059,(0U),3);
    bufp->fullCData(oldp+1060,(0U),2);
    bufp->fullBit(oldp+1061,(1U));
    bufp->fullIData(oldp+1062,(0U),32);
    bufp->fullBit(oldp+1063,(0U));
    bufp->fullBit(oldp+1064,(1U));
    bufp->fullCData(oldp+1065,(4U),3);
    bufp->fullCData(oldp+1066,(0x1bU),8);
    bufp->fullCData(oldp+1067,(0xebU),8);
    bufp->fullCData(oldp+1068,(0x38U),8);
    bufp->fullIData(oldp+1069,(0x64U),32);
    bufp->fullIData(oldp+1070,(0x18U),32);
    bufp->fullIData(oldp+1071,(9U),32);
    bufp->fullIData(oldp+1072,(2U),32);
    bufp->fullIData(oldp+1073,(4U),32);
    bufp->fullIData(oldp+1074,(0xdU),32);
    bufp->fullIData(oldp+1075,(0x2000U),32);
    bufp->fullIData(oldp+1076,(0x2710U),32);
    bufp->fullIData(oldp+1077,(0x30cU),32);
    bufp->fullCData(oldp+1078,(7U),4);
    bufp->fullCData(oldp+1079,(3U),4);
    bufp->fullCData(oldp+1080,(5U),4);
    bufp->fullCData(oldp+1081,(4U),4);
    bufp->fullCData(oldp+1082,(6U),4);
    bufp->fullCData(oldp+1083,(2U),4);
    bufp->fullCData(oldp+1084,(1U),4);
    bufp->fullSData(oldp+1085,(0x21U),13);
    bufp->fullCData(oldp+1086,(8U),4);
    bufp->fullCData(oldp+1087,(9U),4);
    bufp->fullIData(oldp+1088,(0xaU),32);
    bufp->fullIData(oldp+1089,(0x10U),32);
    bufp->fullIData(oldp+1090,(6U),32);
    bufp->fullIData(oldp+1091,(0x11U),32);
    bufp->fullIData(oldp+1092,(0x30000000U),32);
    bufp->fullIData(oldp+1093,(0x3fffffffU),32);
    bufp->fullIData(oldp+1094,(8U),32);
    bufp->fullIData(oldp+1095,(1U),32);
    bufp->fullCData(oldp+1096,(0xaU),4);
    bufp->fullIData(oldp+1097,(0xbU),32);
    bufp->fullIData(oldp+1098,(5U),32);
    bufp->fullCData(oldp+1099,(2U),3);
    bufp->fullCData(oldp+1100,(3U),3);
    bufp->fullCData(oldp+1101,(5U),3);
}
