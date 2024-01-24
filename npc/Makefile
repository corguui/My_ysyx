Vfile=$(wildcard ./vsrc/*.v)
Cfile=$(wildcard ./csrc/*.cpp)
Wavefile=$(wildcard ./*.vcd)
TOPfile=vsrc/ysyx_23060111_top.v

IMG ?= 

WORK_DIR = $(shell pwd)                 
INC_PATH := $(WORK_DIR)/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))
all:
	@echo "Write this Makefile by your self."

sim:$(Vfile) $(Cfile) $(TOPfile) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --trace --exe --build -Wno-lint -top ysyx_23060111_top $(TOPfile) $(subst $(TOPfile),,$^) -I/home/corgi/ysyx-workbench/npc/include --CFLAGS  -DIMG='\"$(IMG)\"' 	./obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 
wave:$(Wavefile)
	gtkwave $(Wavefile)
lint:$(Vfile)
	verilator --lint-only $(Vfile)





.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf $(BUILD_DIR)
include ../Makefile
