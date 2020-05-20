#include "stdio.h"
#include "stdint.h"

uint8_t GlobalVar_g = 5;

int32_t main (void)
{
  printf ("First str:__%d\n", GlobalVar_g);
GeneralConfig_block:
  {
    printf ("Second str:_%d\n", GlobalVar_g);
  }
TimerConfig_block:
  {
    uint8_t GlobalVar_g = 77;
    printf ("Third str:__%d\n", GlobalVar_g);
  }
  return 0;
}
