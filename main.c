#include <stdio.h>
#include <stdint.h>

#include "rdtscp.h"

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
  uint64_t cycles = 0;
  uint64_t pid = 0;

  rdtscp(&cycles, &pid);

  printf("      cycles: %ld\n", cycles);
  printf("processor id: %ld\n", pid);

  return 0;
}
