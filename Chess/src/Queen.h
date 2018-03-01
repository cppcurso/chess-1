/*
 * Queen.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef QUEEN_H_
#define QUEEN_H_
#include "Piece.h"
class Queen : public Piece{
public:
	bool validMove (unsigned short x, unsigned short y);
	void move(unsigned short x, unsigned short y);
	Queen(bool white, unsigned short x, unsigned short y);
};

#endif /* QUEEN_H_ */
