// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT___vlg_pc_read_inst);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT___vlg_pc_read_inst 
        = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__IDU__DOT__state;
    __Vdly__top__DOT__IDU__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0;
    // Body
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = vlSelf->top__DOT__EXU__DOT__m2IDUstate;
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
            & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__Reg__DOT__casez_tmp_0), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask));
    }
    __Vdly__top__DOT__IDU__DOT__state = vlSelf->top__DOT__IDU__DOT__state;
    if (vlSelf->reset) {
        __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0U;
        __Vdly__top__DOT__IDU__DOT__state = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_27 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_26 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_25 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_24 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_23 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_22 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_21 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_20 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_19 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_18 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_17 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_16 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_15 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_14 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_13 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_12 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_8 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_0 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_5 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_2 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_7 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_4 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_9 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_6 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_10 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_11 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_28 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_29 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_30 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_31 = 0U;
        vlSelf->top__DOT__PC__DOT__io_pc_REG = 0x80000000U;
        vlSelf->top__DOT__IDU__DOT__lastalu_op = 0U;
        vlSelf->top__DOT__IFU__DOT__lastinst = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)))) {
            __Vdly__top__DOT__EXU__DOT__m2IDUstate 
                = ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                   != (IData)(vlSelf->top__DOT__IDU__DOT__lastalu_op));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__state)))) {
            __Vdly__top__DOT__IDU__DOT__state = (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                 != vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1bU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_27 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1aU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_26 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x19U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_25 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x18U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_24 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x17U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_23 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x16U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_22 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x15U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_21 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x14U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_20 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x13U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_19 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x12U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_18 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x11U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_17 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x10U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_16 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xfU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_15 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xeU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_14 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xdU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_13 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xcU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_12 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (8U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_8 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_1 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_3 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))))) {
            vlSelf->top__DOT__Reg__DOT__reg_0 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (5U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_5 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_2 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (7U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_7 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (4U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_4 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (9U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_9 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (6U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_6 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xaU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_10 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xbU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_11 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1cU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_28 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1dU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_29 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1eU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_30 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1fU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_31 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        vlSelf->top__DOT__PC__DOT__io_pc_REG = vlSelf->top__DOT___EXU_io_dnpc;
        vlSelf->top__DOT__IDU__DOT__lastalu_op = vlSelf->top__DOT__IDU__DOT__exu_data_alu_op;
        vlSelf->top__DOT__IFU__DOT__lastinst = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
    }
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    vlSelf->top__DOT__IDU__DOT__state = __Vdly__top__DOT__IDU__DOT__state;
    vlSelf->io_pc = vlSelf->top__DOT__PC__DOT__io_pc_REG;
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
}

void Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ rmask, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(vlSelf->io_pc, vlSelf->__Vfunc_vlg_pc_read__0__Vfuncout);
    vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst = vlSelf->__Vfunc_vlg_pc_read__0__Vfuncout;
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 
                    = (0xbU | ((7U != (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                             >> 0xcU))) 
                               << 2U));
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xfU;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xeU;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = (0xbU 
                                                   | ((7U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                           >> 0xcU))) 
                                                      << 2U));
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0xfU;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->top__DOT__IDU__DOT___GEN_16 = ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    vlSelf->top__DOT__IDU__DOT___GEN_7 = ((0x33U == 
                                           (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x1000000U 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                ? (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                >> 0x14U));
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x80000U 
                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                              ? ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    if (vlSelf->top__DOT__IDU__DOT__state) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 1U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (0xfU & ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                         >> 0xcU)))
                            ? (0U != (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                      >> 0x19U)) : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp)));
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 2U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (0xfU & ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                         >> 0xcU)))
                            ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp)));
        } else {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type 
                = ((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                    ? 3U : ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                             ? 4U : ((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                      ? 5U : ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                               ? 6U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                   ? 7U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                     ? 9U
                                                     : 0U)))))));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (0xfU & (((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                            | (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)))
                            ? 0U : ((0x63U == (0x7fU 
                                               & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                     ? (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0)
                                     : (- (IData)((1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_16)) 
                                                      | (0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)))))))));
        }
    } else {
        vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 0U;
        vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = 0xfU;
    }
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd0de9ef2__0 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_16));
    vlSelf->top__DOT__IDU__DOT___GEN_9 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_7) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((3U != (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                    >> 0xcU))) ? 4U
                       : ((4U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                        >> 0xcU))) ? 1U
                           : ((5U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                            >> 0xcU))) 
                              << 1U))))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7)) 
              & (3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_imm = ((1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                                      | (0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))))
                                                   ? 0U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                    ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                     ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 7U))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 7U)))))
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                          ? 
                                                         (((- (IData)(
                                                                      (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                       >> 0x1fU))) 
                                                           << 0x14U) 
                                                          | ((0xff000U 
                                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                      >> 0x14U)))))
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                           ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                           : 0U)))))))));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_15 = ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_14 = ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_9)) 
              & (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((0x23U != (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_9))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                    >> 0xcU))) << 2U))));
    vlSelf->io_inv_flag = ((~ ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
                               | ((0x23U == (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                     | ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd0de9ef2__0) 
                                        | (0x73U == 
                                           (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))))))) 
                           & (IData)(vlSelf->top__DOT__IDU__DOT__state));
    vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
              | ((~ ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)))) 
                 & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd0de9ef2__0))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_il_us = 
        ((IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren) 
         & ((~ ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                              >> 0xcU))) | ((1U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                               >> 0xcU))) 
                                            | (2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                   >> 0xcU)))))) 
            & ((4U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                             >> 0xcU))) | (5U == (7U 
                                                  & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                     >> 0xcU))))));
    vlSelf->__VdfgTmp_hc51713ef__0 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                       ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)
                                           ? vlSelf->top__DOT___IDU_io_out2exu_bits_imm
                                           : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                               ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? 0U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))
                                                    ? vlSelf->top__DOT__PC__DOT__io_pc_REG
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                     ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                                                     : 0U))))));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_14));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)) 
                                                 | (6U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_15));
    vlSelf->__VdfgTmp_ha198de55__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                      & ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                                             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_15))) 
                                         | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(vlSelf->__VdfgTmp_ha198de55__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                  >> 7U))
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_15)) 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20))) 
                                            & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen))) 
                                        & ((IData)(vlSelf->__VdfgTmp_ha198de55__0) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                  >> 7U)))));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_hc51713ef__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_hc51713ef__0);
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)
                ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                    ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_imm));
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = 0U;
    }
    vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp 
        = ((8U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
            ? ((4U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                ? ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           != vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_GTES_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                : ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           >= vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           == vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))))
            : ((4U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                ? ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, 
                                         (0x1fU & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           >> (0x1fU & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           << (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           ^ vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                : ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           | vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           - vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           + vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))));
    vlSelf->top__DOT___EXU_io_dnpc = ((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                       : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                           ? ((1U == vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)
                                               ? (vlSelf->top__DOT___IDU_io_out2exu_bits_imm 
                                                  + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC__DOT__io_pc_REG))
                                           : ((1U & 
                                               ((6U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)) 
                                                   | (7U 
                                                      == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))))
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                               : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
            & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp), 
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask), vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = 0U;
    }
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6e12e19d__0 
        = (((- (IData)((1U & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__EXU__DOT___mem_m_rdata));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_he4777b8d__0 
        = (((- (IData)((1U & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->top__DOT__EXU__DOT___mem_m_rdata));
    vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)
                                                ? vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                    ? 
                                                   (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                     & (1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                     ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6e12e19d__0
                                                     : 
                                                    (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                      & (2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                      ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_he4777b8d__0
                                                      : 
                                                     (((1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                       ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6e12e19d__0
                                                       : 
                                                      (((2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                        & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                        ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_he4777b8d__0
                                                        : vlSelf->top__DOT__EXU__DOT___mem_m_rdata))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_15)
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                      ? vlSelf->top__DOT___IDU_io_out2exu_bits_imm
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                       ? vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                                        : 0U))))))
                                            : 0U);
}
