// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_EXU__Syms.h"


VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_init_sub__TOP__0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+22,"rst", false,-1);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+24,"en_reg", false,-1);
    tracep->declBit(c+25,"en_trigger", false,-1);
    tracep->declBus(c+26,"inst", false,-1, 31,0);
    tracep->declBus(c+27,"snpc", false,-1, 31,0);
    tracep->declBus(c+28,"dnpc", false,-1, 31,0);
    tracep->declBus(c+29,"pc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,20);
    tracep->declBus(c+31,"rs1", false,-1, 19,15);
    tracep->declBus(c+32,"rd", false,-1, 11,7);
    tracep->declBus(c+33,"ysyx_23060111_top.out", false,-1, 31,0);
    tracep->declBus(c+34,"out_reg", false,-1, 31,0);
    tracep->declBus(c+35,"reg_out", false,-1, 31,0);
    tracep->declBus(c+36,"reg_out1", false,-1, 31,0);
    tracep->declBus(c+37,"ysyx_23060111_MuxKeyInternal.out", false,-1, 0,0);
    tracep->declBus(c+38,"key", false,-1, 0,0);
    tracep->declBus(c+39,"default_out", false,-1, 0,0);
    tracep->declBus(c+40,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_23060111_MuxKeyInternal ");
    tracep->declBus(c+45,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+46,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+46,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+47,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+37,"out", false,-1, 0,0);
    tracep->declBus(c+38,"key", false,-1, 0,0);
    tracep->declBus(c+39,"default_out", false,-1, 0,0);
    tracep->declBus(c+40,"lut", false,-1, 3,0);
    tracep->declBus(c+45,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+7,"lut_out", false,-1, 0,0);
    tracep->declBit(c+8,"hit", false,-1);
    tracep->declBus(c+48,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+22,"rst", false,-1);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+24,"en_reg", false,-1);
    tracep->declBit(c+25,"en_trigger", false,-1);
    tracep->declBus(c+26,"inst", false,-1, 31,0);
    tracep->declBus(c+27,"snpc", false,-1, 31,0);
    tracep->declBus(c+28,"dnpc", false,-1, 31,0);
    tracep->declBus(c+29,"pc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,20);
    tracep->declBus(c+31,"rs1", false,-1, 19,15);
    tracep->declBus(c+32,"rd", false,-1, 11,7);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->declBus(c+34,"out_reg", false,-1, 31,0);
    tracep->declBus(c+35,"reg_out", false,-1, 31,0);
    tracep->declBus(c+36,"reg_out1", false,-1, 31,0);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+22,"rst", false,-1);
    tracep->declBus(c+28,"dnpc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,20);
    tracep->declBus(c+31,"rs1", false,-1, 19,15);
    tracep->declBus(c+32,"rd", false,-1, 11,7);
    tracep->declBus(c+29,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"reg_out", false,-1, 31,0);
    tracep->declBus(c+36,"reg_out1", false,-1, 31,0);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+49,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBus(c+41,"wdata", false,-1, 30,0);
    tracep->declBus(c+42,"waddr", false,-1, 3,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->declBus(c+41,"out", false,-1, 30,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"rf", true,(i+0), 30,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_src1 ");
    tracep->declBus(c+49,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBus(c+52,"wdata", false,-1, 30,0);
    tracep->declBus(c+43,"waddr", false,-1, 3,0);
    tracep->declBit(c+53,"wen", false,-1);
    tracep->declBus(c+52,"out", false,-1, 30,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+54+i*1,"rf", true,(i+0), 30,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+50,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+22,"rst", false,-1);
    tracep->declBus(c+44,"din", false,-1, 30,0);
    tracep->declBus(c+13,"dout", false,-1, 30,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+27,"snpc", false,-1, 31,0);
    tracep->declBus(c+26,"inst", false,-1, 31,0);
    tracep->declBus(c+28,"dnpc", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,20);
    tracep->declBus(c+31,"rs1", false,-1, 19,15);
    tracep->declBus(c+32,"rd", false,-1, 11,7);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+49,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBus(c+52,"wdata", false,-1, 30,0);
    tracep->declBus(c+59,"waddr", false,-1, 3,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->declBus(c+52,"out", false,-1, 30,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+14+i*1,"rf", true,(i+0), 30,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_t0 ");
    tracep->declBus(c+49,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBus(c+52,"wdata", false,-1, 30,0);
    tracep->declBus(c+60,"waddr", false,-1, 3,0);
    tracep->declBit(c+51,"wen", false,-1);
    tracep->declBus(c+52,"out", false,-1, 30,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"rf", true,(i+0), 30,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_init_top(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060111_EXU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_EXU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_EXU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_register(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060111_EXU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060111_EXU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060111_EXU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_full_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060111_EXU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_EXU___024root*>(voidSelf);
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060111_EXU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060111_EXU___024root__trace_full_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__hit));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[0]),31);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[1]),31);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[2]),31);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[3]),31);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT____Vcellout__renew_pc____pinNumber4),31);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),31);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),31);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),31);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),31);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[0]),31);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[1]),31);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[2]),31);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[3]),31);
    bufp->fullBit(oldp+22,(vlSelf->rst));
    bufp->fullBit(oldp+23,(vlSelf->clk));
    bufp->fullBit(oldp+24,(vlSelf->en_reg));
    bufp->fullBit(oldp+25,(vlSelf->en_trigger));
    bufp->fullIData(oldp+26,(vlSelf->inst),32);
    bufp->fullIData(oldp+27,(vlSelf->snpc),32);
    bufp->fullIData(oldp+28,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+29,(vlSelf->pc),32);
    bufp->fullSData(oldp+30,(vlSelf->imm),12);
    bufp->fullCData(oldp+31,(vlSelf->rs1),5);
    bufp->fullCData(oldp+32,(vlSelf->rd),5);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060111_top__02Eout),32);
    bufp->fullIData(oldp+34,(vlSelf->out_reg),32);
    bufp->fullIData(oldp+35,(vlSelf->reg_out),32);
    bufp->fullIData(oldp+36,(vlSelf->reg_out1),32);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_23060111_MuxKeyInternal__02Eout));
    bufp->fullBit(oldp+38,(vlSelf->key));
    bufp->fullBit(oldp+39,(vlSelf->default_out));
    bufp->fullCData(oldp+40,(vlSelf->lut),4);
    bufp->fullIData(oldp+41,(vlSelf->imm),31);
    bufp->fullCData(oldp+42,((0xfU & (vlSelf->inst 
                                      >> 7U))),4);
    bufp->fullCData(oldp+43,((0xfU & (vlSelf->inst 
                                      >> 0xfU))),4);
    bufp->fullIData(oldp+44,((0x7fffffffU & vlSelf->snpc)),31);
    bufp->fullIData(oldp+45,(2U),32);
    bufp->fullIData(oldp+46,(1U),32);
    bufp->fullIData(oldp+47,(0U),32);
    bufp->fullIData(oldp+48,(2U),32);
    bufp->fullIData(oldp+49,(4U),32);
    bufp->fullIData(oldp+50,(0x1fU),32);
    bufp->fullBit(oldp+51,(1U));
    bufp->fullIData(oldp+52,(0U),31);
    bufp->fullBit(oldp+53,(0U));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[0]),31);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[1]),31);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[2]),31);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[3]),31);
    bufp->fullIData(oldp+58,(0x80000000U),32);
    bufp->fullCData(oldp+59,(0U),4);
    bufp->fullCData(oldp+60,(5U),4);
}
