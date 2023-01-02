#ifndef _GPIO_INFO_H_
#define _GPIO_INFO_H_

#include "main.h"
#include <stdint.h>

/*INDICATES ALL THE POSSIBLE ACTIONS THAT CAN HAPPEN DURING THE EXECUTION*/
typedef enum BUTTONS
{
	GroundFloorUp = 1, 	/*up button was pressed on ground floor*/
	FirstFloorUp,		/*up button was pressed on first floor*/
	FirstFloorDown,		/*down button was pressed on first floor*/
	SecondFloorUp,		/*up button was pressed on second floor*/
	SecondFloorDown,	/*down button was pressed on second floor*/
	ThirdFloorDown,		/*down button was pressed on third floor*/
	ElevatorGround,		/*ground floor was selected inside elevator*/
	ElevatorFirst,		/*first floor was selected inside elevator*/
	ElevatorSecond,		/*second floor was selected inside elevator*/
	ElevatorThird,		/*third floor was selected inside elevator*/
	ElevatorOpen,		/*elevator open button was pressed inside elevator*/
	ElevatorClose,		/*elevator close button was pressed inside elevator*/
	ElevatorLight,
	ElevatorFan,
	ElevatorEmergency,
	TotalButtons
}buttons_t;

typedef struct gpio_info
{
	GPIO_TypeDef* port;
	uint16_t pin;
}gpio_info_t;

extern const gpio_info_t buttonInfo[TotalButtons];

#endif /*_GPIO_INFO_H_*/
