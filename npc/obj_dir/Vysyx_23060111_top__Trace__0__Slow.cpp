// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_sub__TOP__0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBus(c+74,"inst", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBus(c+74,"inst", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+76,"dnpc", false,-1, 31,0);
    tracep->declBus(c+77,"snpc", false,-1, 31,0);
    tracep->declBus(c+78,"opcode", false,-1, 6,0);
    tracep->declBus(c+79,"rd", false,-1, 11,7);
    tracep->declBus(c+80,"funct3", false,-1, 14,12);
    tracep->declBus(c+81,"rs1", false,-1, 19,15);
    tracep->declBus(c+82,"rs2", false,-1, 24,20);
    tracep->declBus(c+83,"funct7", false,-1, 31,25);
    tracep->declBus(c+6,"type_i", false,-1, 3,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+79,"waddr", false,-1, 4,0);
    tracep->declBus(c+81,"raddr", false,-1, 4,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->declBus(c+85,"rout", false,-1, 31,0);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+76,"dnpc", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->declBus(c+77,"snpc", false,-1, 31,0);
    tracep->declBus(c+78,"opcode", false,-1, 6,0);
    tracep->declBus(c+79,"rd", false,-1, 11,7);
    tracep->declBus(c+80,"funct3", false,-1, 14,12);
    tracep->declBus(c+81,"rs1", false,-1, 19,15);
    tracep->declBus(c+82,"rs2", false,-1, 24,20);
    tracep->declBus(c+83,"funct7", false,-1, 31,25);
    tracep->declBus(c+6,"type_i", false,-1, 3,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+79,"waddr", false,-1, 4,0);
    tracep->declBus(c+81,"raddr", false,-1, 4,0);
    tracep->declBus(c+85,"rout", false,-1, 31,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+74,"inst", false,-1, 31,0);
    tracep->declBus(c+78,"opcode", false,-1, 6,0);
    tracep->declBus(c+79,"rd", false,-1, 11,7);
    tracep->declBus(c+80,"funct3", false,-1, 14,12);
    tracep->declBus(c+81,"rs1", false,-1, 19,15);
    tracep->declBus(c+82,"rs2", false,-1, 24,20);
    tracep->declBus(c+83,"funct7", false,-1, 31,25);
    tracep->declBus(c+6,"type_i", false,-1, 3,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+87,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+88,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+8,"out", false,-1, 35,0);
    tracep->declBus(c+78,"key", false,-1, 6,0);
    tracep->declQuad(c+90,"default_out", false,-1, 35,0);
    tracep->declArray(c+10,"lut", false,-1, 214,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+87,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+88,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+92,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+8,"out", false,-1, 35,0);
    tracep->declBus(c+78,"key", false,-1, 6,0);
    tracep->declQuad(c+90,"default_out", false,-1, 35,0);
    tracep->declArray(c+10,"lut", false,-1, 214,0);
    tracep->declBus(c+93,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+17+i*2,"pair_list", true,(i+0), 42,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+27+i*2,"data_list", true,(i+0), 35,0);
    }
    tracep->declQuad(c+37,"lut_out", false,-1, 35,0);
    tracep->declBit(c+39,"hit", false,-1);
    tracep->declBus(c+94,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBus(c+77,"snpc", false,-1, 31,0);
    tracep->declBus(c+76,"dnpc", false,-1, 31,0);
    tracep->declBus(c+75,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+96,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+87,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBus(c+84,"wdata", false,-1, 31,0);
    tracep->declBus(c+79,"waddr", false,-1, 4,0);
    tracep->declBus(c+81,"raddr", false,-1, 4,0);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->declBus(c+85,"rout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+40+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_top(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060111_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_register(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060111_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060111_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060111_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060111_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__type_i),4);
    bufp->fullIData(oldp+7,((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__i0____pinNumber1)),32);
    bufp->fullQData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__i0____pinNumber1),36);
    bufp->fullWData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__i0____pinNumber4),215);
    bufp->fullQData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[0]),43);
    bufp->fullQData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[1]),43);
    bufp->fullQData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[2]),43);
    bufp->fullQData(oldp+23,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[3]),43);
    bufp->fullQData(oldp+25,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[4]),43);
    bufp->fullQData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[0]),36);
    bufp->fullQData(oldp+29,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[1]),36);
    bufp->fullQData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[2]),36);
    bufp->fullQData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[3]),36);
    bufp->fullQData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[4]),36);
    bufp->fullQData(oldp+37,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__lut_out),36);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullBit(oldp+72,(vlSelf->rst));
    bufp->fullBit(oldp+73,(vlSelf->clk));
    bufp->fullIData(oldp+74,(vlSelf->inst),32);
    bufp->fullIData(oldp+75,(vlSelf->pc),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullIData(oldp+77,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+78,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+80,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+83,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__rout),32);
    bufp->fullBit(oldp+86,(1U));
    bufp->fullIData(oldp+87,(5U),32);
    bufp->fullIData(oldp+88,(7U),32);
    bufp->fullIData(oldp+89,(0x24U),32);
    bufp->fullQData(oldp+90,(0ULL),36);
    bufp->fullIData(oldp+92,(1U),32);
    bufp->fullIData(oldp+93,(0x2bU),32);
    bufp->fullIData(oldp+94,(5U),32);
    bufp->fullIData(oldp+95,(0x20U),32);
    bufp->fullIData(oldp+96,(0x80000000U),32);
}
