/*
 * Rook.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Rook.h"
#include "Piece.h"

Rook::Rook(bool white, unsigned short x, unsigned short y) {
	this -> x = x;
	this -> y = y;
	this->white = white;
	if (white) figure = "Tw";
	else figure = "Tb";
}

void Rook::move(unsigned short x, unsigned short y){
	this->x = x;
	this->y = y;
}

bool Rook::validMove(unsigned short x, unsigned short y){
	if (x == this->x){
		return true;
	} else if (y == this->y){
		return true;
	}else {
		return false;
	}
}
