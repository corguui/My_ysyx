#include <am.h>
#include <klib-macros.h>
#include <stdint.h>
#include "../riscv.h"
extern char _heap_start;
extern char _heap_end;
int main(const char *args);

extern char _boot;
extern char _bss_end;
extern char _boot_start;

extern char _SSBL_addr;
extern char _SSBL_end;
extern char _SSBL_start;



#define UART  0x10000000
#define UART_TX UART
#define UART_LCR (*(volatile unsigned char *)(UART + 0x03))
#define UART_LSB (*(volatile unsigned char *)(UART))
#define UART_MSB (*(volatile unsigned char *)(UART + 0x01))
#define UART_LSR (*(volatile unsigned char *)(UART + 0x05))

#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
void FSBL() __attribute__((used));
void SSBL() __attribute__((used));

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;


volatile void SSBL() {
  uintptr_t len= (uintptr_t)&_bss_end - (uintptr_t)&_boot;
  char *dst = &_boot;
  char *src = &_boot_start;
  for(uintptr_t i=0;i<len;i++)
  {
    *dst++ = *src++;
  }
}
void FSBL(){
  uintptr_t flen = (uintptr_t)&_SSBL_end - (uintptr_t)&_SSBL_start;  
  char *fdst = &_SSBL_start;
  char *fsrc = &_SSBL_addr;
  for(uintptr_t k=0;k<flen;k++)
  {
    *fdst++ = *fsrc++;
  }
}


void id_show()
{
    unsigned int csr_val_011, csr_val_022;

    asm volatile("csrr %0, 0x011" : "=r"(csr_val_011));//ysyx

    asm volatile("csrr %0, 0x022" : "=r"(csr_val_022));//id 23060111
    
    putch((char)(csr_val_011 >> 24)); 
    putch((char)(csr_val_011 >> 16)); 
    putch((char)(csr_val_011 >> 8)); 
    putch((char)(csr_val_011));      
    putch('_');
    putch(((csr_val_022) >> 28) + '0');
    putch((((csr_val_022) >> 24)&0xF) + '0');
    putch((((csr_val_022) >> 20)&0xF) + '0');
    putch((((csr_val_022) >> 16)&0xF) + '0');
    putch((((csr_val_022) >> 12)&0xF) + '0');
    putch((((csr_val_022) >> 8)&0xF) + '0');
    putch((((csr_val_022) >> 4)&0xF) + '0');
    putch(((csr_val_022)&0xF) + '0');
}

void UART_init(){
  unsigned int divisor = 1;

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
  FSBL();
  SSBL();
  UART_init();
  //id_show(); //使用时记得在ld文件中添加
  int ret = main(mainargs);
  halt(ret);
}