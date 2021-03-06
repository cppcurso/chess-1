/*
 * Knight.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef KNIGHT_H_
#define KNIGHT_H_
#include "Piece.h"

class Knight : public Piece {
public:
	void move (unsigned short x, unsigned short y);
	bool validMove (unsigned short x, unsigned short y);
	Knight(bool white, unsigned short x, unsigned short y);
};

#endif /* KNIGHT_H_ */
