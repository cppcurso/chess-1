/*
 * Queen.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Queen.h"

bool Queen::validMove(unsigned short x, unsigned short y){
	if((x-this->x) == 0 || (y-this->y) == 0 || (x-this->x)==(y-this->y)){
		return true;
	}
	else
		return false;
}

void Queen::move(unsigned short x, unsigned short y){
	this->x = x;
	this->y = y;
}

Queen::Queen(bool white, unsigned short x, unsigned short y) {
	this -> white = white;
	this -> figure = 'Q';
	this -> x = x;
	this -> y = y;
}
