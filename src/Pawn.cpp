/*
 * Pawn.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Pawn.h"

#include <stdlib.h>

Pawn::Pawn(bool white, unsigned short x, unsigned short y) {
	this->white = white;
	if (white) figure = "Pw";
	else figure = "Pb";
	firstMove = true;
	this->x = x;
	this->y = y;
}

bool Pawn::validMove (unsigned short x, unsigned short y){
	if (isWhite()){
		if ((abs(x- this->x)<=1) && ((y - this->y) == 1)){ // normal or attack
			return true;
		}else if (firstMove && ((abs(x- this->x)==0) && ((y - this->y) == 2))){
			return true;
		}
		else{
			return false;
		}
	}
	else if (!isWhite()){
		if ((abs(x- this->x)<=1) && ((y - this->y) == -1)){
			return true;
		}else if (firstMove && ((abs(x- this->x)==0) && ((y - this->y) == -2))){
			return true;
		}
		else{
			return false;
		}
	}
	return false;
}


void Pawn::move (unsigned short x, unsigned short y){
	if (validMove(x, y)){
		this->x = x;
		this->y = y;
	}else cout<<"Move not valid \n";
}

void Pawn::moveFirst (unsigned short n){
	if (n==2) x = x + 2;
	else move (x, y);
	firstMove = false;
}



