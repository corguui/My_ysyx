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
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+13,"inst", false,-1, 31,0);
    tracep->declBus(c+14,"val", false,-1, 31,0);
    tracep->declBus(c+15,"snpc", false,-1, 31,0);
    tracep->declBus(c+16,"dnpc", false,-1, 31,0);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,20);
    tracep->declBus(c+19,"rs1", false,-1, 19,15);
    tracep->declBus(c+20,"rd", false,-1, 11,7);
    tracep->declBus(c+21,"out_reg", false,-1, 31,0);
    tracep->declBus(c+22,"reg_out", false,-1, 31,0);
    tracep->declBus(c+23,"reg_out1", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+13,"inst", false,-1, 31,0);
    tracep->declBus(c+14,"val", false,-1, 31,0);
    tracep->declBus(c+15,"snpc", false,-1, 31,0);
    tracep->declBus(c+15,"dnpc", false,-1, 31,0);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,20);
    tracep->declBus(c+19,"rs1", false,-1, 19,15);
    tracep->declBus(c+20,"rd", false,-1, 11,7);
    tracep->declBus(c+21,"out_reg", false,-1, 31,0);
    tracep->declBus(c+22,"reg_out", false,-1, 31,0);
    tracep->declBus(c+23,"reg_out1", false,-1, 31,0);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+15,"dnpc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,20);
    tracep->declBus(c+19,"rs1", false,-1, 19,15);
    tracep->declBus(c+20,"rd", false,-1, 11,7);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"reg_out", false,-1, 31,0);
    tracep->declBus(c+23,"reg_out1", false,-1, 31,0);
    tracep->declBus(c+24,"imm_32", false,-1, 31,0);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+27,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+23,"wdata", false,-1, 31,0);
    tracep->declBus(c+20,"waddr", false,-1, 4,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->declBus(c+23,"out", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_src1 ");
    tracep->declBus(c+27,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+30,"wdata", false,-1, 31,0);
    tracep->declBus(c+19,"waddr", false,-1, 4,0);
    tracep->declBit(c+31,"wen", false,-1);
    tracep->declBus(c+22,"out", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+32+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+28,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+15,"din", false,-1, 31,0);
    tracep->declBus(c+17,"dout", false,-1, 31,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+15,"snpc", false,-1, 31,0);
    tracep->declBus(c+14,"inst", false,-1, 31,0);
    tracep->declBus(c+15,"dnpc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,20);
    tracep->declBus(c+19,"rs1", false,-1, 19,15);
    tracep->declBus(c+20,"rd", false,-1, 11,7);
    tracep->declBus(c+25,"a", false,-1, 14,12);
    tracep->declBus(c+26,"b", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+27,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+30,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 4,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+6+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_t0 ");
    tracep->declBus(c+27,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBus(c+30,"wdata", false,-1, 31,0);
    tracep->declBus(c+39,"waddr", false,-1, 4,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+40+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullIData(oldp+13,(vlSelf->inst),32);
    bufp->fullIData(oldp+14,(vlSelf->val),32);
    bufp->fullIData(oldp+15,(vlSelf->snpc),32);
    bufp->fullIData(oldp+16,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+17,(vlSelf->pc),32);
    bufp->fullSData(oldp+18,(vlSelf->imm),12);
    bufp->fullCData(oldp+19,(vlSelf->rs1),5);
    bufp->fullCData(oldp+20,(vlSelf->rd),5);
    bufp->fullIData(oldp+21,(vlSelf->out_reg),32);
    bufp->fullIData(oldp+22,(vlSelf->reg_out),32);
    bufp->fullIData(oldp+23,(vlSelf->reg_out1),32);
    bufp->fullIData(oldp+24,((vlSelf->inst >> 0x14U)),32);
    bufp->fullCData(oldp+25,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+26,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+27,(5U),32);
    bufp->fullIData(oldp+28,(0x20U),32);
    bufp->fullBit(oldp+29,(1U));
    bufp->fullIData(oldp+30,(0U),32);
    bufp->fullBit(oldp+31,(0U));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[4]),32);
    bufp->fullIData(oldp+37,(0x80000000U),32);
    bufp->fullCData(oldp+38,(0U),5);
    bufp->fullCData(oldp+39,(5U),5);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[4]),32);
}
