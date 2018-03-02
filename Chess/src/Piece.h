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
protected:
	int x,y;
	bool white;
	char figure;

public:
	virtual bool validMove (unsigned short x,unsigned short y) = 0;
	virtual void move(unsigned short x, unsigned short y) = 0;
	string getColour();
	string getName();

//	bool validMove (int x,int y);

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

	unsigned short getX() const {
		return x;
	}

	void setX(unsigned short x) {
		this->x = x;
	}

	unsigned short getY() const {
		return y;
	}

	void setY(unsigned short y) {
		this->y = y;
	}
	virtual ~Piece(){}
};

#endif /* PIECE_H_ */
