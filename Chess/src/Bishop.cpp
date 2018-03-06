/*
 * Bishop.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Bishop.h"

Bishop::Bishop(bool white, unsigned short x, unsigned short y) {
	this->x = x;
	this->y = y;
	this->white = white;
	if (isWhite()) figure = "Bw";
	else figure = "Bb";
}

bool Bishop::validMove(unsigned short x, unsigned short y){
	if((x-this->x)==(y-this->y))	{
		return true;
	}
	else{
		return false;
	}
}

void Bishop::move(unsigned short x, unsigned short y){
	if(validMove(x, y)){
		for(int i = this->x; i < x; i++){
			this->x++;
			this->y++;
		}
	}
}

