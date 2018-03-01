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
	short n;
public:
	Bishop(bool white, short n);
};

#endif /* BISHOP_H_ */
