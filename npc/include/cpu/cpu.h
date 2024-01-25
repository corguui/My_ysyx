#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>

void cpu_exce_once(VerilatedVcdC* tfp);
void cpu_init();
void execute(uint64_t n);
void cpu_exce(uint64_t n);

#endif
