/**
 *  ElevatorTesting.cpp
 *  Purpose: Testing of the elevators to ensure proper functionality.
 *
 *  @author Raul Butuc
 *  @version 1.0.1  06/02/2015
 */

#include "Elevator.h"
#include <iostream>
#include <string>
#include <vector>

const std::string delim = "--------------------------------------------------";
const std::string newline = "\n";

void testElevator(std::vector<Elevator>);
void printElevatorData(Elevator);
void printElevatorId(Elevator);
void printElevatorState(Elevator);
void printElevatorDirection(Elevator);
void printElevatorCurrentFloor(Elevator);

int main(int argc, char *argv[]) {
  std::vector<Elevator> elevators;

  Elevator elevatorOne(20);
  Elevator elevatorTwo(20);
  Elevator elevatorThree(20);

  elevators.push_back(elevatorOne);
  elevators.push_back(elevatorTwo);
  elevators.push_back(elevatorThree);

  testElevator(elevators);

  elevators.pop_back();
  elevators.pop_back();
  elevators.pop_back();

  system("pause");
  return 0;
}

void testElevator(std::vector<Elevator> elevators) {
  Elevator elevatorOne = elevators.at(0);
  Elevator elevatorTwo = elevators.at(1);
  Elevator elevatorThree = elevators.at(2);

  elevatorOne.setVerboseDataOutput(true);
  elevatorTwo.setVerboseDataOutput(true);
  elevatorThree.setVerboseDataOutput(true);

  printElevatorData(elevatorOne);
  elevatorOne.move(12);

  printElevatorData(elevatorTwo);
  elevatorTwo.move(5);

  printElevatorData(elevatorTwo);
  elevatorTwo.move(14);

  printElevatorData(elevatorThree);
  elevatorThree.move(8);

  printElevatorData(elevatorOne);
  elevatorOne.move(15);

  printElevatorData(elevatorOne);
  elevatorOne.move(7);

  printElevatorData(elevatorThree);
  elevatorThree.move(2);

  printElevatorData(elevatorThree);
  elevatorThree.move(11);

  printElevatorData(elevatorOne);
  elevatorOne.move(10);

  printElevatorData(elevatorTwo);
  elevatorTwo.move(1);

  printElevatorData(elevatorOne);
  elevatorOne.move(1);

  printElevatorData(elevatorThree);
  elevatorThree.move(1);

  printElevatorData(elevatorOne);
  printElevatorData(elevatorTwo);
  printElevatorData(elevatorThree);
}

void printElevatorData(Elevator elevator) {
  std::cout << delim << newline;
  printElevatorId(elevator);
  printElevatorState(elevator);
  printElevatorDirection(elevator);
  printElevatorCurrentFloor(elevator);
  std::cout << newline;
}

void printElevatorId(Elevator elevator) {
  std::cout << "Elevator ID: " << elevator.getId() << "\n";
}

void printElevatorState(Elevator elevator) {
  int state = elevator.getState();

  std::cout << "Elevator State: ";

  if (state == -1) {
    std::cout << "NOT_AVAILABLE";
  }
  else if (state == 0) {
    std::cout << "IN_USE";
  }
  else {
    std::cout << "AVAILABLE";
  }

  std::cout << newline;
}

void printElevatorDirection(Elevator elevator) {
  int direction = elevator.getDirection();

  std::cout << "Elevator State: ";

  if (direction == -1) {
    std::cout << "DOWNWARDS";
  }
  else if (direction == 0) {
    std::cout << "NOT_MOVING";
  }
  else {
    std::cout << "UPWARDS";
  }

  std::cout << newline;
}

void printElevatorCurrentFloor(Elevator elevator) {
  std::cout << "Elevator Current Floor: " << elevator.getCurrentFloor() << newline;
}