/*
 * Board.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Board.h"

#include <iostream>
using namespace std;

Board::Board(){
	length = (sizeof(board[8])/sizeof(int));
}

void Board::init(){ //TODO Board::init()
			for (size_t i=0; i<length; i++){
		        for (size_t j = 0; j < length; j++){
		        		//Rook rook (color);

		        		p.setFigure('p');
		        		Cell c1(&p);
		        		board[i][j]= c1;
		        	//board[i][j].cell = NULL;
		        }
			}
}

void Board::print(){
	cout<<"www"<<endl;
	for (size_t i=0; i<length; i++){
        for (size_t j = 0; j < length; j++) {

            cout<<board[i][j].cell->getFigure()<<"";

        } cout<<'\n';
    }
}

//bool Board::valid (int x, int y, Piece piece, Cell cell){
//    if (cell.isEmpty() && x<8 && y<8)
//    	return true;
//    else
//    	return false;
//}
