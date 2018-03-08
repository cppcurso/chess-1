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
		static void write(const char* name, T data) {
		    ofstream file(name, ios::binary);
		    file.write((char*) &data, sizeof(T));
		}

		template<typename T>
		void read(const char* name, T& data) {
		    ifstream file(name, ios::binary);
		    file.read((char *) &data, sizeof(T));
		}

		static void  save(){
			for (int i = 0; i < 8; ++i) {
				for (int j = 0; j < 8; ++j) {
					if (!Board::getInstance().board[i][j].isEmpty()){
						write( "games", Board::getInstance().board[i][j].piece ->getFigure()[0]);
						write( "games", Board::getInstance().board[i][j].piece -> getFigure()[1]);
						write( "games", Board::getInstance().board[i][j].piece -> isWhite());
						write( "games", Board::getInstance().board[i][j].piece -> getX());
						write( "games", Board::getInstance().board[i][j].piece -> getY());
					} else {
						write ("games", Board::getInstance().board[i][j].piece);
					}
				}
			}
		}
//		static Board Storage::restore(){
//			for (int i = 0; i < 8; ++i) {
//				for (int j = 0; j < 8; ++j) {
//					read ("games", Board::getInstance().board[i][j].piece);
//				}
//					if (!Board::getInstance().board[i][j].isEmpty()){
//						read( "games", Board::getInstance().board[i][j].piece ->getFigure()[0]);
//						read( "games", Board::getInstance().board[i][j].piece -> getFigure()[1]);
//						read( "games", Board::getInstance().board[i][j].piece ->isWhite());
//						read( "games", Board::getInstance().board[i][j].piece -> getX());
//					} else {
//						read ("games", Board::getInstance().board[i][j].piece);
//					}
//				}
//			}
//		}
};
#endif /* SRC_STORAGE_H_ */
