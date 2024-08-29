#include <cstdint>
#include<stdio.h>
//#include"svdpi.h"

#include <cpu/cpu.h>
#include <sdb.h>
#include "Vysyx_23060111___024root.h"
#include "mem.h"

VerilatedContext* contextp=NULL; 
Vysyx_23060111 *top=NULL; 
VerilatedVcdC* tfp=NULL;

void init_monitor();
void init_mode();
void parse_args(int argc,char *argv[]);

int main_time=0;
extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) { assert(0); }

int main(int argc ,char** argv, char** env)
{
	Verilated::commandArgs(argc, argv);
	parse_args(argc, argv);
	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	top = new Vysyx_23060111{contextp};
	#ifdef CONFIG_VCD
	contextp->traceEverOn(true);
	tfp=new VerilatedVcdC;

	top->trace(tfp,0);
	tfp->open("wave.vcd");
	#endif
	//init mode
	init_mode();

	//init_monitor
	init_monitor();

	//(npc)   command
	sdb_mainloop();
	#ifdef CONFIG_VCD
	tfp->close();
	#endif
	delete contextp;
	#ifdef CONFIG_MTRACE
	//print the mem read and write  ---logfile
	pmem_out();
	#endif
	return is_exit_status_bad();
}
void ebreak (int inst)
{
	if(inst == 0x00100073 )
	{
		//reg 10
	   NPCTRAP(top->rootp->top__DOT__Reg__DOT__reg_10);//ebreak
	}
	if(inst!=0&&top->rootp->top__DOT__inv_flag==1)
	{
		INV();//can't find the command type
	}
	else if(inst==0&&top->rootp->top__DOT__inv_flag==1)
	{
		top->rootp->top__DOT__inv_flag=0;
	}
}


