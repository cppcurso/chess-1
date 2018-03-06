/*
 * Cell.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Cell.h"
#include "Piece.h"

Cell::Cell() {
	piece = NULL;
}

Cell::Cell(Piece* piece) {
	this->piece = piece;
}
Piece* Cell:: content(){
		return piece;
	}

bool Cell:: isEmpty(){
		if (piece == NULL) {
			return true;
		} else {
			return false;
		}
	}
