/*
 * Cell.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Cell.h"
#include "Piece.h"

Cell::Cell() {
	cell = NULL;
}

Cell::Cell(Piece* piece) {
	cell = piece;
}
Piece* Cell:: content(){
		return cell;
	}

bool Cell:: isEmpty(){
		if (cell == NULL) {
			return true;
		} else {
			return false;
		}
	}
