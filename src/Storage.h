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
		static void read(const char* name, T& data) {
		    file.read((char *) &data, sizeof(T));
		}

		static void  save(){
			ofstream file("games", ios::binary);
//			for (int i = 0; i < 8; ++i) {
//				for (int j = 0; j < 8; ++j) {
					//if (!Board::getInstance().board[i][j].isEmpty()){
						write( file, Board::getInstance().board[0][0].piece ->getFigure()[0]);
						write( file, Board::getInstance().board[0][0].piece -> getFigure()[1]);
						write( file, Board::getInstance().board[0][0].piece -> isWhite());
						write( file, Board::getInstance().board[0][0].piece -> getX());
						write( file, Board::getInstance().board[0][0].piece -> getY());
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
//		for (int i = 0; i < 8; ++i) {
//		for (int j = 0; j < 8; ++j) {
//			if (!Board::getInstance().board[i][j].isEmpty()){

//				Board::getInstance().board[0][0].piece = new Bishop(true, 0, 0);
//				read( "games", Board::getInstance().board[0][0].piece ->getFigure()[0]);
//				read( "games", Board::getInstance().board[0][0].piece -> getFigure()[1]);
//				read( "games", Board::getInstance().board[0][0].piece -> isWhite());
//				read( "games", Board::getInstance().board[0][0].piece -> getX());
//				read( "games", Board::getInstance().board[0][0].piece -> getY());
//			} else {
//				unsigned short temp = 0;
//				read( "games", '0');
//				read( "games", '0');
//				read( "games", '0');
//				read( "games", temp);
//				read( "games", temp);
//			}
//		}
				//return *(Board::getInstance().board[0][0].piece);
	}
};
#endif /* SRC_STORAGE_H_ */
