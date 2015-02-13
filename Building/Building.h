/**
	Building.h
	Purpose: Define the attributes and behaviour of a building.

	@author Raul Butuc
	@version 1.0.0  06/02/2015
*/

#ifndef BUILDING_H
#define BUILDING_H

#include "Elevator.h"
#include <list>

class Building {

	private:
		int numOfFloors;
		std::list<Elevator> elevators;

	public:
		Building(int);
		void addElevator(Elevator*);
		void removeElevator(Elevator*);
		~Building();

};

#endif