#include "config.h"
#include "debug.h"
#include "utils.h"
#include <assert.h>
#include <cstdint>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<mem.h>

#ifdef CONFIG_MTRACE
//memory tarce
unsigned int write_buf[100000000];
unsigned int read_buf[100000000];
unsigned int write_data_buf[100000000];
unsigned int read_data_buf[100000000];
int write_num=0;
int read_num=0;
#endif

static long load_img();

#ifdef MROM
static uint8_t pmem[CONFIG_MLEN] __attribute((aligned(4096)))={};
#else
static uint8_t pmem[CONFIG_MLEN] __attribute((aligned(4096)))={};
#endif

static uint8_t psram_mem[0x400000] __attribute((aligned(4096)))={};// 0x8 ~ 0x9ff.... 
static uint16_t sdram_mem[4][8192][512] __attribute((aligned(4096)))={};


static uint32_t img[]
{
	0x100007b7,
	0x04100713,
	0x00e78023, //ebreak
	0x0000006f,
};

long img_size;

void init_mem()
{

	img_size=load_img();

	//memcpy(flash,img,sizeof(img));
}
static void out_of_bound(uint32_t addr)
{
	printf("error out_of_bound\naddress = 0x%x\npc = 0x%x\n",addr,top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__pc_reg);
	#ifdef CONFIG_MTRACE
		log_write("----------write----------\n");
		for(int i=0;i<write_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",write_buf[i],write_data_buf[i]);
  		}
  		log_write("--------  read  ---------\n");
  		for(int i=0;i<read_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",read_buf[i],read_data_buf[i]);
  		}
	#endif
	tfp->close();
	assert(0);

}
static inline bool check_psram(uint32_t addr)
{
	return (addr >= 0x000000 && addr < 0x400000);
}
//check mem if out_of_bond will excute the fun out_of_bond
#ifdef MROM
static inline bool check_mem(uint32_t addr)
{
	return (addr>=CONFIG_MBASEADDR&&addr<(CONFIG_MBASEADDR+CONFIG_MLEN));
}


uint8_t* guest_to_host(uint32_t paddr) {return pmem+paddr-CONFIG_MBASEADDR;}
#else
static inline bool check_mem(uint32_t addr)
{
	return (addr>=CONFIG_MBASEADDR&&addr<(CONFIG_MBASEADDR+CONFIG_MLEN));
}

uint8_t* guest_to_host(uint32_t paddr) {return pmem+paddr-CONFIG_MBASEADDR;}
#endif


uint32_t pmem_read(uint32_t addr,int len)
{
	uint32_t ret = host_read(guest_to_host(addr),len);
	return ret;
}
void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}


uint32_t pc_read(uint32_t &pc)
{
	uint32_t val=pmem_read(pc,4);
	return val;
}
uint32_t host_read(void* addr,int len)
{
	switch(len){
	case 1: return *(uint8_t *)addr;
	case 2: return *(uint16_t *)addr;
	case 4: return *(uint32_t *)addr;
	default:
	{ printf("pmem_read error len is %d\n",len); /*assert(0);*/    return 0;}
	}
}
//pmem read in mem.v
extern "C" int vlg_pmem_read(int ad,int len)
{
	uint32_t addr=(uint32_t)ad;
	if(likely(check_mem(addr)))
	{
	uint32_t data=pmem_read(addr, len);
	#ifdef  CONFIG_MTRACE
	 	read_buf[read_num]=addr;
		read_data_buf[read_num]=data;
  		read_num++;
	#endif
	return (int) data; 
	}
	else if(addr == CONFIG_RTC_MMIO || addr ==CONFIG_RTC_MMIO+4) {
	#ifdef CONFIG_DEVICE
		return mmio_read(addr,len);
	#endif

	}
	return 0;
	printf("read\n");
	out_of_bound(addr);
	return 0;
}

extern "C" int vlg_pc_read(int ad)
{
	uint32_t pc=(uint32_t)ad;
	/*
	if(pc==0)
	{
		pc=0x80000000;
	}
	*/
	if(likely(check_mem(pc)))
	{
	uint32_t data=pmem_read(pc, 4);
	return (int) data; 
	}
	printf("pc_read\n");
	out_of_bound(pc);
	return 0;
}



void host_write(void* addr, int len, uint32_t data)
{
  	switch (len) {
          case 1: *(uint8_t  *)addr = data; return;
    	  case 2: *(uint16_t *)addr = data; return;
    	  case 4: *(uint32_t *)addr = data; return;
    	  default:
	  { assert(0); printf("pmem_write error\n");   }
	}
}
//pmem_write in mem.v
extern "C" void vlg_pmem_write(int ad,int wdata,int len)
{
	uint32_t addr=(uint32_t)ad;
	if(likely(check_mem(addr)))
	{
	uint32_t data=(uint32_t)wdata;
	#ifdef CONFIG_MTRACE
	write_buf[write_num]=addr;
	write_data_buf[write_num]=data;
	write_num++;
	#endif
	pmem_write(addr,len,data);
	return ;
	}
	#ifdef CONFIG_DEVICE
	uint32_t data=(uint32_t)wdata;
		return mmio_write(addr,len,data);
	#endif
	printf("npc write\n");
	out_of_bound(addr);
}
#ifdef MROM

uint8_t* NPC_guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASEADDR; }

static long load_img(){
   extern char *img_file;
   if (img_file == NULL) {
     printf("No image is given. Use the default build-in image.");
     return 4096; // built-in image size
   }           
               
   FILE *fp = fopen(img_file, "rb");
   //assert(fp==NULL);
               
   fseek(fp, 0, SEEK_END);
   long size = ftell(fp);
   Log("The image is %s, size = %ld", img_file, size); 
   fseek(fp, 0, SEEK_SET);
   int ret = fread(NPC_guest_to_host(CONFIG_MBASEADDR), size, 1, fp);
   if(ret != 1)
   {
	printf("can't load the image\r\n");
   }
               
   fclose(fp); 
   return size;
}
#else
uint8_t* NPC_guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASEADDR; }

static long load_img(){
   extern char *img_file;
   if (img_file == NULL) {
     printf("No image is given. Use the default build-in image.");
     return 4096; // built-in image size
   }           
               
   FILE *fp = fopen(img_file, "rb");
   //assert(fp==NULL);
               
   fseek(fp, 0, SEEK_END);
   long size = ftell(fp);
   Log("The image is %s, size = %ld", img_file, size); 
   fseek(fp, 0, SEEK_SET);
   int ret = fread(NPC_guest_to_host(CONFIG_MBASEADDR), size, 1, fp);
   if(ret != 1)
   {
	printf("can't load the image\r\n");
   }
               
   fclose(fp); 
   return size;
}
#endif


void pmem_out()
{
		#ifdef CONFIG_MTRACE
		log_write("----------write----------\n");
		for(int i=0;i<write_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",write_buf[i],write_data_buf[i]);
  		}
  		log_write("--------  read  ---------\n");
  		for(int i=0;i<read_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",read_buf[i],read_data_buf[i]);
  		}
		#else 
		printf("don't open the mtrace");
		#endif
}


extern "C" void vlg_uart(int ad,int data,int mask){
	uint32_t addr=(uint32_t)ad;
	uint32_t offset=addr-CONFIG_SERIAL_MMIO;
	if(offset==0 && mask != 0)
	{
		printf("%c",((uint32_t)data & 0x000000ff));
	}
	else{
		printf("do not support offset = %d\n the input addr is %x\n",offset,addr);
		assert(0);
	}
}

extern "C" int psram_read(int32_t addr){
	uint32_t ad = ((uint32_t)addr&~3);
	if(likely(check_psram(addr)))
	{
	uint32_t data = host_read(ad+psram_mem,4);
	return (int)data; 
	}
	printf("read\n");
	out_of_bound(addr);
	return 0;
}

extern "C" void psram_write(int32_t addr, int32_t data,int32_t cnt)
{
	uint32_t ad = (uint32_t)addr;
	uint32_t da = (uint32_t)data;
	int len = 4;
	//printf("psram %x  %x\n",ad,da);
	if(likely(check_psram(addr)))
	{
	if(cnt == 2 ) 
	{
		len = 1;
	}
	else if (cnt==4)
	{
		len = 2;
		da = (da & 0xff) << 8 | (da & 0xff00) >>8;
	}
	else{
		da = ((da >> 24) & 0xFF) |      
           ((da >> 8) & 0xFF00) |      
           ((da << 8) & 0xFF0000) |    
           ((da << 24) & 0xFF000000);  
	}
	host_write(ad+psram_mem,len,da);
	return ;
	}
	printf("npc write\n");
	out_of_bound(addr);
}

extern "C" int sdram_read (int row_addr, int col_addr, int bank)
{
	uint16_t data = 0;
	data = sdram_mem[bank][row_addr][col_addr]; 
	printf("sdram read data   %x bank  %d r_addr  %d c_addr  %x\n",data,bank,row_addr,col_addr);
	return (int)data;
}

extern "C" void sdram_write (int row_addr, int col_addr, int data_in, int bank,int dqm)
{
	printf("sdram write data=%x  bank=%d  r_addr=%d  c_addr=%x\n  dqm=%x\n",(uint16_t)data_in,bank,row_addr,col_addr,dqm);
	uint16_t data = sdram_mem[bank][row_addr][col_addr];
	if(dqm == 0)
	{
	sdram_mem[bank][row_addr][col_addr] = (uint16_t)data_in;
	}
	else if(dqm == 1)
	{
	sdram_mem[bank][row_addr][col_addr] = ((uint16_t)data_in&0xFF00) | (data&0x00FF);
	}
	else if(dqm == 2)
	{
	sdram_mem[bank][row_addr][col_addr] = ((uint16_t)data_in&0x00FF) | (data&0xFF00);
	}
}


extern "C" void mrom_read(int32_t addr, int32_t *data) { *(uint32_t*)data = *(uint32_t*)(pmem+(uint32_t)(addr & ~3)-CONFIG_MBASEADDR);}//printf("%x %x\r\n",(uint32_t)addr,*(uint32_t*)data); }
extern "C" void flash_read(int32_t addr, int32_t *data) { *(uint32_t*)data = *(uint32_t*)(pmem+(uint32_t)(addr & ~3));/*(uint32_t*)data = *(uint32_t*)(pmem+(uint32_t)addr);*/ }
