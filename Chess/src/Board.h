/*
 * Board.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef BOARD_H_
#define BOARD_H_

class Piece{};
class Cell{};

class Board {
	int board[8][8];
public:
	Board();
	void init();
	void print();
	bool valid(int x, int y, Piece , Cell cell);
	void move(int x, int y, Piece piece);
};

#endif /* BOARD_H_ */
