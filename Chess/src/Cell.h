/*
 * Cell.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef CELL_H_
#define CELL_H_
#include <iostream>
#include "Piece.h"
using namespace std;

class Cell {
	friend class Board;
	Piece* piece;
public:
	bool isEmpty();

	Piece* content();

	Cell (Piece* piece);

	Cell();
};

#endif /* CELL_H_ */
