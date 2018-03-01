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
	bool firstMove;
public:
	Pawn(bool white, unsigned short x, unsigned short y);
	void move(unsigned short x, unsigned short y);
	void moveFirst(unsigned short n);
	void attack(Board b);
	bool validMove (unsigned short x, unsigned short y);
};

#endif /* PAWN_H_ */
