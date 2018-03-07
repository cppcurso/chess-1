/*
 * Knight.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Knight.h"

Knight::Knight(bool white, unsigned short x, unsigned short y) {
	this -> x = x;
	this -> y = y;
	this->white = white;
	if (white) figure = "kw";
	else figure = "kb";
}

void Knight::move(unsigned short x, unsigned short y){
	this -> x = x;
	this -> y = y;
}

bool Knight::validMove (unsigned short x, unsigned short y){

	if (x == this -> x + 2 || x == this -> x - 2 ) {
		if (y== this -> y +1 || y== this -> y -1){
			return true;
		} else return false;
	}
	else if (y == this -> y + 2 || y == this -> y - 2 ){
		if (x== this -> x +1 || x== this -> x -1){
					return true;
				} else return false;
	}
	else return false;
}


// validMove por si no funciona
//	if (x == this -> x + 2) {
//		if (y== this -> y +1 || y== this -> y -1) {
//			return true;
//		} else {
//			return false;
//		}
//	}
//	if (x == this -> x - 2) {
//		if (y== this -> y +1 || y== this -> y -1){
//			return true;
//			}else {return false;}
//		}
//	if (y == this -> y + 2) {
//			if (x== this -> x +1 || y== this -> x -1) {
//				return true;
//			}else {return false;}
//		}
//	else if (y == this -> y - 2) {
//				if (x== this -> x +1 || y== this -> x -1) {
//					return true;
//				}
//			} else {
//				return false;
//		}
