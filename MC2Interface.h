/************************************************************************
 *																		*
 *	MC2Interface.h - Library for interacting with a MC2 Motor Control 	*
 *					 Interface											*
 *																		*
 *	Created by Dylan Bush, September 2009								*
 *																		*
 *																		*
 ************************************************************************/

#ifndef MC2Interface_h
#define MC2Interface_h

#include "WProgram.h"

class MC2Interface
{ 
public:
	MC2Interface(int txPin, int rxPin, int motor);
	void move(int speed, int steps, int direction);
	void halt();
private:
	int _txPin;
	int _rxPin;
	int _motor;
	int _speed;
	int _direction;
	int _steps;	
}

#endif
