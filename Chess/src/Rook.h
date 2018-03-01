/*
 * Rook.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef ROOK_H_
#define ROOK_H_
#include "Piece.h"

class Rook: public Piece {
	short n;
public:
	Rook(bool white, short n);
	void move(int x, int y);
	void attack(int x, int y);
};

#endif /* ROOK_H_ */
