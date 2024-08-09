// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" int vlg_pc_read(int pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int vlg_pc_read__Vfuncrtn__Vcvt;
    vlg_pc_read__Vfuncrtn__Vcvt = vlg_pc_read(pc__Vcvt);
    vlg_pc_read__Vfuncrtn = vlg_pc_read__Vfuncrtn__Vcvt;
}
