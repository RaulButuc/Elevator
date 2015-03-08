/**
    Building.cpp
    Purpose: Describe the behaviour of a building in the context of the usage of elevators in a building.

    @author Raul Butuc
    @version 1.0.1  13/02/2015
*/

#include "Building.h"

int Building::uniqueId = 0;

/**
    Create a building by knowing the number of floors and elevators required.

    @param numOfFloors The number of floors that the building is going to have (accessible to all elevators).
    @param numOfElevators The number of elevators that the building is going to have.
*/
Building::Building(int numOfFloors, int numOfElevators) {
    id = ++uniqueId;
    Building::numOfFloors = numOfFloors;
    initialiseElevators(numOfFloors, numOfElevators);
}

/**
    Retrieve the unique id of the building.

    @return The id of the building.
*/
int Building::getId(void) {
    return id;
}

/**
    Choose the closest elevator to pick up the current user.

    @param destinationFloor The destination floor of the elevator's user.
*/
void Building::callElevator(int destinationFloor) {
    // @TODO: Implement the algorithm to choose the best option.
    // @TODO: As an extra, implement multi-threading, so that more than one elevator can run at the same time.
}

/**
    Initialise the list of elevators available within the current building.

    @param numOfFloors The number of floors that the building is going to have (accessible to all elevators).
    @param numOfElevators The number of elevators that the building is going to have.
*/
void Building::initialiseElevators(int numOfFloors, int numOfElevators) {
    elevators.clear();
    for (int id = 1; id <= numOfElevators; ++id) {
        Elevator *elevator = new Elevator(numOfFloors);
        elevators.push_back(elevator);
    }
}

/**
    Destroy the building and deallocate the memory that is in use.
*/
Building::~Building(void) {
    elevators.clear();
}
