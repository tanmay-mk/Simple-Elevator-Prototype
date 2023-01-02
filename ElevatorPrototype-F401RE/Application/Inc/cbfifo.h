#ifndef _CBFIFO_H_
#define _CBFIFO_H_

#include "events.h"
#include <stdbool.h>
#include <stdint.h>

#define BUFFER_SIZE	(128)

typedef struct CBFIFO
{
    uint8_t readLocation;
    uint8_t writeLocation;
    uint8_t bufferLength;
    uint8_t buffer[BUFFER_SIZE];
}cbfifo_t;

extern cbfifo_t EVENTS_FIFO, FLOOR_FIFO;

bool Enqueue(cbfifo_t* fifo, int val);
int Dequeue(cbfifo_t* fifo);

#endif /*_CBFIFO_H_*/
