/**
	State.h
	Purpose: Define the two possible states of an elevator at any
	given moment in time.

	@author Raul Butuc
	@version 1.0.0  24/01/15
*/

#ifndef STATE_H
#define STATE_H

enum State {
	NOT_AVAILABLE = -1,
	IN_USE,
	AVAILABLE
};

#endif