//============================================================================
// Name        : chess.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Board.h"
#include "chess.h"
using namespace std;


Chess::Chess() : Game (2){

	piecePosX = 0;
	piecePosY = 0;
	x = 0;
	y = 0;
	badPieceSelection = true;
	checkMate = false;
	turnNumber = 0;
}

void Chess::start() {
	cout << "Colocando las piezas..." << '\n';
	Board::getInstance();
	Board::getInstance().init();
	Board::getInstance().print();
}

bool Chess::end() {
	if (Board::getInstance().getCheckMate()) {
		checkMate = true;
	}
	return checkMate;
}

void Chess::turn() {
	if (turnNumber % 2 == 0) {
		cout << "Mueve jugador 1" << '\n';
		do {
			cout << "Pieza a mover: ";
			cin >> piecePosX;
			cin >> piecePosY;

				if (Board::getInstance().board[piecePosX][piecePosY].content() != NULL && Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()){
					cout << "mueves el: "<<Board::getInstance().board[piecePosX][piecePosY].content()->getFigure()<< '\n';
					cout << "Posición a la que mueves: ";
					cin >> x;
					cin >> y;
					Board::getInstance().move(
							Board::getInstance().board[piecePosX][piecePosY], x, y);
					badPieceSelection = false;
					turnNumber++;
					Board::getInstance().print();
				} else {
					badPieceSelection = true;
					cout << "Esa pieza no es tuya mueve otra \n";

			}
		} while (badPieceSelection);

	} else {
		cout << "Mueve jugador 2" << '\n';
		badPieceSelection = true;
		do {
			cout << "Pieza a mover: ";
			cin >> piecePosX;
			cin >> piecePosY;

				if (Board::getInstance().board[piecePosX][piecePosY].content() != NULL && !Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()) {
					cout << "mueves el: "<<Board::getInstance().board[piecePosX][piecePosY].content()->getFigure()<< '\n';
					cout << "Posición a la que mueves: ";
					cin >> x;
					cin >> y;
					Board::getInstance().move(
							Board::getInstance().board[piecePosX][piecePosY], x,
							y);
					badPieceSelection = false;
					turnNumber++;
					Board::getInstance().print();
				} else{
					badPieceSelection = true;
					cout << "Esa pieza no es tuya mueve otra \n";
				}
		} while (badPieceSelection);
	}
}

void Chess::finish() {
	if (turnNumber % 2 == 0)
		cout << "Gana Jugador 2 \n";
	else
		cout << "Gana Jugador 1 \n";
}


 /* namespace std */
