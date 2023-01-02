#include "elevator.h"

#include "main.h"

direction_t g_current_direction = elevator_up;
floor_t g_current_floor = GROUND_FLOOR;
on_off_t g_fan_state = device_on,
		 g_light_state = device_on;

static void ToggleDeviceStatus(device_t dev, on_off_t status)
{
	switch (dev)
	{
		case device_fan:
			if (device_on == status)
			{
				HAL_GPIO_WritePin(FAN_GPIO_Port, FAN_Pin, GPIO_PIN_SET);
			}
			else
			{
				HAL_GPIO_WritePin(FAN_GPIO_Port, FAN_Pin, GPIO_PIN_RESET);
			}
		break;

		case device_light:
			if (device_on == status)
			{
				HAL_GPIO_WritePin(LIGHT_GPIO_Port, LIGHT_Pin, GPIO_PIN_SET);
			}
			else
			{
				HAL_GPIO_WritePin(LIGHT_GPIO_Port, LIGHT_Pin, GPIO_PIN_RESET);
			}
		break;
	}
}

static void ElevatorFSM()
{
	static floor_t NextFloor = GROUND_FLOOR;
	floor_t CurrentFloor = NextFloor;

	events_t event = GetNextEvent();

	switch(CurrentFloor){}
}


void Elevator()
{
	while(true)
	{
		ElevatorFSM();
	}
}

/*EOF*/
