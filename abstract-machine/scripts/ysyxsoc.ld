ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } >mrom AT >mrom :text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  } >mrom AT >mrom

  _data_start = LOADADDR(.data);
  .data : {
    *(.data)
  } >sram AT >mrom :data
  
  _data_end = LOADADDR(.bss);
  _data = .;
  edata = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } >mrom AT >mrom
  
  /* 设置堆的起始地址，手动设置为 0x0f000000 */
  /* heap 0x0f00_0000 -> 0x0f00_1800 */
  _heap_start = 0x0f000000;

    /* 设置堆栈的起始地址 */
    /*stack 0x0f00_1800 -> 0x0f00_2000 */
  _stack_top = (_heap_start + 0x1800); /* 栈的起始地址 */
  . = (_stack_top + 0x800);
  _stack_pointer = .;
  
  /* 记录数据段结束地址 */
  end = .;
  _end = .;
}
