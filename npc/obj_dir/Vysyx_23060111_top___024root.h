// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060111_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060111_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060111_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060111_top__Syms;

class Vysyx_23060111_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    VL_IN(pc,31,0);
    VL_IN(snpc,31,0);
    VL_IN(dnpc,31,0);
    VL_IN(inst,31,0);
    VL_OUT(out,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060111_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060111_top___024root(Vysyx_23060111_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060111_top___024root();
    VL_UNCOPYABLE(Vysyx_23060111_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
