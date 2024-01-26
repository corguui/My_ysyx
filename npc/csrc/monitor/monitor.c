#include <common.h>
#include <stdio.h>
#include <string.h>
#include <mem.h>

void init_mem();
void init_log();

void init_monitor(int argc, char *argv[]) {

        init_log();

	init_mem();
}
