/**
 *  Elevator.h
 *  Purpose: Define the attributes and behaviour of an elevator in the context of the usage of elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.0  24/01/15
 */

#pragma once

#include "State.h"
#include "Direction.h"
#include "Sleep.h"

class Elevator {

    private:
        int id;
        State state;
        int currentFloor;
        int destinationFloor;
        int numOfFloors;
        Direction direction;
        bool verboseDataOutput;

        static int uniqueId;

        void start(void);
        void stop(void);

    public:
        Elevator(int);
        int getId(void);
        State getState(void);
        int getCurrentFloor(void);
        int getDestinationFloor(void);
        Direction getDirection(void);
        int getNumOfFloors(void);
        void setVerboseDataOutput(bool);
        bool getVerboseDataOutput(void);
        void move(int);
        ~Elevator(void);

};