#include <common.h>
#include <cpu/cpu.h>
#include <Vysyx_23060111_top___024root.h>

void isa_reg_display() {
	int length=32;
	int i;
	printf("$ pc --> 0x%x \n",top->pc);
	for(i=0;i<length;i++)
	{
	printf("$%3s --> 0x%x \n", ysyx_23060111_top__DOT__reg___0240__DOT__rf[i]);
	}
}