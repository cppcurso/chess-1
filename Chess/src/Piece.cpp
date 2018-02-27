/*
 * Piece.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Piece.h"


string Piece::getColour(){
	if (isWhite()== true) {
		return "white";
	}else {
		return "black";
	}
}

string Piece::getName(){
	string name;
	switch (getFigure()) {
				case 'P':
					name = "Paw";
					break;
				case 'H':
					name = "Knight";
					break;
				case 'R':
					name = "Rook";
					break;
				case 'B':
					name = "Bishop";
					break;
				case 'K':
					name = "King";
					break;
				case 'Q':
					name = "Queen";
					break;
	}
	return name;
}
