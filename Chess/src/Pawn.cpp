/*
 * Pawn.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Pawn.h"
#include "Board.h"
#include <stdlib.h>

Pawn::Pawn(bool white, unsigned short x, unsigned short y) {
	this->white = white;
	figure = 'P';
	firstMove = true;
	this->x = x;
	this->y = y;
}

bool Pawn::validMove (unsigned short x, unsigned short y){
	if ((abs(x- this->x)<=1) && ((y - this->y) == 1)){
		return true;
	}else return false;
}

void Pawn::move (unsigned short x, unsigned short y){
	if (validMove(x, y)){
		this->x = x;
		this->y = y;
	}
}

void Pawn::moveFirst (unsigned short n){
	if (n==2) x = x + 2;
	else move (x, y);
	firstMove = false;
}


void Pawn::attack(Board b){
	y = y+1;
	unsigned short x1 = x+1;
	unsigned short x2 = x-1;
	if (!b.board[x1][y].isEmpty() && b.board[x2][y].isEmpty()){
		if ((b.board[x1][y].cell->isWhite()&& !white) || (!b.board[x1][y].cell->isWhite()&& white)){
		b.board[x1][y] = NULL;
		x = x1;
		}
	}else if (!b.board[x2][y].isEmpty()){
		b.board[x2][y] = NULL;
		x = x2;
	}
}
