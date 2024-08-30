# Makefile for compiling char-test.c using riscv64-linux-gnu-gcc

# Compiler and tools
CC = riscv64-linux-gnu-gcc
OBJCOPY = riscv64-linux-gnu-objcopy

# Output files
TARGET = char-test
ELF = $(TARGET).elf
BIN = $(TARGET).bin

# Source files
SRC = char-test.c

# Compiler flags
CFLAGS = -nostdlib -march=rv32imac -mabi=ilp32e

# Default rule to build everything
all: $(BIN)

# Rule to compile C source file into an ELF file
$(ELF): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

# Rule to convert the ELF file to a binary file
$(BIN): $(ELF)
	$(OBJCOPY) -O binary -j .text $< $@

# Clean up generated files
clean:
	rm -f $(ELF) $(BIN)

# Phony targets
.PHONY: all clean

