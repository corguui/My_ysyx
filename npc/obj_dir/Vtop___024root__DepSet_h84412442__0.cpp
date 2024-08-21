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
    vlSelf->__VactTriggered.at(1U) = (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__inst_reg);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__inst_reg 
        = vlSelf->top__DOT__IFU__DOT__inst_reg;
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

void Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ rmask, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_vlg_pc_read__3__Vfuncout;
    __Vfunc_vlg_pc_read__3__Vfuncout = 0;
    IData/*31:0*/ __Vdly__top__DOT__IDU__DOT__exu_data_pc;
    __Vdly__top__DOT__IDU__DOT__exu_data_pc = 0;
    CData/*3:0*/ __Vdly__top__DOT__IDU__DOT__exu_data_inst_type;
    __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 0;
    CData/*0:0*/ __Vdly__top__DOT__IDU__DOT__state;
    __Vdly__top__DOT__IDU__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0;
    CData/*0:0*/ __Vdly__top__DOT__EXU__DOT__rready_reg;
    __Vdly__top__DOT__EXU__DOT__rready_reg = 0;
    CData/*4:0*/ __Vdly__top__DOT__Mem__DOT__delay__DOT__counter;
    __Vdly__top__DOT__Mem__DOT__delay__DOT__counter = 0;
    CData/*4:0*/ __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter;
    __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter = 0;
    // Body
    __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter 
        = vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter;
    __Vdly__top__DOT__Mem__DOT__delay__DOT__counter 
        = vlSelf->top__DOT__Mem__DOT__delay__DOT__counter;
    vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate 
        = vlSelf->top__DOT__IFU__DOT__m2EXUstate;
    vlSelf->__Vdly__top__DOT__IFU__DOT__arvalid_reg 
        = vlSelf->top__DOT__IFU__DOT__arvalid_reg;
    __Vdly__top__DOT__IDU__DOT__state = vlSelf->top__DOT__IDU__DOT__state;
    __Vdly__top__DOT__IDU__DOT__exu_data_pc = vlSelf->top__DOT__IDU__DOT__exu_data_pc;
    __Vdly__top__DOT__IDU__DOT__exu_data_inst_type 
        = vlSelf->top__DOT__IDU__DOT__exu_data_inst_type;
    __Vdly__top__DOT__EXU__DOT__rready_reg = vlSelf->top__DOT__EXU__DOT__rready_reg;
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = vlSelf->top__DOT__EXU__DOT__m2IDUstate;
    if (vlSelf->top__DOT__IFU__DOT__arvalid_reg) {
        Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(
                                                                ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                                                  ? 
                                                                 (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                                                   & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                                                   ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                                                   : 0U)
                                                                  : 0U), __Vfunc_vlg_pc_read__3__Vfuncout);
        vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst 
            = __Vfunc_vlg_pc_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst = 0U;
    }
    if (((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
         & (((IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask) 
             != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
            & (vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
               != vlSelf->top__DOT__Mem__DOT__waddr_reg)))) {
        vlSelf->top__DOT__Mem__DOT___m_m_wready = 1U;
        Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(
                                                                   ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                                                     ? vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr
                                                                     : 0U), 
                                                                   ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)
                                                                      ? 0U
                                                                      : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)
                                                                     : 0U), 
                                                                   ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                                                     ? (IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask)
                                                                     : 0U));
    } else {
        vlSelf->top__DOT__Mem__DOT___m_m_wready = 0U;
    }
    vlSelf->top__DOT__Mem__DOT__bvalid_reg = ((~ (IData)(vlSelf->reset)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)))));
    if (vlSelf->reset) {
        __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter = 0U;
        __Vdly__top__DOT__Mem__DOT__delay__DOT__counter = 0U;
        vlSelf->top__DOT__Mem__DOT__delay__DOT__counter 
            = __Vdly__top__DOT__Mem__DOT__delay__DOT__counter;
        vlSelf->top__DOT__EXU__DOT__lastdnpc = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_23 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_22 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_21 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_20 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_19 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_18 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_17 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_16 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_14 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_13 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_12 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_11 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_10 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_9 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_8 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_4 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_0 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_2 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_5 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_6 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_7 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_24 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_25 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_26 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_27 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_28 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_29 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_30 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_31 = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_raddr_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_wmask_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__reg_wen_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_rmask_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__reg_waddr_reg = 0U;
        vlSelf->top__DOT__Mem__DOT__rresp_reg = 0U;
        vlSelf->top__DOT__Mem__DOT__rdata_reg = 0U;
        vlSelf->top__DOT__Mem__DOT__bresp_reg = 0U;
        vlSelf->top__DOT__IFU__DOT__ardata_reg = 0U;
        vlSelf->__Vdly__top__DOT__IFU__DOT__arvalid_reg = 0U;
        vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG = 0x80000000U;
    } else {
        if ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))) {
            __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter 
                = (0x1fU & ((IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter) 
                            - (IData)(1U)));
        }
        if (vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN) {
            __Vdly__top__DOT__Mem__DOT__delay__DOT__counter = 5U;
        } else if ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))) {
            __Vdly__top__DOT__Mem__DOT__delay__DOT__counter 
                = (0x1fU & ((IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter) 
                            - (IData)(1U)));
        }
        vlSelf->top__DOT__Mem__DOT__delay__DOT__counter 
            = __Vdly__top__DOT__Mem__DOT__delay__DOT__counter;
        vlSelf->top__DOT__EXU__DOT__lastdnpc = vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc;
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
             & (0xbU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_11 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xaU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_10 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (9U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_9 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (8U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_8 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (4U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_4 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))))) {
            vlSelf->top__DOT__Reg__DOT__reg_0 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_1 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_2 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (5U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_5 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (6U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_6 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_3 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (7U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_7 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x18U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_24 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x19U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_25 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1aU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_26 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1bU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_27 = vlSelf->top__DOT___EXU_io_reg_wdata;
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
        if (vlSelf->top__DOT__IDU__DOT__state_reg) {
            vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg 
                = vlSelf->top__DOT__EXU__DOT___alu_io_result;
            vlSelf->top__DOT__EXU__DOT__mem_raddr_reg 
                = vlSelf->top__DOT__EXU__DOT___alu_io_result;
            vlSelf->top__DOT__EXU__DOT__mem_wmask_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask;
            vlSelf->top__DOT__EXU__DOT__reg_wen_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen;
            vlSelf->top__DOT__EXU__DOT__mem_rmask_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask;
            vlSelf->top__DOT__EXU__DOT__reg_waddr_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr;
        }
        if (vlSelf->top__DOT__EXU__DOT__mem_ren_reg) {
            vlSelf->top__DOT__Mem__DOT__rresp_reg = 
                (((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                  & ((((vlSelf->top__DOT__Mem__DOT___GEN 
                        >> 0x1fU) & (0x8fffffffU > vlSelf->top__DOT__Mem__DOT___GEN)) 
                      | ((0xa00003f7U < vlSelf->top__DOT__Mem__DOT___GEN) 
                         & (0xa0000400U > vlSelf->top__DOT__Mem__DOT___GEN))) 
                     | ((0xa0000047U < vlSelf->top__DOT__Mem__DOT___GEN) 
                        & (0xa0000050U > vlSelf->top__DOT__Mem__DOT___GEN))))
                  ? ((1U == (7U & vlSelf->top__DOT__Mem__DOT___GEN_0))
                      ? (0U == (vlSelf->top__DOT__Mem__DOT___m_m_rdata 
                                >> 8U)) : ((2U == (7U 
                                                   & vlSelf->top__DOT__Mem__DOT___GEN_0))
                                            ? (0U == 
                                               (vlSelf->top__DOT__Mem__DOT___m_m_rdata 
                                                >> 0x10U))
                                            : (4U == 
                                               (7U 
                                                & vlSelf->top__DOT__Mem__DOT___GEN_0))))
                  : 0U);
            vlSelf->top__DOT__Mem__DOT__rdata_reg = vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg;
        }
        if (vlSelf->top__DOT__EXU__DOT__mem_wen_reg) {
            vlSelf->top__DOT__Mem__DOT__bresp_reg = 
                ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                 & ((((vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
                       >> 0x1fU) & (0x8fffffffU > vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr)) 
                     | ((0xa00003f7U < vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr) 
                        & (0xa0000400U > vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr))) 
                    | ((0xa0000047U < vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr) 
                       & (0xa0000050U > vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr))));
        }
        if (vlSelf->top__DOT__IFU__DOT__exu2in_reg) {
            vlSelf->top__DOT__IFU__DOT__ardata_reg 
                = vlSelf->top__DOT__IFU__DOT__indata_dnpc;
        }
        if (((IData)(vlSelf->top__DOT__IFU__DOT__rready_reg) 
             | (IData)(vlSelf->top__DOT__IFU__DOT__exu2in_reg))) {
            vlSelf->__Vdly__top__DOT__IFU__DOT__arvalid_reg 
                = vlSelf->top__DOT__IFU__DOT__exu2in_reg;
        }
        vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG 
            = vlSelf->top__DOT__IFU__DOT__indata_dnpc;
    }
    if (((IData)(vlSelf->top__DOT___EXU_io_out2ifu_valid) 
         & ((IData)(vlSelf->top__DOT___EXU_io_out2ifu_valid) 
            != (IData)(vlSelf->top__DOT__IFU__DOT__exu2in_reg)))) {
        vlSelf->top__DOT__IFU__DOT__indata_dnpc = vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc;
    }
    vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter 
        = __Vdly__top__DOT__Mem__DOT__delay_w__DOT__counter;
    if (vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN) {
        vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg 
            = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                : 0U);
    }
    vlSelf->top__DOT__IFU__DOT__exu2in_reg = vlSelf->top__DOT___EXU_io_out2ifu_valid;
    if (vlSelf->reset) {
        vlSelf->top__DOT__Mem__DOT__wmask_reg = 0U;
        vlSelf->top__DOT__Mem__DOT__waddr_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_wdata_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_wen_reg = 0U;
        __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0U;
        __Vdly__top__DOT__EXU__DOT__rready_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__bready_reg = 0U;
    } else {
        vlSelf->top__DOT__Mem__DOT__wmask_reg = vlSelf->top__DOT___EXU_io_w_exu_mem_wmask;
        vlSelf->top__DOT__Mem__DOT__waddr_reg = vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr;
        if (vlSelf->top__DOT__IDU__DOT__state_reg) {
            vlSelf->top__DOT__EXU__DOT__mem_wdata_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_src2;
        }
        if (((IData)(vlSelf->top__DOT__IDU__DOT__state_reg) 
             | (IData)(vlSelf->top__DOT__EXU__DOT__bready_reg))) {
            vlSelf->top__DOT__EXU__DOT__mem_wen_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)))) {
            __Vdly__top__DOT__EXU__DOT__m2IDUstate 
                = vlSelf->top__DOT__IDU__DOT__state_reg;
        }
        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)) 
                      | (3U != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))))) {
            __Vdly__top__DOT__EXU__DOT__rready_reg 
                = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                   & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
        }
        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_6)) 
                      | (4U != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))))) {
            vlSelf->top__DOT__EXU__DOT__bready_reg 
                = vlSelf->top__DOT__EXU__DOT___GEN_8;
        }
    }
    vlSelf->top__DOT__EXU__DOT___GEN_8 = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                          & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    if (vlSelf->reset) {
        vlSelf->top__DOT__Mem__DOT__rvalid_reg = 0U;
        vlSelf->top__DOT__EXU__DOT__mem_ren_reg = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__Mem__DOT__rvalid_en) 
             | (IData)(vlSelf->top__DOT__EXU__DOT__rready_reg))) {
            vlSelf->top__DOT__Mem__DOT__rvalid_reg 
                = vlSelf->top__DOT__Mem__DOT__rvalid_en;
        }
        if (((IData)(vlSelf->top__DOT__IDU__DOT__state_reg) 
             | (IData)(vlSelf->top__DOT__EXU__DOT__rready_reg))) {
            vlSelf->top__DOT__EXU__DOT__mem_ren_reg 
                = vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren;
        }
    }
    vlSelf->top__DOT__EXU__DOT__rready_reg = __Vdly__top__DOT__EXU__DOT__rready_reg;
    vlSelf->top__DOT__Mem__DOT___GEN_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__rready_reg) 
                                          & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
    vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN = 
        ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
         & (0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)));
    if (vlSelf->top__DOT__IDU__DOT__state) {
        vlSelf->top__DOT__IDU__DOT__exu_data_snpc = 
            ((IData)(4U) + vlSelf->io_pc);
        __Vdly__top__DOT__IDU__DOT__exu_data_pc = vlSelf->io_pc;
        vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask 
            = (((IData)(vlSelf->top__DOT__IDU__DOT___GEN_19) 
                | (3U != (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)))
                ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                      >> 0xcU))) ? 1U
                         : ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                          >> 0xcU)))
                             ? 2U : ((2U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                   >> 0xcU)))
                                      ? 4U : ((4U == 
                                               (7U 
                                                & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                       >> 0xcU))) 
                                                  << 1U))))));
        vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask 
            = (((IData)(vlSelf->top__DOT__IDU__DOT___GEN_20) 
                | (0x23U != (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)))
                ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                      >> 0xcU))) ? 1U
                         : ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                          >> 0xcU)))
                             ? 2U : ((2U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                   >> 0xcU))) 
                                     << 2U))));
        vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                        >> 7U));
        vlSelf->top__DOT__IDU__DOT__exu_data_src1 = vlSelf->top__DOT__Reg__DOT__casez_tmp;
        vlSelf->top__DOT__IDU__DOT__exu_data_src2 = vlSelf->top__DOT__Reg__DOT__casez_tmp_0;
        vlSelf->top__DOT__IDU__DOT__exu_data_csr = 
            ((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
              ? vlSelf->top__DOT__Reg__DOT__csr_0 : 
             ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
               ? vlSelf->top__DOT__Reg__DOT__csr_1 : 
              ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                ? vlSelf->top__DOT__Reg__DOT__csr_2
                : vlSelf->top__DOT__Reg__DOT__csr_3)));
        vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5 
            = ((0xffffffffU == vlSelf->top__DOT__Reg__DOT__reg_15)
                ? 0U : vlSelf->top__DOT__Reg__DOT__reg_15);
        vlSelf->top__DOT__IDU__DOT__exu_data_mstatus 
            = ((0xf0000000U & vlSelf->top__DOT__Reg__DOT__csr_2) 
               | (0xfffffffU & (0x80U | (vlSelf->top__DOT__Reg__DOT__csr_2 
                                         | (8U & (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                  >> 4U))))));
        if ((0x33U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
            vlSelf->top__DOT__IDU__DOT__exu_data_imm = 0U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                 >> 0xcU))) ? (0U != 
                                               (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                >> 0x19U))
                    : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
            __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 1U;
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
            vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->top__DOT__IFU__DOT__inst_reg 
                      >> 0x14U));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                 >> 0xcU))) ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
            __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 2U;
        } else {
            if ((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__IFU__DOT__inst_reg 
                          >> 0x14U));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 3U;
            } else if ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                      >> 7U))));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 4U;
            } else if ((0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                      >> 7U)))));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 5U;
            } else if ((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (0xfffff000U & vlSelf->top__DOT__IFU__DOT__inst_reg);
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 6U;
            } else if ((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (0xfffff000U & vlSelf->top__DOT__IFU__DOT__inst_reg);
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 7U;
            } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff000U & vlSelf->top__DOT__IFU__DOT__inst_reg) 
                          | ((0x800U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                      >> 0x14U)))));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 8U;
            } else if ((0x67U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__IFU__DOT__inst_reg 
                          >> 0x14U));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 9U;
            } else if ((0x73U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))) {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                    = (((- (IData)((vlSelf->top__DOT__IFU__DOT__inst_reg 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__IFU__DOT__inst_reg 
                          >> 0x14U));
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type 
                    = ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                     >> 0xcU))) ? 0xaU
                        : ((2U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                         >> 0xcU)))
                            ? 0xbU : ((0U == (7U & 
                                              (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                               >> 0xcU)))
                                       ? (0xcU | (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                      >> 0x14U))))
                                       : 0U)));
            } else {
                vlSelf->top__DOT__IDU__DOT__exu_data_imm = 0U;
                __Vdly__top__DOT__IDU__DOT__exu_data_inst_type = 0U;
            }
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                    | (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)))
                    ? 0U : ((0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))
                             ? (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0)
                             : ((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))
                                 ? 0x10U : ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_12)
                                             ? 0U : 
                                            ((IData)(
                                                     ((0x2073U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                             >> 0xcU)))))
                                              ? 0x10U
                                              : 3U)))));
        }
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__IDU__DOT__state = 0U;
        vlSelf->top__DOT__IDU__DOT__state_reg = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_2 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_15 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_0 = 0U;
    } else {
        __Vdly__top__DOT__IDU__DOT__state = ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                             & (IData)(vlSelf->top__DOT__IFU__DOT__rready_reg));
        vlSelf->top__DOT__IDU__DOT__state_reg = vlSelf->top__DOT__IDU__DOT__state;
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_1 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_2 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_3 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xfU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_15 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
             & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24)) 
                & (0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))) {
            vlSelf->top__DOT__Reg__DOT__csr_0 = ((1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                     | ((0xcU 
                                                         != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24))))
                                                  ? 0U
                                                  : vlSelf->top__DOT__IDU__DOT__exu_data_pc);
        } else if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
                    & (0U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_0 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
    }
    vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren = 
        (((IData)(vlSelf->top__DOT__IDU__DOT__state) 
          & (~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19))) 
         & (3U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)));
    vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen = 
        (((IData)(vlSelf->top__DOT__IDU__DOT__state) 
          & (~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_20))) 
         & (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)));
    vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen = 
        ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
         & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_20) 
            | ((~ ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                   | (0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)))) 
               & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_13) 
                  | ((0x73U == (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                     & (IData)(vlSelf->top__DOT__IDU__DOT___GEN_15))))));
    if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                   | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19)) 
                  | (3U != (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)))))) {
        vlSelf->top__DOT__IDU__DOT__exu_data_il_us 
            = ((~ (((0U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                  >> 0xcU))) | (1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                    >> 0xcU)))) 
                   | (2U == (7U & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                   >> 0xcU))))) & (
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                         >> 0xcU))) 
                                                    | (5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                           >> 0xcU)))) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us)));
    }
    vlSelf->top__DOT__EXU__DOT___GEN_3 = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                          & ((IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg) 
                                             & (1U 
                                                == 
                                                ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                                   : 0U)
                                                  : 3U))));
    vlSelf->top__DOT__Mem__DOT__rvalid_en = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                             & ((~ (IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)) 
                                                & ((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN)) 
                                                   & ((0U 
                                                       != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                                      & (1U 
                                                         == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
    vlSelf->top__DOT__IDU__DOT__state = __Vdly__top__DOT__IDU__DOT__state;
    vlSelf->top__DOT__IDU__DOT__exu_data_pc = __Vdly__top__DOT__IDU__DOT__exu_data_pc;
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    vlSelf->top__DOT__IDU__DOT__exu_data_inst_type 
        = __Vdly__top__DOT__IDU__DOT__exu_data_inst_type;
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 
        = ((0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_4 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16))));
    vlSelf->top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17));
    vlSelf->__VdfgTmp_h570e6332__0 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                       : (((2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))
                                           ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                           : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                               ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                   ? 0U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_pc
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                                                        | (9U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                                                     : 0U))))));
    vlSelf->top__DOT__EXU__DOT___GEN_5 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((~ 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg))) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4))));
    vlSelf->top__DOT__EXU__DOT___GEN_6 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4) 
                                          | (3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->__VdfgTmp_he9709539__0 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                       ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr)
                                       : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                               ? (IData)(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg)
                                               : 0U)
                                           : ((1U & 
                                               ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                                | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)))
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((~ 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg))) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_6))));
    vlSelf->top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_6) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->top__DOT__Reg__DOT___GEN = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                        & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                             ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3) 
                                                 & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                                 : 
                                                ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                 & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19) 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))))) 
                                           & (0U != (IData)(vlSelf->__VdfgTmp_he9709539__0))));
    if (vlSelf->top__DOT__EXU__DOT__mem_ren_reg) {
        vlSelf->top__DOT___Mem_io_r_mem_exu_rdata = 
            ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
              ? vlSelf->top__DOT__Mem__DOT__rdata_reg
              : 0U);
        if (vlSelf->top__DOT__EXU__DOT___GEN_5) {
            vlSelf->top__DOT__Mem__DOT___GEN = 0U;
            vlSelf->top__DOT__Mem__DOT___GEN_0 = 0U;
        } else {
            vlSelf->top__DOT__Mem__DOT___GEN = vlSelf->top__DOT__EXU__DOT__mem_raddr_reg;
            vlSelf->top__DOT__Mem__DOT___GEN_0 = (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg);
        }
    } else {
        vlSelf->top__DOT___Mem_io_r_mem_exu_rdata = 2U;
        vlSelf->top__DOT__Mem__DOT___GEN = 0U;
        vlSelf->top__DOT__Mem__DOT___GEN_0 = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h570e6332__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h570e6332__0);
        vlSelf->top__DOT___EXU_io_reg_waddr = vlSelf->__VdfgTmp_he9709539__0;
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
        vlSelf->top__DOT___EXU_io_reg_waddr = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT__mem_ren_reg) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(vlSelf->top__DOT__Mem__DOT___GEN, vlSelf->top__DOT__Mem__DOT___GEN_0, vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout);
        vlSelf->top__DOT__Mem__DOT___m_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT__Mem__DOT___m_m_rdata = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT___GEN_7) {
        vlSelf->top__DOT___EXU_io_w_exu_mem_wmask = 0U;
        vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_w_exu_mem_wmask = 
            (7U & vlSelf->top__DOT__EXU__DOT__mem_wmask_reg);
        vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
            = vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg;
    }
    vlSelf->top__DOT__EXU__DOT___GEN_24 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    vlSelf->top__DOT__EXU__DOT___GEN_26 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21))) 
                   | (6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_26)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    vlSelf->top__DOT__EXU__DOT___GEN_27 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_26)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                : ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                    ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_csr))))
            : 0U);
    vlSelf->top__DOT__EXU__DOT___alu_io_result = ((0U 
                                                   == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                   + vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                    ? 
                                                   (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                    - vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                     & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                      | vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                       ? 
                                                      (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                       ^ vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                        ? 
                                                       (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                        << (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                         ? 
                                                        (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                         >> (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                           ? 
                                                          VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                            ? 
                                                           (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                            < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                             ? 
                                                            (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                             == vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                              ? 
                                                             (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                              >= vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                               ? 
                                                              VL_GTES_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                               : 
                                                              ((0xdU 
                                                                == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                                ? 
                                                               (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                                != vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                                : 0U))))))))))))));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        if (vlSelf->top__DOT__EXU__DOT___GEN_4) {
            vlSelf->top__DOT___EXU_io_reg_wdata = vlSelf->top__DOT__EXU__DOT___alu_io_result;
            vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                = vlSelf->top__DOT__IDU__DOT__exu_data_snpc;
        } else if ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))) {
            if (vlSelf->top__DOT__EXU__DOT___GEN_3) {
                vlSelf->top__DOT___EXU_io_reg_wdata 
                    = ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us)
                        ? vlSelf->top__DOT___Mem_io_r_mem_exu_rdata
                        : ((1U == vlSelf->top__DOT__EXU__DOT__mem_rmask_reg)
                            ? (((- (IData)(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                            & ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1) 
                                               & (vlSelf->top__DOT__Mem__DOT__rdata_reg 
                                                  >> 7U))))) 
                                << 8U) | ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                           ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                               ? (0xffU 
                                                  & vlSelf->top__DOT__Mem__DOT__rdata_reg)
                                               : 0U)
                                           : 2U)) : 
                           ((2U == vlSelf->top__DOT__EXU__DOT__mem_rmask_reg)
                             ? (((- (IData)(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                             & ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1) 
                                                & (vlSelf->top__DOT__Mem__DOT__rdata_reg 
                                                   >> 0xfU))))) 
                                 << 0x10U) | ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                               ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__Mem__DOT__rdata_reg)
                                                   : 0U)
                                               : 2U))
                             : vlSelf->top__DOT___Mem_io_r_mem_exu_rdata)));
                vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                    = vlSelf->top__DOT__IDU__DOT__exu_data_snpc;
            } else {
                vlSelf->top__DOT___EXU_io_reg_wdata = 0U;
                vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 0x80000000U;
            }
        } else {
            vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                      ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                       ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                        ? vlSelf->top__DOT__IDU__DOT__exu_data_csr
                                                        : 0U)))));
            vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                = ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                    ? (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8) 
                        & (1U == ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                   ? (((IData)(vlSelf->top__DOT__EXU__DOT__bready_reg) 
                                       & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))
                                       ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                       : 0U) : 3U)))
                        ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                        : 0x80000000U) : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                           ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                                               ? (vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                                                  + vlSelf->top__DOT__IDU__DOT__exu_data_pc)
                                               : vlSelf->top__DOT__IDU__DOT__exu_data_snpc)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                                               ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                   ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_csr
                                                     : 0x80000000U))))));
        }
    } else {
        vlSelf->top__DOT___EXU_io_reg_wdata = 0U;
        vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 0x80000000U;
    }
    if (vlSelf->top__DOT__EXU__DOT___GEN_27) {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = 0U;
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = (3U 
                                                 & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                     ? 
                                                    ((0x341U 
                                                      == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                      ? 0U
                                                      : 
                                                     ((0x342U 
                                                       == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                       ? 1U
                                                       : 
                                                      ((0x300U 
                                                        == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                        ? 2U
                                                        : 
                                                       (- (IData)(
                                                                  (0x305U 
                                                                   == vlSelf->top__DOT__IDU__DOT__exu_data_imm))))))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                      ? 1U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                      << 1U))));
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = ((0xaU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                  ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                   ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_mstatus
                                                     : 0U))));
    }
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->top__DOT__IFU__DOT__inst_reg);
}
