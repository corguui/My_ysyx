#include <stdio.h>
#include <stdlib.h>
 
#include "Vtop.h"  
#include "Vtop___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
 
VerilatedContext* contextp=NULL; 
Vtop *top=NULL; 
VerilatedVcdC* tfp=NULL;


int main_time=0; 


int main(int argc, char** argv, char** env)
{
 	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	top = new Vtop{contextp};

    contextp->traceEverOn(true);
	tfp=new VerilatedVcdC;
	top->trace(tfp,0);
	tfp->open("wave.vcd");

  	top->clock =0; top->eval();
	top->clock =1; top->eval();
    tfp->dump(main_time);
    main_time++;
    top->clock =0; top->eval();
	top->clock =1; top->eval();
    tfp->dump(main_time);
    main_time++;

    for(int i=0;i<10;i++)
    {
    top->clock =0; top->eval();
	top->clock =1; top->eval();
    tfp->dump(main_time);
    main_time++;
    }

    tfp->close();
    delete contextp;
    return 0;

}