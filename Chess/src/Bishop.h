/*
 * Bishop.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef BISHOP_H_
#define BISHOP_H_
#include "Piece.h"

class Bishop: public Piece {
public:
	bool validMove (int x,int y);
	void move(int x, int y);
	Bishop(bool white, unsigned short x, unsigned short y);
};

#endif /* BISHOP_H_ */
