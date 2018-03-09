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
<<<<<<< HEAD
		static void write(ofstream& file, T data) {
		    file.write((char*) &data, sizeof(T));
		}

		template<typename T>
		static void read(ifstream& file, T& data) {
		    file.read((char *) &data, sizeof(T));
		}

		static void  save(){
			ofstream file("games", ios::binary);
//			for (int i = 0; i < 8; ++i) {
//				for (int j = 0; j < 8; ++j) {
					//if (!Board::getInstance().board[i][j].isEmpty()){
						write( file, Board::getInstance().board[0][0].piece ->figure[0]);
						write( file, Board::getInstance().board[0][0].piece -> figure[1]);
						write( file, Board::getInstance().board[0][0].piece -> white);
						write( file, Board::getInstance().board[0][0].piece -> x);
						write( file, Board::getInstance().board[0][0].piece -> y);
=======
	static void write(ofstream& file, T data) {
		file.write((char*) &data, sizeof(T));
	}
>>>>>>> fe11e33e96c19eb19532a62364721dea23bea3f1

	template<typename T>
	static void read(ifstream& file, T& data) {
		file.read((char *) &data, sizeof(T));
	}

	static void  save(int turnNumber){
		ofstream file("games", ios::binary);
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
<<<<<<< HEAD
				if (!Board::getInstance().board[i][j].isEmpty()){
					write( file, Board::getInstance().board[i][j].piece ->figure[0]);
					write( file, Board::getInstance().board[i][j].piece -> figure[1]);
					write( file, Board::getInstance().board[i][j].piece -> white);
					write( file, Board::getInstance().board[i][j].piece -> x);
					write( file, Board::getInstance().board[i][j].piece -> y);
=======
				if (!Board::getInstance().board[j][i].isEmpty()){
				write( file, Board::getInstance().board[j][i].piece ->figure[0]);
				write( file, Board::getInstance().board[j][i].piece -> white);
				write( file, Board::getInstance().board[j][i].piece -> x);
				write( file, Board::getInstance().board[j][i].piece -> y);
>>>>>>> 6612c77ba3491e542861bed4e9df6d466feabe98
				}
			}
<<<<<<< HEAD
		}
	}

	static void restore(){
		ifstream file("games", ios::binary);
		char a,b;
		bool w;
		short x, y;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				read( file, a);
				read( file, b);
				read( file, w);
				read( file, x);
				read( file, y);
				Board::getInstance().board[x][y].piece ->figure[0] = a;
				Board::getInstance().board[x][y].piece ->figure[1] = b;
				Board::getInstance().board[x][y].piece -> white = w;
				Board::getInstance().board[x][y].piece -> x = x;
				Board::getInstance().board[x][y].piece -> y = y;
//				if (!Board::getInstance().board[i][j].isEmpty()){
//					read( file, Board::getInstance().board[i][j].piece ->figure[0]);
//					read( file, Board::getInstance().board[i][j].piece -> figure[1]);
//					read( file, Board::getInstance().board[i][j].piece -> white);
//					read( file, Board::getInstance().board[i][j].piece -> x);
//					read( file, Board::getInstance().board[i][j].piece -> y);
//
//				}
			}
		}
=======
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
>>>>>>> 6612c77ba3491e542861bed4e9df6d466feabe98
	}

};
#endif /* SRC_STORAGE_H_ */

//				if (!Board::getInstance().board[i][j].isEmpty()){
			//					read( file, Board::getInstance().board[i][j].piece ->figure[0]);
			//					read( file, Board::getInstance().board[i][j].piece -> figure[1]);
			//					read( file, Board::getInstance().board[i][j].piece -> white);
			//					read( file, Board::getInstance().board[i][j].piece -> x);
			//					read( file, Board::getInstance().board[i][j].piece -> y);
			//					cout << Board::getInstance().board[i][j].piece ->figure[0] << endl;
			//					cout << Board::getInstance().board[i][j].piece ->figure[1] << endl;
			//					cout << Board::getInstance().board[i][j].piece ->white << endl;
			//					cout << Board::getInstance().board[i][j].piece ->x << endl;
			//					cout << Board::getInstance().board[i][j].piece ->y << endl;
			//				}
