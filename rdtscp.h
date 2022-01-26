#ifndef _RDTSCP_H_
#define _RDTSCP_H_

#include <stdint.h>

/*
 * rdtscp - ReaD Time-Stamp Counter and Processor id
 * @param cycles: get time-stamp counter
 * @param pid   : get processor id
 * @return
 */
void rdtscp(uint64_t *cycles, uint64_t *pid);

#endif // _RDTSCP_H_
