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
public:
	Pawn(bool white, unsigned short x, unsigned short y);
	void move(int x, int y);
	void attack(int x, int y);
};

#endif /* PAWN_H_ */
