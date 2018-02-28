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
	Piece* cell;
public:
	bool isEmpty(){
		if (cell == NULL) {
			return true;
		} else {
			return false;
		}
	}

	Piece* content(){
		return cell;
	}

	Cell(){
		cell = NULL;
	}
};

#endif /* CELL_H_ */
