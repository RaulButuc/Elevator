/**
 *  Sleep.cpp
 *  Purpose: Describe a basic multiplatform sleep function in the context of the usage of elevators in a building.
 *
 *  @author Raul Butuc
 *  @version 1.0.0  24/01/15
 */

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#include <Windows.h>
#else
#include <unistd.h>
#endif

/**
 *  Pauses the program execution for a given amount of milliseconds.
 *
 *  @param milliseconds The number of milliseconds for which the program
 *  should pause.
 */
void msleep(int milliseconds) {
    #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    Sleep(milliseconds);
    #else
    usleep(static_cast<useconds_t>(milliseconds)* 1000);
    #endif
}
