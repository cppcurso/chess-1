//============================================================================
// Name        : chess.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Board.h"
#include "chess.h"
#include "Storage.h"
using namespace std;


void Chess::getNewPosition(){
	bool movedPiece = false;
	do{
		cout << "Posición a la que mueves: ";
		cin >> x;
		cin >> y;
		if (piecePosX == x && piecePosY == y){
			cout << "No has movido la pieza, introduce otra posición \n";
		}else movedPiece = true;
	}
	while(!movedPiece);
}
void Chess::moveSelectedPiece(bool& badPieceSelection, bool& goodMove){
	cout << "mueves el: "<<Board::getInstance().board[piecePosX][piecePosY].content()->getFigure()<< '\n';
	getNewPosition();
	goodMove = Board::getInstance().move(piecePosX, piecePosY, x, y);
	badPieceSelection = false;
	Board::getInstance().print();
}

Chess::Chess() : Game (2){
	piecePosX = 0;
	piecePosY = 0;
	x = 0;
	y = 0;
	checkMate = false;
	turnNumber = 0;
}

void Chess::start() {
	Board::getInstance();
	cout << "Colocando las piezas..." << '\n';
	cout<<"Partida nueva: 0"<<endl;
	cout<<"Recuperar partida guardada: 1"<<endl;
	unsigned short n;
	cin>>n;
	switch (n){
	case 0:
		Board::getInstance().init();
		break;
	case 1:
		turnNumber = Storage::restore();
		break;
	default:
		Board::getInstance().init();
	}
	Board::getInstance().print();
}

bool Chess::end() {
	if (Board::getInstance().getCheckMate() || (piecePosX == 10 && piecePosY == 10)) {
		checkMate = true;
	}
	return checkMate;
}

void Chess::turn() {
	bool badPieceSelection = true;
	bool goodMove = false;
	bool player;
	if (turnNumber % 2 == 0) {
		cout << "Mueve jugador 1" << '\n';
		player = true;
	}
	else{
		cout << "Mueve jugador 2" << '\n';
		player = false;
	}
	do {
		cout << "Pieza a mover: ";
		cin >> piecePosX;
		cin >> piecePosY;
		if(piecePosX == 10 && piecePosY == 10){ // en caso de que quieras salir
			break;
		}
		if (Board::getInstance().board[piecePosX][piecePosY].content() != NULL
				&& Board::getInstance().board[piecePosX][piecePosY].content()->isWhite() == player){ // looks player 1 move a white piece
			moveSelectedPiece(badPieceSelection, goodMove);
			if(!goodMove){ cout <<"Ese movimiento no es valido \n";
			badPieceSelection = true;
			}
		}else {
			badPieceSelection = true;
			cout << "Esa pieza no es tuya mueve otra \n";
		}
	}while (badPieceSelection && !goodMove);
	Storage::save(turnNumber);
	turnNumber++;
}


void Chess::finish() {
	if (piecePosX == 10 && piecePosY == 10){
		cout<<"Continuará... \n";
	}else{
		if (turnNumber % 2 == 0)
			cout << "Gana Jugador 2 \n";
		else
			cout << "Gana Jugador 1 \n";
	}
}


/* namespace std */
