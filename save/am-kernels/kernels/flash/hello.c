#include <am.h>
#include <klib-macros.h>

__attribute__((noinline))
void check(bool cond) {
  if (!cond) halt(1);
}

/*
int main() {
  volatile unsigned int * flash =(volatile unsigned int*)0x30000000;

  for(int i=0;i<3;i++)
  {
    check(i+1==flash[i]); 
  }
  return 0;
}
*/
#define SPI_BASE_ADDR 0x10001000
#define SRAM_BASE_ADDR 0x0f000000


#define TX_OFFSET    0x04  // TX/RX 
#define RX_OFFSET    0x00
#define DIV_OFFSET   0x14  
#define SS_OFFSET    0x18  
#define CTRL_OFFSET  0x10  

#define SPI_TX    (*(volatile uint32_t *)(SPI_BASE_ADDR + TX_OFFSET))    
#define SPI_RX    (*(volatile uint32_t *)(SPI_BASE_ADDR + RX_OFFSET))    
#define SPI_DIV   (*(volatile uint32_t *)(SPI_BASE_ADDR + DIV_OFFSET))   
#define SPI_SS    (*(volatile uint32_t *)(SPI_BASE_ADDR + SS_OFFSET))    
#define SPI_CTRL  (*(volatile uint32_t *)(SPI_BASE_ADDR + CTRL_OFFSET))  


#define GO_BSY_BIT (1<<8)

unsigned int swap(unsigned int val) {
    return ((val >> 24) & 0xFF) |       // 取最高8位并移到最低位
           ((val >> 8) & 0xFF00) |      // 取次高8位并移到次低位
           ((val << 8) & 0xFF0000) |    // 取次低8位并移到次高位
           ((val << 24) & 0xFF000000);  // 取最低8位并移到最高位
}
/*
uint32_t f_read(uint32_t addr)
{ 
  SPI_SS = 0x00;  
  SPI_CTRL=0x40;
  uint32_t TX = ((addr & 0x00FFFFFF) | 0x03000000);
  SPI_RX = 0x0;
  SPI_SS = 0x01;
  SPI_TX = TX; 
  SPI_CTRL = 0x40 | GO_BSY_BIT;  

  while (SPI_CTRL & GO_BSY_BIT)
  {

  }

  return swap(SPI_RX);
}
*/
int main(){

  //SPI_DIV = 0x01;    
  /*
  volatile uint32_t* data = (volatile uint32_t*)0x30000000;
  check(*data==0x100007b7);
  data = (volatile uint32_t*)0x30000004;
  check(*data==0x04100713);
  */
  //data =f_read(0x30000008);
  //check(data==0x00e78023);
  /*
  for(int i=0;i<4;i++) 
  {
    (*(volatile uint32_t *)(SRAM_BASE_ADDR + i*0x4)) = f_read(0x30000000+i*0x4);
  }

*/
  void (*execute_from_sram)(void);
  execute_from_sram = (void (*)(void))0x30000000;

  // 跳转到SRAM并执行程序
  execute_from_sram();

  return 0;
}

/*  SPI bitrev
int main() {

    SPI_TX = 0x0084;     
    SPI_CTRL=0x810;
    SPI_DIV = 0x01;    
    SPI_SS = 0x80;    
    SPI_CTRL = SPI_CTRL | GO_BSY_BIT;  

    while (SPI_CTRL & GO_BSY_BIT)
    {

    }

    check((SPI_RX & 0xFF00) == 0x2100);

    
    return 0;
}
*/