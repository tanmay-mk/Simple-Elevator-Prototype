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
	GroundFloorUp = 0, 	/*up button was pressed on ground floor*/
	FirstFloorUp,		/*up button was pressed on first floor*/
	FirstFloorDown,		/*down button was pressed on first floor*/
	SecondFloorUp,		/*up button was pressed on second floor*/
	SecondFloorDown,	/*down button was pressed on second floor*/
	ThirdFloorUp,		/*up button was pressed on third floor*/
	ThirdFloorDown,		/*down button was pressed on third floor*/
	FourthFloorUp,		/*up button was pressed on fourth floor*/
	FourthFloorDown,	/*down button was pressed on fourth floor*/
	RoofDown,			/*down button was pressed on roof floor*/
	ElevatorGround,		/*ground floor was selected inside elevator*/
	ElevatorFirst,		/*first floor was selected inside elevator*/
	ElevatorSecond,		/*second floor was selected inside elevator*/
	ElevatorThird,		/*third floor was selected inside elevator*/
	ElevatorFourth,		/*fourth floor was selected inside elevator*/
	ElevatorRoof,		/*roof floor was selected inside elevator*/
	ElevatorOpen,		/*elevator open button was pressed inside elevator*/
	ElevatorClose,		/*elevator close button was pressed inside elevator*/
}events_t;

#endif /*_EVENTS_H_*/
