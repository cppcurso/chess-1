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
public:
	Rook(bool white, unsigned short x, unsigned short y);
	void move(int x, int y);
	bool validMove(int x, int y);
};

#endif /* ROOK_H_ */
