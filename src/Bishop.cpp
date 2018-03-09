/*
 * Bishop.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Bishop.h"
#include <math.h> // si no compilas con C++11 se requiere la librería cstdlib

Bishop::Bishop(bool white, unsigned short x, unsigned short y) {
	this->x = x;
	this->y = y;
	this->white = white;
	if (isWhite()) figure = "Bw";
	else figure = "Bb";
}

bool Bishop::validMove(unsigned short x, unsigned short y){
	if(abs(x-this->x) == abs(y-this->y))	{
		return true;
	}
	else{
		return false;
	}
}

void Bishop::move(unsigned short x, unsigned short y){
			this->x = x;
			this->y = y;
}

