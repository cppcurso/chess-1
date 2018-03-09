/*
 * Storage.h
 *
 *  Created on: 08/03/2018
 *      Author: usuario
 */

#ifndef SRC_STORAGE_H_
#define SRC_STORAGE_H_
#include <fstream>
#include <iostream>
#include "Board.h"
#include "Pawn.h"
#include "Knight.h"
#include "Rook.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "chess.h"
using namespace std;

class Storage {
public:

	template<typename T>
	static void write(ofstream& file, T data) {
		file.write((char*) &data, sizeof(T));
	}

	template<typename T>
	static void read(ifstream& file, T& data) {
		file.read((char *) &data, sizeof(T));
	}

	static void  save(int turnNumber){
		ofstream file("games", ios::binary);
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (!Board::getInstance().board[j][i].isEmpty()){
				write( file, Board::getInstance().board[j][i].piece ->figure[0]);
				write( file, Board::getInstance().board[j][i].piece -> white);
				write( file, Board::getInstance().board[j][i].piece -> x);
				write( file, Board::getInstance().board[j][i].piece -> y);
			}

			}
		} write (file, turnNumber);
	}
	static int restore(){
		ifstream file("games", ios::binary);
		int t;
		char a;
		bool w;
		short x,y;
		for (int i = 0; i < 32; ++i) {
			read( file, a);
			read( file, w);
			read( file, x);
			read( file, y);
			cout<<"a: "<<a<<endl;
			cout<<"x:"<<x<<endl;
			cout<<"y: "<<y<<endl;
			switch(a){
			case 'P':
				Board::getInstance().board[x][y] = Cell(new Pawn(w,x,y));
				break;
			case 'T':
				Board::getInstance().board[x][y] = Cell(new Rook(w,x,y));
				break;
			case 'K':
				Board::getInstance().board[x][y] = Cell(new King(w,x,y));
				break;
			case 'k':
				Board::getInstance().board[x][y] = Cell(new Knight(w,x,y));
				break;
			case 'Q':
				Board::getInstance().board[x][y] = Cell(new Queen(w,x,y));
				break;
			case 'B':
				Board::getInstance().board[x][y] = Cell(new Bishop(w,x,y));
				break;
			}

		}read( file, t);
		return t;
	}
};
#endif /* SRC_STORAGE_H_ */
