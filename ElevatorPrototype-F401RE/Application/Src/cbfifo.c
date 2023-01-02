#include "cbfifo.h"

uint32_t readLocation = 0,
		 writeLocation = 0,
		 bufferLength = 0;

uint32_t buffer[BUFFER_SIZE] = {0};

static bool exists(floor_t floor)
{
    uint8_t start = readLocation, end = writeLocation;

    if (start < end)
    {
        for (uint8_t i = start; i <= end; i++)
        {
            if (buffer[i] == floor)
            {
                return true ;
            }
        }
    }
    else
    {
        for (uint8_t i = start; i < BUFFER_SIZE; i++)
        {
            if (buffer[i] == floor)
            {
                return true ;
            }
        }
        for (uint8_t i = 0; i <= end; i++)
        {
            if (buffer[i] == floor)
            {
                return true ;
            }
        }
    }
    return false;
}

bool Enqueue(floor_t floor)
{
    if (false == exists(floor))
    {
        //check if the buffer is full
        if (BUFFER_SIZE == bufferLength)
        {
            //buffer is already full
            return false;
        }

        if ((floor < GROUND_FLOOR) && (floor >= TOTAL_FLOORS))
        {
            //invalid floor
            return false;
        }

        buffer[writeLocation++] = floor;
        bufferLength++;

        if (writeLocation >= BUFFER_SIZE)
        {
            //rollback to zero
            writeLocation = 0;
        }
        return true;
    }
    return false;
}

floor_t Dequeue()
{
    if (bufferLength <= 0)
    {
        bufferLength = 0;
        return EMPTY;
    }

    floor_t floor = buffer[readLocation];  //get current value
    buffer[readLocation] = EMPTY;           //clear out existing data
    readLocation++; bufferLength--;         //update variables

    if (bufferLength < 0)
    {
        bufferLength = 0;
    }

    if (readLocation >= BUFFER_SIZE)
    {
        readLocation = 0;
    }
    return floor;
}
