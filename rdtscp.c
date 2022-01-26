#include <stdint.h>

#include "rdtscp.h"

void rdtscp(uint64_t *cycles, uint64_t *pid)
{
  // rdtscp
  // high cycles : edx
  // low cycles  : eax
  // processor id: ecx

  asm volatile
    (
     // Assembleur
     "rdtscp;\n"
     "shl $32, %%rdx;\n"
     "or %%rdx, %%rax;\n"
     "mov %%rax, (%[_cy]);\n"
     "mov %%ecx, (%[_pid]);\n"

     // outputs
     :

     // inputs
     :
     [_cy] "r" (cycles),
     [_pid] "r" (pid)

     // clobbers
     :
     "cc", "memory", "%eax", "%edx", "%ecx"
     );

  return;
}
