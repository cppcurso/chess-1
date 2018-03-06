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
<<<<<<< HEAD


public:
	Cell board[8][8];
=======
>>>>>>> 4812d69d404dd9ff0fda77ef82a0aaac05e109c0
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
<<<<<<< HEAD
	bool valid(unsigned short x, unsigned short y, Cell cell);
	void move(unsigned short x, unsigned short y);
=======
	bool validBishop(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validRook(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool validPawn(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	bool valid(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0);
	void move(unsigned short x0, unsigned short y0, unsigned short x, unsigned short y);
	bool isCheckMate(unsigned short x, unsigned short y);
>>>>>>> 4812d69d404dd9ff0fda77ef82a0aaac05e109c0
	//void attack(Board b);
};

#endif /* BOARD_H_ */
