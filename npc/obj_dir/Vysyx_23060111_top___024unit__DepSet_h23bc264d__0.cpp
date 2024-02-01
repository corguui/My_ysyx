// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024unit.h"

extern "C" void ebreak(int inst);

VL_INLINE_OPT void Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak(inst__Vcvt);
}

extern "C" void pmem_read(int raddr, int* data);

VL_INLINE_OPT void Vysyx_23060111_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060111_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int data__Vcvt;
    pmem_read(raddr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
