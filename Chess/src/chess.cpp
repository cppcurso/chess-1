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
	Board::getInstance().move(Board::getInstance().board[2][2],3,4);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[3][4],4,6);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[4][6],6,7);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[6][7],7,5);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[7][5],5,6);
	Board::getInstance().print();
	Board::getInstance().move(Board::getInstance().board[5][6],3,7);
	Board::getInstance().print();

}
