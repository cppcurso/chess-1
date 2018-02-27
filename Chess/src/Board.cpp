/*
 * Board.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Board.h"


void Board::init(){

}

void Board::print(){
    int length = (sizeof(board[8])/sizeof(int));
	for (int i=0; i<board.length(); i++){
        for (size_t j = 0; j < board.length(); j++) {
            cout<<board[i][j]<<"";
        } cout<<'\n';
    }
}

bool Board::valid (int x, int y, Piece piece, Cell cell){
    if (c.isEmpty() != NULL){
        
    }
}
