// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060111_top___024root___eval_triggers__act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->pc != vlSelf->__Vtrigrprev__TOP__pc);
    vlSelf->__VactTriggered.at(2U) = (vlSelf->ysyx_23060111_top__DOT__inst 
                                      != vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst);
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->ysyx_23060111_top__DOT__type_i) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__type_i));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__pc = vlSelf->pc;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst 
        = vlSelf->ysyx_23060111_top__DOT__inst;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__type_i 
        = vlSelf->ysyx_23060111_top__DOT__type_i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060111_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->ysyx_23060111_top__DOT__inst);
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ data, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__2(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_pmem_read__0__Vfuncout;
    __Vtask_pmem_read__0__Vfuncout = 0;
    // Body
    Vysyx_23060111_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->ysyx_23060111_top__DOT__inst, 4U, __Vtask_pmem_read__0__Vfuncout);
}
