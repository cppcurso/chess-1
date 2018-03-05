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
	unsigned int length;
	static const short dimension = 8;
	Board();
public:
	Cell board[dimension][dimension];
	static Board& getInstance();
	void init();
	void print();
	bool valid(unsigned short x, unsigned short y, Cell c);
	void move(Cell c, unsigned short x, unsigned short y);
	void isCheckMate(Cell c, unsigned short x, unsigned short y);
	//void attack(Board b);
};

#endif /* BOARD_H_ */
