/**
    Building.h
    Purpose: Define the attributes and behaviour of a building in the context of the usage of elevators in a building.

    @author Raul Butuc
    @version 1.0.1  13/02/2015
*/

#ifndef BUILDING_H
#define BUILDING_H

#include "Elevator.h"
#include <list>

class Building {

    private:
        int id;
        int numOfFloors;
        std::list<Elevator*> elevators;

        static int uniqueId;

        void initialiseElevators(int, int);

    public:
        Building(int, int);
        int getId(void);
        void callElevator(int);
        ~Building(void);

};

#endif
