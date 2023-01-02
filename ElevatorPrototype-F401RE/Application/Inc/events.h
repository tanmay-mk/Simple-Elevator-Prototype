#ifndef _EVENTS_H_
#define _EVENTS_H_

/*INDICATES WHICH FLOOR THE ELEVATOR IS CURRENTLY ON*/
typedef enum FLOORS
{
    EMPTY = -1,     //rolls over to 255 in uint8_t
    GROUND_FLOOR = 0,
    FIRST_FLOOR,
    SECOND_FLOOR,
    THIRD_FLOOR,
    FOURTH_FLOOR,
    ROOF,
    TOTAL_FLOORS
}floor_t;

/*INDICATES ALL THE POSSIBLE ACTIONS THAT CAN HAPPEN DURING THE EXECUTION*/
typedef enum EVENTS
{
	evt_GroundFloorUp = 1, 	/*up button was pressed on ground floor*/
	evt_FirstFloorUp,		/*up button was pressed on first floor*/
	evt_FirstFloorDown,		/*down button was pressed on first floor*/
	evt_SecondFloorUp,		/*up button was pressed on second floor*/
	evt_SecondFloorDown,	/*down button was pressed on second floor*/
	evt_ThirdFloorDown,		/*down button was pressed on third floor*/
	evt_ElevatorGround,		/*ground floor was selected inside elevator*/
	evt_ElevatorFirst,		/*first floor was selected inside elevator*/
	evt_ElevatorSecond,		/*second floor was selected inside elevator*/
	evt_ElevatorThird,		/*third floor was selected inside elevator*/
	evt_ElevatorOpen,		/*elevator open button was pressed inside elevator*/
	evt_ElevatorClose,		/*elevator close button was pressed inside elevator*/
	evt_ElevatorLight,
	evt_ElevatorFan,
	evt_ElevatorEmergency,
	TotalEvents
}events_t;

#endif /*_EVENTS_H_*/
