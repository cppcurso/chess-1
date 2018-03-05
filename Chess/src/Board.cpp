/*
 * Board.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Board.h"

#include <iostream>
#include "Pawn.h"
#include "Knight.h"
#include "Rook.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"

using namespace std;

Board& Board:: getInstance(){
	static Board instance;
	return instance;
}

Board::Board(){
	length = (sizeof(board[8])/sizeof(int));
}

void Board::init(){
	for (size_t i=2; i<7; i++){
		for (size_t j = 0; j < length; j++){
			board[i][j].piece = NULL;
		}
	}
	for (unsigned int i =0; i < length ; i++) {
		board[i][1] = Cell(new Pawn(true,i,1));
	}

	for (unsigned int i =0; i < length ; i++) {
			board[i][6] = Cell(new Pawn(false,i,6));
		}

	board[1][0] = Cell(new Knight(true, 1, 0));
	board[6][0] = Cell(new Knight(true, 6, 0));
	board[1][7] = Cell(new Knight(false, 1, 7));
	board[6][7] = Cell(new Knight(false, 6, 7));
	board[0][0] = Cell(new Rook(true, 0,0));
	board[7][0] = Cell(new Rook(true, 7,0));
	board[0][7] = Cell(new Rook(false,0, 7));
	board[7][7] = Cell(new Rook(false, 7, 7));
	board[2][0] = Cell(new Bishop(true, 2, 0));
	board[5][0] = Cell(new Bishop(true, 5, 0));
	board[2][7] = Cell(new Bishop(false, 2, 7));
	board[5][7] = Cell(new Bishop(false, 5, 7));
	board[3][0] = Cell(new Queen (true, 3, 0));
	board[4][7] = Cell(new Queen (false, 4,7));
	board[4][0]= Cell(new King (true, 4, 0));
	board[3][7]= Cell(new King (false, 3, 7));
}

void Board::print(){
	for (size_t i=0; i< 8; i++){
        for (size_t j = 0; j < 8; j++) {
        	if (board[j][i].piece == NULL ) {
				cout << "0" << "  ";
			} else {
				cout<<board[j][i].piece->getFigure()<<"  ";
			}
        }cout << endl;
    } cout<<endl;
}

bool Board::validBishop(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0){
	while ((x0-x) != 0 && (y0-y) != 0){
		x0++;
		y0++;
		if (!board[x0][y0].isEmpty())
			return false;
	}return true;
}

bool Board::validRook(unsigned short x, unsigned short y, unsigned short x0, unsigned short y0){
	if (x0 == x){
		for (unsigned short i =(y0+1); i<y; i++){
			if (!board[x0][i].isEmpty()){
				return false;
			}
		} return true;
	}
	else if (y0==y){
		for (unsigned short i =(x0+1); i<x; i++){
			if (!board[i][y0].isEmpty())
				return false;
		}return true;
	}else return false;
}



bool Board::valid (unsigned short x, unsigned short y, Cell c){ // Cell c es la celda inicial
	if (x<8 && y<8){ // no se sale del tablero
		if (board[x][y].isEmpty() || (board[x][y].piece->isWhite()!= c.piece->isWhite())){// está vacía o hay una del otro color
			unsigned short x0 = c.piece->getX();
			unsigned short y0 = c.piece->getY();
			switch (board[x0][y0].piece->getFigure()[0]){
			case 'B':
				return validBishop(x,y,x0,y0);
			case 'R':
				return validRook(x,y,x0,y0);
			case 'Q':
				if (x0 == x || y0 == y)
					return validRook(x,y,x0,y0);
				else
					return validBishop(x,y,x0,y0);
//			case 'P':
//				if ((x0 != x && y0 != y) && !board[x][y].isEmpty())
//					return true;
//				else if(x0 == x)
//					return true;
//				else
//					return false;
			default:     // Pawn, knight and king
				return true;
			}
		}else return false;
	}else return false;
}


void Board::move(Cell c, unsigned short x, unsigned short y){
	unsigned short x0 = c.piece->getX();
	unsigned short y0 = c.piece->getY();
	if (valid(x,y,c) && c.piece->validMove(x,y)){
		isCheckMate(c, x, y);
		c.piece->move(x,y);
		board[x][y].piece = c.piece;
		board[x0][y0].piece = NULL;
	}
}

void Board::isCheckMate(Cell c, unsigned short x, unsigned short y){
	if(board[x][y].piece != NULL){
		if(board[x][y].piece->getFigure() == 'K')
			cout<<"JAQUE MATE!!!!! \n";
	}

}
