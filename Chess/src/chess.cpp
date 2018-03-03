//============================================================================
// Name        : chess.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Board.h"
using namespace std;

int main() {
	Board::getInstance();
	Board::getInstance().init();
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[3][1],3,2);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[0][0],0,4);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[1][0],2,2);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[3][0],3,1);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[4][0],3,0);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[0][6],1,5);
	Board::getInstance().print();
}
