// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__stl(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_triggers__stl(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060111_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ flag, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vysyx_23060111_top___024root___stl_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_vlg_pmem_read__2__Vfuncout;
    __Vfunc_vlg_pmem_read__2__Vfuncout = 0;
    // Body
    Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(0x80000000U, 1U, __Vfunc_vlg_pmem_read__2__Vfuncout);
    vlSelf->ysyx_23060111_top__DOT__m_rdata = ((IData)(vlSelf->ysyx_23060111_top__DOT__m_ren)
                                                ? __Vfunc_vlg_pmem_read__2__Vfuncout
                                                : 0U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5U] 
        = (0x6e00000000ULL | ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                               >> 0xcU))) 
                              << 0xdU));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6U] 
        = (0x2e00000000ULL | ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                               >> 0xcU))) 
                              << 0xdU));
    vlSelf->__VdfgTmp_h327dca1e__0 = (((QData)((IData)(
                                                       (0x7ffU 
                                                        & (- (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                      >> 0x1fU)))))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((0x200000U 
                                                                     & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                        >> 0xaU)) 
                                                                    | ((0x1fe000U 
                                                                        & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                           << 1U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                              >> 8U)) 
                                                                          | (0xffcU 
                                                                             & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                                >> 0x13U))))))));
    vlSelf->ysyx_23060111_top__DOT__opcode = (0x7fU 
                                              & vlSelf->ysyx_23060111_top__DOT__inst);
    vlSelf->__VdfgTmp_h170abfaf__0 = (((QData)((IData)(
                                                       (0xfffffU 
                                                        & (- (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                      >> 0x1fU)))))) 
                                       << 0xdU) | (QData)((IData)(
                                                                  ((0x1fc0U 
                                                                    & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                       >> 0x13U)) 
                                                                   | (0x3eU 
                                                                      & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                         >> 6U))))));
    vlSelf->ysyx_23060111_top__DOT__rout1 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_23060111_top__DOT__rout2 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0x14U))];
    vlSelf->__VdfgTmp_hc90cd392__0 = ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->ysyx_23060111_top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)((0xfffffU & (- (IData)(
                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                    >> 0x1fU)))))) 
            << 0xdU) | (QData)((IData)(((0x1fc0U & 
                                         (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x13U)) 
                                        | (0x3eU & 
                                           (vlSelf->ysyx_23060111_top__DOT__inst 
                                            >> 6U))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2U] 
        = ((QData)((IData)((((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x14U)))) 
           << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3U] 
        = ((QData)((IData)((((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x14U)))) 
           << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)((0x7ffU & (- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0x1fU)))))) 
            << 0x16U) | (QData)((IData)(((0x200000U 
                                          & (vlSelf->ysyx_23060111_top__DOT__inst 
                                             >> 0xaU)) 
                                         | ((0x1fe000U 
                                             & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                << 1U)) 
                                            | ((0x1000U 
                                                & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                   >> 8U)) 
                                               | (0xffcU 
                                                  & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 0x13U))))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5U] 
        = ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                            >> 0xcU))) << 0xdU);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6U] 
        = ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                            >> 0xcU))) << 0xdU);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4U] 
        = (0xde00000000ULL | vlSelf->__VdfgTmp_h327dca1e__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[0U] 
        = (IData)(vlSelf->__VdfgTmp_h170abfaf__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[1U] 
        = (0x46U | (IData)((vlSelf->__VdfgTmp_h170abfaf__0 
                            >> 0x20U)));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[2U] 
        = (0xe600U | (0xfffe0000U & (((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0x1fU))) 
                                      << 0x1dU) | (0x1ffe0000U 
                                                   & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                      >> 3U)))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[3U] 
        = (0xce0000U | ((0xfe000000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                        << 5U)) | (0x1ffffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      >> 3U))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[4U] 
        = (0x26000000U | (0x1ffffffU & ((0x1ffffe0U 
                                         & ((- (IData)(
                                                       (vlSelf->ysyx_23060111_top__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 5U)) 
                                        | (vlSelf->ysyx_23060111_top__DOT__inst 
                                           >> 0x1bU))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[5U] 
        = (((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                        >> 0x1fU))) << 0x16U) | ((0x200000U 
                                                  & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 0xaU)) 
                                                 | ((0x1fe000U 
                                                     & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                        << 1U)) 
                                                    | ((0x1000U 
                                                        & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                           >> 8U)) 
                                                       | (0xffcU 
                                                          & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                             >> 0x13U))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[6U] 
        = (0xdeU | ((0xffe00000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    << 9U)) | (1U & 
                                               ((- (IData)(
                                                           (vlSelf->ysyx_23060111_top__DOT__inst 
                                                            >> 0x1fU))) 
                                                >> 0xaU))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[7U] 
        = (0x6e00U | ((0xe0000000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                      << 0x11U)) | 
                      (0x1fffffU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    >> 0x17U))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[8U] 
        = (0x2e0000U | (0x1fffffffU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xfU)));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0U] 
        = (0x4600000000ULL | vlSelf->__VdfgTmp_h170abfaf__0);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 == vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge 
        = VL_GTES_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 >= vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2U] 
        = (0xce00000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3U] 
        = (0x2600000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                               == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
           == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out
            : 1ULL);
    vlSelf->inv_flag = (1U & (IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1));
}
