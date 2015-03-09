/**
 *  Person.h
 *  Purpose: Define the attributes and behaviour of a person in the context of the usage of elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.0  13/02/2015
 */

#pragma once

#include "Building.h"

class Person {

    private:
        int currentFloor;
        Building *previousBuilding;

    public:
        Person(void);
        void setCurrentFloor(int);
        int getCurrentFloor(void);
        void callElevator(Building*, int);
        ~Person(void);

};