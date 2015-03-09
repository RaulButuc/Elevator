/**
 *  State.h
 *  Purpose: Define the two possible states of an elevator at any given moment in time in the context of the usage of 
 *  elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.0  24/01/15
 */

#pragma once

enum State {
    NOT_AVAILABLE = -1,
    IN_USE,
    AVAILABLE
};