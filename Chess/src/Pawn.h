/*
 * Pawn.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef PAWN_H_
#define PAWN_H_

class Pawn: public Piece {
public:
	Pawn(bool white);
	void move(int x, int y);
	void attack(int x, int y);
};

#endif /* PAWN_H_ */
