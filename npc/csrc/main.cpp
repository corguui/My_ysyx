#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<cstdint>
#include "Vysyx_23060111_top.h"
#include"verilated.h"
#include"verilated_vcd_c.h"
#include"Vysyx_23060111_top__Dpi.h"
#include"svdpi.h"
#include"../hsrc/mem.h"



VerilatedContext* contextp=NULL; 
Vysyx_23060111_top *top=NULL; 
VerilatedVcdC* tfp=NULL;

int time=0;

void cpu_exce_once(VerilatedVcdC* tfp);
void ebreak(int inst);


int main(int argc ,char** argv, char** env)
{
	//init
	printf("%s\n",IMG);
	int count=0;
	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	top = new Vysyx_23060111_top{contextp};
	contextp->traceEverOn(true);
	tfp=new VerilatedVcdC;

	top->trace(tfp,0);
	tfp->open("wave.vcd");

	//init mem
	init_mem();
        uint32_t a=0x80000000;
	top->pc=a;
	while(count<=10&&!contextp->gotFinish())
	{
		top->inst =pc_read(top->pc);
		if(count==2)
		{
		top->rst=1;
		}
		else
		{
		top->rst=0;
		}
		cpu_exce_once(tfp);

		//contextp->timeInc(1);
		count++;
	}
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}

void cpu_exce_once(VerilatedVcdC* tfp)
{
		top->clk =0; top->eval();
		tfp->dump(time);
		time++;
		top->eval();
		top->clk =1; top->eval();
		tfp->dump(time);
		time++;
		top->eval();
}
void ebreak (int inst)
{
	if(inst == 0x00100073 )
	{
	printf("error --------- ebreak\n");
	//assert(0);
	}
}


