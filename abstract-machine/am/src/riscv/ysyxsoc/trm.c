#include <am.h>
#include <klib-macros.h>
#include <stdint.h>
#include "../riscv.h"
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
extern char _data_start;
extern char _data_end;
#define sram ((char *)0x0f000000)
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

void mrom_2_sram(){
  uintptr_t len= (uintptr_t)&_data_end - (uintptr_t)&_data_start;
  char *dst = sram;
  char *src = &_data_start;
  for(uintptr_t i=0;i<len;i++)
  {
    *dst++ = *src++;
  }
}

void putch(char ch) {
  outb(UART_TX, ch);
}

void halt(int code) {
  npc_trap(code);
  while (1);
}

void _trm_init() {
  mrom_2_sram();
  int ret = main(mainargs);
  halt(ret);
}