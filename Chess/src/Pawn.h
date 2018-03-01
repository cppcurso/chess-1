/*
 * Pawn.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef PAWN_H_
#define PAWN_H_
#include "Piece.h"

class Pawn: public Piece {
	short n;
public:
	Pawn(bool white, short n);
	void move(int x, int y);
	void attack(int x, int y);
};

#endif /* PAWN_H_ */
