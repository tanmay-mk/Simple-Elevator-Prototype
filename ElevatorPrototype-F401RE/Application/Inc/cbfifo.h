#ifndef _CBFIFO_H_
#define _CBFIFO_H_

#include "events.h"
#include <stdbool.h>
#include <stdint.h>

#define BUFFER_SIZE	(128)

extern uint32_t buffer[BUFFER_SIZE];

bool Enqueue(floor_t floor);
floor_t Dequeue();

#endif /*_CBFIFO_H_*/
