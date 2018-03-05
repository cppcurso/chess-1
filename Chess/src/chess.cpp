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
	bool badPieceSelection = true;
	if (turnNumber % 2 == 0) {
		cout << "Mueve jugador 1" << '\n';

		do {
			cout << "Pieza a mover: ";
			cin >> piecePosX;
			cin >> piecePosY;

			if (Board::getInstance().board[piecePosX][piecePosY].content() != NULL
					&& Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()){ // looks player 1 move a white piece
				cout << "mueves el: "<<Board::getInstance().board[piecePosX][piecePosY].content()->getFigure()<< '\n';
				bool movedPiece = false;
				do{
					cout << "Posición a la que mueves: ";
					cin >> x;
					cin >> y;

					if (piecePosX == x && piecePosY == y){
						cout << "No has movido la pieza, introduce otra posición \n";
					}else movedPiece = true
				}
				while(!movedPiece);
				Board::getInstance().move(Board::getInstance().board[piecePosX][piecePosY], x, y);
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
		do {
			cout << "Pieza a mover: ";
			cin >> piecePosX;
			cin >> piecePosY;

			if (Board::getInstance().board[piecePosX][piecePosY].content() != NULL
					&& !Board::getInstance().board[piecePosX][piecePosY].content()->isWhite()){ // looks player 1 move a white piece
				cout << "mueves el: "<<Board::getInstance().board[piecePosX][piecePosY].content()->getFigure()<< '\n';
				bool movedPiece = false;
				do{
					cout << "Posición a la que mueves: ";
					cin >> x;
					cin >> y;

					if (piecePosX == x && piecePosY == y){
						cout << "No has movido la pieza, introduce otra posición \n";
					}else movedPiece = true
				}
				while(!movedPiece);
				Board::getInstance().move(Board::getInstance().board[piecePosX][piecePosY], x, y);
				badPieceSelection = false;
				turnNumber++;
				Board::getInstance().print();
			} else {
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
