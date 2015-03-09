/**
 *  Person.cpp
 *  Purpose: Describe the behaviour of a person in the context of the usage of elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.1  13/02/2015
 */

#include "Person.h"

/**
 *  Create a new person that enters the building at floor 0.
 */
Person::Person(void) {
    currentFloor = 0;
    previousBuilding = NULL;
}

/**
 *  Set the floor on which the person currently is situated.
 *
 *  @param currentFloor The number of the current floor for the elevator user.
 */
void Person::setCurrentFloor(int currentFlood) {
    Person::currentFloor = currentFloor;
}

/**
 *  Retrieve the floor on which the person currently is situatied.
 *
 *  @return The number of the current floor for the elevator user.
 */
int Person::getCurrentFloor(void) {
    return currentFloor;
}

/**
 *  The user can choose to enter a building and go to any floor.
 *  When entering a new building, the user is located on the floor 0.
 */
void Person::callElevator(Building *building, int destinationFloor) {
    if (previousBuilding != NULL && previousBuilding->getId() != building->getId()) {
        currentFloor = 0;
    }

    building->callElevator(destinationFloor);
    previousBuilding = building;
}

/**
 *  Destroy the person object and deallocate the memory.
 */
Person::~Person(void) { 
    delete previousBuilding;
}
