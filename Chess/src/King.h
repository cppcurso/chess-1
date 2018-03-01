/*
 * King.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef KING_H_
#define KING_H_
#include "Piece.h"


class King : public Piece {
public:
	bool validMove (unsigned short x, unsigned short y);
	void move(unsigned short x, unsigned short y);
	King(bool white, unsigned short x, unsigned short y);
};

#endif /* KING_H_ */
