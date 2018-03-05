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
	bool validBishop(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validRook(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validPawn(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool valid(unsigned short x, unsigned short y, Cell c);
	void move(Cell c, unsigned short x, unsigned short y);
	bool isCheckMate(Cell c, unsigned short x, unsigned short y);
	//void attack(Board b);
};

#endif /* BOARD_H_ */
