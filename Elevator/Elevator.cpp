/**
	Elevator.cpp
	Purpose: Describe the behaviour of an elevator.

	@author Raul Butuc
	@version 1.0.0	24/01/15
*/

#include "Elevator.h"
#include <iostream>

int Elevator::fixedId = 0;

/**
	Initialise an elevator, preparing it for usage.

	@param numOfFloors The number of floors in the building.
*/
Elevator::Elevator(int numOfFloors) {
	id = ++fixedId;
	state = AVAILABLE;
	currentFloor = 0;
	destinationFloor = 0;
	direction = NOT_MOVING;
	Elevator::numOfFloors = numOfFloors;
	verboseData = false;
}

/**
	Returns the id of the elevator.

	@return Elevator's id.
*/
int Elevator::getId(void) {
	return id;
}

/**
	Returns the state of the elevator.

	@return Elevator's state
*/
State Elevator::getState(void) {
	return state;
}

/**
	Returns the floor on which the elevator is located at a given moment in time.

	@return The current floor for the elevator.
*/
int Elevator::getCurrentFloor(void) {
	return currentFloor;
}

/**
	Returns the floor towards which the elevator is heading.

	@return The destination floor for the elevator.
*/
int Elevator::getDestinationFloor(void) {
	return destinationFloor;
}

/**
	Returns the direction in which the elevator is moving.

	@return The direction of the elevator.
*/
Direction Elevator::getDirection(void) {
	return direction;
}

/**
	Returns the number of floors in the building on which the elevator
	can move.

	@return numOfFloors Number of accessible floors for the elevator
*/
int Elevator::getNumOfFloors(void) {
	return numOfFloors;
}

/**
	Sets the flag for a verbose elevator debugging.

	@param verboseData The flag for verbose debugging.
*/
void Elevator::setVerboseData(bool verboseData) {
	Elevator::verboseData = verboseData;
}

/**
	Return the flag for a verbose elevator debugging.

	@return The flag for verbose debugging.
*/
bool Elevator::getVerboseData(void) {
	return verboseData;
}

/**
	Describes the movement of the elevator from the current floor to the
	destination floor.

	@param floor The destination floor.
*/
void Elevator::move(int destinationFloor) {
	if (destinationFloor > numOfFloors) {
		// @TODO: throw a custom exception
		return;
	}

	Elevator::destinationFloor = destinationFloor;

	state = IN_USE;

	if (destinationFloor - currentFloor < 0) {
		direction = DOWNWARDS;
	}
	else if (destinationFloor - currentFloor == 0) {
		direction = NOT_MOVING;
	}
	else {
		direction = UPWARDS;
	}

	if (verboseData == true) {
		std::cout << "Elevator #" << id << " destination floor: " <<
			destinationFloor << "\n";
		std::cout << "Elevator #" << id << " direction: " << 
			((direction == -1) ? "DOWNWARDS" : 
			((direction == 0) ? "NOT_MOVING" : "UPWARDS")) << "\n";
		std::cout << "Elevator #" << id << " state: " << 
			((state == -1) ? "NOT_AVAILABLE" : 
			((state == 0) ? "IN_USE" : "AVAILABLE")) << "\n";
	}

	while (currentFloor != destinationFloor) {
		msleep(1000);
		currentFloor += (int)direction;
		
		if (verboseData == true) {
			std::cout << "Elevator #" << id << 
				" moved to floor: " << currentFloor << "\n";
		}
	}

	direction = NOT_MOVING;
	state = AVAILABLE;
}

/**
	Makes the elevator available to the user.
*/
void Elevator::start(void) {
	state = AVAILABLE;
}

/**
	Makes the elevator unavailable to the user.
*/
void Elevator::stop(void) {
	state = NOT_AVAILABLE;
}

/**
	Makes sure that the elevator is reset upon deletion.
*/
Elevator::~Elevator(void) {
	state = NOT_AVAILABLE;
	currentFloor = 0;
	destinationFloor = 0;
	direction = NOT_MOVING;
	verboseData = false;
}