/*
 * Piece.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef PIECE_H_
#define PIECE_H_
#include <iostream>
using namespace std;



class Piece {
	int x,y;
	bool white;
	char figure;
public:
	string getColour();
	string getName();
	void move (int x, int y);
	bool valid (int x,int y);


	char getFigure() const {
		return figure;
	}

	void setFigure(char figure) {
		this->figure = figure;
	}

	bool isWhite() const {
		return white;
	}

	void setWhite(bool white) {
		this->white = white;
	}

	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}
};

#endif /* PIECE_H_ */
