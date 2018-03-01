/*
 * Rook.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Rook.h"
#include "Piece.h"

Rook::Rook(bool white, unsigned short x, unsigned short y) {
	this->white = white;
	figure = 'R';
}

void Rook::move(int x, int y){
	this->x = x;
	this->y = y;
}

bool Rook::validMove(int x, int y){
	if (x == this->x){
		return true;
	} else if (y == this->y){
		return true;
	}else {
		return false;
	}
}
