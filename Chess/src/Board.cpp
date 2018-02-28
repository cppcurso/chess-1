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

using namespace std;

Board::Board(){
	length = (sizeof(board[8])/sizeof(int));
}

void Board::init(){
	for (size_t i=0; i<length; i++){
		for (size_t j = 0; j < length; j++){
			board[i][j].cell = NULL;
		}
	}
	for (int i =0; i < 8 ; i++) {
		board[1][i] = Cell(new Pawn(true));
	}

	for (int i =0; i < 8 ; i++) {
			board[6][i] = Cell(new Pawn(false));
		}
	board[0][1] = Cell(new Knight(true));
	board[0][6] = Cell(new Knight(true));
	board[7][1] = Cell(new Knight(false));
	board[7][6] = Cell(new Knight(false));
	board[0][0] = Cell(new Rook(true));
	board[0][7] = Cell(new Rook(true));
	board[7][0] = Cell(new Rook(false));
	board[7][7] = Cell(new Rook(false));
	//board[2][0] = Cell(new Bishop(true));
	//board[5][0] = Cell(new Bishop(true));
	//board[2][7] = Cell(new Bishop(false));
	//board[5][7] = Cell(new Bishop(false));
	board[0][3] = Cell(new Queen (true));
	board[7][4] = Cell(new Queen (false));
	board[0][4]= Cell(new King (true));
	board[7][3]= Cell(new King (true));

<<<<<<< HEAD
=======
void Board::print(){ // TODO print, no funciona
	cout<<"no funciono"<<endl;
	for (size_t i=0; i<length; i++){
        for (size_t j = 0; j < length; j++) {
>>>>>>> 5449beea0054c8d9f9a51172f8586a01df4a213c

}

void Board::print(){
	for (size_t i=0; i< 8; i++){
		cout << endl;
        for (size_t j = 0; j < 8; j++) {
        	if (board[i][j].cell == NULL ) {
				cout << "0" << "  ";
			} else {
				cout<<board[i][j].cell->getFigure()<<"  ";
			}
        }
    }
}

//bool Board::valid (int x, int y, Piece piece, Cell cell){
//    if (cell.isEmpty() && x<8 && y<8)
//    	return true;
//    else
//    	return false;
//}
