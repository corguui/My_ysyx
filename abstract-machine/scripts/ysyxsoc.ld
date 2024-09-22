ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; bss PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x30000000, LENGTH = 0xfffffff /*now is flash but I don't change name */
  sram : ORIGIN = 0x80000000, LENGTH = 0x400000 
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
  _data = .;
    *(.data*)
    *(.sdata*) /*子段*/
  _edata = .; /*子段得定义好 end_data才能正确显示*/
  } >sram AT >mrom :data
  _data_end = LOADADDR(.bss);

  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  _bss_end = .;
  } >sram AT>mrom :bss
  /* 设置堆的起始地址，手动设置为 0x0f000000 */
  /* heap 0x0f00_0000 -> 0x0f00_1800 */
  _heap_start = .;

    /* 设置堆栈的起始地址 */
    /*stack 0x0f00_1800 -> 0x0f00_2000 */
  _stack_top = (_heap_start + 0x300000); /* 栈的起始地址 */
  _heap_end = _stack_top;
  . = (_stack_top + 0x80000);
  _stack_pointer = .;
  
  /* 记录数据段结束地址 */
  end = .;
  _end = .;
}
