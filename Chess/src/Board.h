/*
 * Board.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "Cell.h"
#include "Piece.h"

class Board {


public:
	Cell board[8][8];
	unsigned int length;
	Board();
	void init();
	void print();
	bool valid(unsigned short x, unsigned short y, Cell cell);
	void move(unsigned short x, unsigned short y);
	//void attack(Board b);
};

#endif /* BOARD_H_ */
