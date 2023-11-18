#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Vysyx_23060111_top.h"
#include"verilated.h"
#include"verilated_vcd_c.h"
#include"../hsrc/mem.h"



int main(int argc ,char** argv, char** env)
{
	//init
	int count=0;
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	Vysyx_23060111_top *ysyx_23060111_top = new Vysyx_23060111_top{contextp};

	VerilatedVcdC* tfp=new VerilatedVcdC;
	contextp->traceEverOn(true);
	ysyx_23060111_top->trace(tfp,0);
	tfp->open("wave.vcd");

	//init mem
	init_mem();
        uint32_t a=0x80000000;
	ysyx_23060111_top->pc=a;

	while(count<=1&&!contextp->gotFinish())
	{
		ysyx_23060111_top->inst =pc_read(ysyx_23060111_top->pc);
		printf("------%x\n",ysyx_23060111_top->pc);
		printf("------top->b %x\n",ysyx_23060111_top->inst);
		ysyx_23060111_top->eval();

		tfp->dump(contextp->time());
		contextp->timeInc(1);
		count++;
	}
	delete ysyx_23060111_top;
	tfp->close();
	delete contextp;
	return 0;
}

