/*
 * Queen.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Queen.h"

Queen::Queen(bool white, unsigned short x, unsigned short y) {
	this -> white = white;
	this -> figure = 'Q';
	this -> x = x;
	this -> y = y;
}

