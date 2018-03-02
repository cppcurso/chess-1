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
	Board b;
	b.init();
	b.print();
	b.move(b.board[3][1],3,2);
	b.print();
	b.move(b.board[0][0],0,4);
	b.print();
	b.move(b.board[1][0],2,2);
	b.print();
	b.move(b.board[3][0],3,1);
	b.print();
	b.move(b.board[4][0],3,0);
	b.print();
	b.move(b.board[0][6],1,5);
	b.print();
}
