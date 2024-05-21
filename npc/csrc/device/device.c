#include <common.h>
#include <utils.h> 

void init_map();
void init_serial();

void init_device() {
  init_map();
  IFDEF(CONFIG_HAS_SERIAL, init_serial());
}