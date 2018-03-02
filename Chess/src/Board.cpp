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

Board::Board(){
	length = (sizeof(board[8])/sizeof(int));
}

void Board::init(){
	for (size_t i=2; i<7; i++){
		for (size_t j = 0; j < length; j++){
			board[i][j].cell = NULL;
		}
	}
	for (unsigned int i =0; i < 8 ; i++) {
		board[i][1] = Cell(new Pawn(true,1,i));
	}

	for (unsigned int i =0; i < 8 ; i++) {
			board[i][6] = Cell(new Pawn(false,6,i));
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
		cout << endl;
        for (size_t j = 0; j < 8; j++) {
        	if (board[j][i].cell == NULL ) {
				cout << "0" << "  ";
			} else {
				cout<<board[j][i].cell->getFigure()<<"  ";
			}
        }
    }
}

bool Board::valid (unsigned short x, unsigned short y, Cell c){
	if (x<8 && y<8){ // no se sale del tablero
		if (board[x][y].isEmpty() || (board[x][y].cell->isWhite()!= c.cell->isWhite())){// está vacía o hay una del otro color
			unsigned short x0 = board[x][y].cell->getX();
			unsigned short y0 = board[x][y].cell->getY();
			switch (board[x][y].cell->getFigure()){
			case 'B':
				while ((x0-x) != 0 && (y0-y) != 0){
					x0++;
					y0++;
					if (!board[x0][y0].isEmpty())
						return false;
				}return true;
			case 'R':
				if (x0 == x){
					for (unsigned short i =(y0+1); i<y; i++){
						if (!board[x0][i].isEmpty())
							return false;
					} return true;
				}
				else if (y0==y){
					for (unsigned short i =(x0+1); i<x; i++){
						if (!board[i][y0].isEmpty())
							return false;
					}return true;
				}return false;
			case 'Q':
				if (x0 == x){
					for (unsigned short i =(y0+1); i<y; i++){
						if (!board[x0][i].isEmpty())
							return false;
					} return true;
				}
				else if (y0==y){
					for (unsigned short i =(x0+1); i<x; i++){
						if (!board[i][y0].isEmpty())
							return false;
					}return true;
				}
				else {
					while ((x0-x) != 0 && (y0-y) != 0){
						x0++;
						y0++;
						if (!board[x0][y0].isEmpty())
							return false;
					}return true;
				}
			default:
				return true;
			}
		}return false;
	}return false;
}


//void Pawn::attack(Board b){
//	y = y+1;
//	unsigned short x1 = x+1;
//	unsigned short x2 = x-1;
//	if (!b.board[x1][y].isEmpty() && b.board[x2][y].isEmpty()){
//		if ((b.board[x1][y].cell->isWhite()&& !white) || (!b.board[x1][y].cell->isWhite()&& white)){
//		b.board[x1][y] = NULL;
//		x = x1;
//		}
//	}else if (!b.board[x2][y].isEmpty()){
//		b.board[x2][y] = NULL;
//		x = x2;
//	}
//}
