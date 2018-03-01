/*
 * King.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "King.h"

#include <stdlib.h>

bool King::validMove(unsigned short x, unsigned short y){
	if(abs(x-this->x) <= 1 && abs(y-this->y) <= 1)
		return true;
	else
		return false;
}

void King::move(unsigned short x, unsigned short y){
	if(validMove(x, y)){
			this->x = x;
			this->y = y;
	}
}

King::King(bool white, unsigned short x, unsigned short y) {
	this -> white = white;
	this -> figure = 'K';
	this -> x = x;
	this -> y = y;
}
