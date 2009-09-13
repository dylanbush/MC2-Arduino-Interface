/************************************************************************************
 *	MC2Interface.h - A library for controlling an Centroid Motion controller		*
 *	Copyright (c) 2009 Dylan Bush 													*
 *																					*
 *	This library is free software; you can redistribute it and/or					*
 *	modify it under the terms of the GNU Lesser General Public						*
 *	License as published by the Free Software Foundation; either					*
 *	version 2.1 of the License, or (at your option) any later version.				*
 *																					*
 *	This library is distributed in the hope that it will be useful,					*
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of					*
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU				*
 *	Lesser General Public License for more details.									*
 *																					*
 *	You should have received a copy of the GNU Lesser General Public				*
 *	License along with this library; if not, write to the Free Software				*
 *	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA		*
 *																					*
 ************************************************************************************/

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
