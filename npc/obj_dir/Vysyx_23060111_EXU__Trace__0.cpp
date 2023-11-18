// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_EXU__Syms.h"


void Vysyx_23060111_EXU___024root__trace_chg_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060111_EXU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060111_EXU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_EXU___024root*>(voidSelf);
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060111_EXU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060111_EXU___024root__trace_chg_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->rst));
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->en_reg));
    bufp->chgBit(oldp+13,(vlSelf->en_trigger));
    bufp->chgIData(oldp+14,(vlSelf->inst),32);
    bufp->chgIData(oldp+15,(vlSelf->snpc),32);
    bufp->chgIData(oldp+16,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+17,(vlSelf->pc),32);
    bufp->chgSData(oldp+18,(vlSelf->imm),12);
    bufp->chgCData(oldp+19,(vlSelf->rs1),5);
    bufp->chgCData(oldp+20,(vlSelf->rd),5);
    bufp->chgIData(oldp+21,(vlSelf->out),32);
    bufp->chgIData(oldp+22,(vlSelf->out_reg),32);
    bufp->chgIData(oldp+23,(vlSelf->reg_out),32);
    bufp->chgIData(oldp+24,(vlSelf->reg_out1),32);
}

void Vysyx_23060111_EXU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060111_EXU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_EXU___024root*>(voidSelf);
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
