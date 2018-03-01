/*
 * Pawn.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Pawn.h"

Pawn::Pawn(bool white, unsigned short x, unsigned short y) {
	this->white = white;
	figure = 'P';
	this->x =x;
	this->y = y;
}

