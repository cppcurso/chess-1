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
	friend class Storage;
	unsigned int length;
	bool checkMate;
	static const short dimension = 8;
	Board();
public:
	Cell board[dimension][dimension];
	static Board& getInstance();
	bool getCheckMate();
	void init();
	void print();
	bool validBishop(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validRook(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validPawn(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool valid(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool move(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y);
	bool isCheckMate(unsigned short x, unsigned short y);


	//void attack(Board b);
};

#endif /* BOARD_H_ */
