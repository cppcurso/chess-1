/*
 * Knight.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Knight.h"

Knight::Knight(bool white, unsigned short x, unsigned short y) {
	this -> white = white;
	this -> figure = 'k';
	this -> x = x;
	this -> y = y;
}

void Knight::move (int x, int y){
	this -> x = x;
	this -> y = y;
}

bool Knight::validMove (int x, int y){
	if (x == this -> x + 2) {
		if (y== this -> y +1 || y== this -> y -1) {
			return true;
		}
	}
	if (x == this -> x - 2) {
		if (y== this -> y +1 || y== this -> y -1){
			return true;
			}
		}
	if (y == this -> y + 2) {
			if (x== this -> x +1 || y== this -> x -1) {
				return true;
			}
		}
	if (y == this -> y - 2) {
				if (x== this -> x +1 || y== this -> x -1) {
					return true;
				}
			} else {
				return false;
		}
}
