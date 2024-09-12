#include <am.h>
#include <klib-macros.h>
#include <stdint.h>
#include "../riscv.h"
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
extern char _data_start;
extern char _data_end;
extern char _data;
#define PMEM_SIZE (4 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define HEAP_END  ((uintptr_t)&_heap_start + 6 * 1024)

#define UART  0x10000000
#define UART_TX UART
#define UART_LCR (*(volatile unsigned char *)(UART + 0x03))
#define UART_LSB (*(volatile unsigned char *)(UART))
#define UART_MSB (*(volatile unsigned char *)(UART + 0x01))
#define UART_LSR (*(volatile unsigned char *)(UART + 0x05))

#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

Area heap = RANGE(&_heap_start, HEAP_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void mrom_2_sram(){
  uintptr_t len= (uintptr_t)&_data_end - (uintptr_t)&_data_start;
  char *dst = &_data;
  char *src = &_data_start;
  for(uintptr_t i=0;i<len;i++)
  {
    *dst++ = *src++;
  }
}

void UART_init(){
  unsigned int divisor = 2;

  UART_LCR |= 0x80;
  UART_LSB = divisor&0xff;
  UART_MSB = (divisor>>8) & 0xff;

  UART_LCR &= ~0X80;
  UART_LCR = 0x03;
}

void putch(char ch) 
{
  while (!(UART_LSR & 0x20));
  outb(UART_TX, ch);
}

void halt(int code) {
  npc_trap(code);
  while (1);
}

void _trm_init() {
  mrom_2_sram();
  UART_init();
  int ret = main(mainargs);
  halt(ret);
}