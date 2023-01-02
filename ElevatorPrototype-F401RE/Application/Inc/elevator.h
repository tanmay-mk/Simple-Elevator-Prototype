#ifndef _ELEVATOR_H_
#define _ELEVATOR_H_

#include <stdint.h>
#include <stdbool.h>
#include "events.h"
#include "cbfifo.h"

typedef enum elevator_direction
{
	elevator_up,
	elevator_down
}direction_t;

typedef enum on_off
{
	device_on,
	device_off
}on_off_t;

typedef enum devices
{
	device_fan,
	device_light
}device_t;

void Elevator();

extern direction_t g_current_direction;
extern floor_t g_current_floor;
extern floor_t g_current_floor;
extern on_off_t g_fan_state, g_light_state;

#endif /*_ELEVATOR_H_*/
