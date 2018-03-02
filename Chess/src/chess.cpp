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
	b.move(b.board[0][1],0,2);
	b.print();

}
