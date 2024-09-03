#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (4 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define HEAP_END  ((uintptr_t)&_heap_start + 6 * 1024)
#define UART_TX  0x10000000

#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

Area heap = RANGE(&_heap_start, HEAP_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(UART_TX, ch);
}

void halt(int code) {
  npc_trap(code);
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}