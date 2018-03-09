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


//					} else {
//						unsigned short temp = 0;
//						write( "games", '0');
//						write( "games", '0');
//						write( "games", '0');
//						write( "games", temp);
//						write( "games", temp);
//					}
				//}
			//}
		}
		static void restore(){
			ifstream file("games", ios::binary);
			char a,b;
			unsigned short int x,y;
			bool w;
//		for (int i = 0; i < 8; ++i) {
//		for (int j = 0; j < 8; ++j) {
//			if (!Board::getInstance().board[i][j].isEmpty()){

//				Board::getInstance().board[0][0].piece = new Bishop(true, 0, 0);
			read( file, a);
			read( file, b);
			read( file, w);
			read( file, x);
			read( file, y);
//			} else {
//				unsigned short temp = 0;
//				read( "games", '0');
//				read( "games", '0');
//				read( "games", '0');
//				read( "games", temp);
//				read( "games", temp);
//			}
//		}
			cout << Board::getInstance().board[0][0].piece ->figure[0] << endl;
						cout << Board::getInstance().board[0][0].piece ->figure[1] << endl;
						cout << Board::getInstance().board[0][0].piece ->white << endl;
						cout << Board::getInstance().board[0][0].piece ->x << endl;
						cout << Board::getInstance().board[0][0].piece ->y << endl;
				//return *(Board::getInstance().board[0][0].piece);
	}
};
#endif /* SRC_STORAGE_H_ */
