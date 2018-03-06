/*
 * chess.h
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#ifndef CHESS_H_
#define CHESS_H_

#include "Game.h"

namespace std {

class Chess : public Game{
	public:
		unsigned short piecePosX;
		unsigned short piecePosY;
		unsigned short x;
		unsigned short y;
		bool checkMate;
		bool player;
		int turnNumber;
		void getNewPosition();
		void moveSelectedPiece(bool& badPieceSelection);
		void start();
		bool end();
		void turn();
		void finish();
		Chess();
		~Chess(){}

	};

	} /* namespace std */

	#endif /* CHESS_H_ */
