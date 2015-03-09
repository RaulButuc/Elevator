/**
 *  Direction.h
 *  Purpose: Define the direction that an elevator may have at any given moment in time in the context of the usage of
 *  elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.0  24/01/15
 */

#pragma once

enum Direction {
    DOWNWARDS = -1,
    NOT_MOVING,
    UPWARDS
};