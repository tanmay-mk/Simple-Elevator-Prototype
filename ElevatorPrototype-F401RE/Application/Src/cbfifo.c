#include "cbfifo.h"

cbfifo_t EVENTS_FIFO = {0},
		 FLOOR_FIFO = {0};

bool exists(cbfifo_t* fifo, int val)
{
    uint8_t start = fifo->readLocation,
    		end = fifo->writeLocation;

    if (start < end)
    {
        for (uint8_t i = start; i <= end; i++)
        {
            if (fifo->buffer[i] == val)
            {
                return true ;
            }
        }
    }
    else
    {
        for (uint8_t i = start; i < BUFFER_SIZE; i++)
        {
            if (fifo->buffer[i] == val)
            {
                return true ;
            }
        }
        for (uint8_t i = 0; i <= end; i++)
        {
            if (fifo->buffer[i] == val)
            {
                return true ;
            }
        }
    }
    return false;
}

bool Enqueue(cbfifo_t* fifo, int val)
{
    if (false == exists(fifo, val))
    {
        //check if the buffer is full
        if (BUFFER_SIZE == fifo->bufferLength)
        {
            //buffer is already full
            return false;
        }

        fifo->buffer[fifo->writeLocation++] = val;
        fifo->bufferLength++;

        if (fifo->writeLocation >= BUFFER_SIZE)
        {
            //rollback to zero
            fifo->writeLocation = 0;
        }
        return true;
    }
    return false;
}

int Dequeue(cbfifo_t* fifo)
{
    if (fifo->bufferLength <= 0)
    {
        fifo->bufferLength = 0;
        return EMPTY;
    }

    int val = fifo->buffer[fifo->readLocation];  //get current value
    fifo->buffer[fifo->readLocation] = EMPTY;           //clear out existing data
    fifo->readLocation++;
    fifo->bufferLength--;         //update variables

    if (fifo->bufferLength < 0)
    {
        fifo->bufferLength = 0;
    }

    if (fifo->readLocation >= BUFFER_SIZE)
    {
        fifo->readLocation = 0;
    }
    return val;
}



/*EOF*/
