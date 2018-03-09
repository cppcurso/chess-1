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
	friend class Storage;
	short x,y;
	bool white;
	string figure;

public:
	virtual bool validMove (unsigned short x,unsigned short y) = 0;
	virtual void move(unsigned short x, unsigned short y) = 0;
	string getColour();
	string getName();

//	bool validMove (int x,int y);

	string getFigure() const {
		return figure;
	}

	bool isWhite() const {
		return white;
	}

	unsigned short getX() const {
		return x;
	}

	unsigned short getY() const {
		return y;
	}

	virtual ~Piece(){}
};

#endif /* PIECE_H_ */
