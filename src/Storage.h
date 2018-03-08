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
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (!Board::getInstance().board[i][j].isEmpty()){
				write( file, Board::getInstance().board[i][j].piece ->figure[0]);
				write( file, Board::getInstance().board[i][j].piece -> figure[1]);
				write( file, Board::getInstance().board[i][j].piece -> white);
				write( file, Board::getInstance().board[i][j].piece -> x);
				write( file, Board::getInstance().board[i][j].piece -> y);
				}

			}

		}
	}
	static void restore(){
		ifstream file("games", ios::binary);
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (!Board::getInstance().board[i][j].isEmpty()){
					read( file, Board::getInstance().board[i][j].piece ->figure[0]);
					read( file, Board::getInstance().board[i][j].piece -> figure[1]);
					read( file, Board::getInstance().board[i][j].piece -> white);
					read( file, Board::getInstance().board[i][j].piece -> x);
					read( file, Board::getInstance().board[i][j].piece -> y);
					cout << Board::getInstance().board[i][j].piece ->figure[0] << endl;
					cout << Board::getInstance().board[i][j].piece ->figure[1] << endl;
					cout << Board::getInstance().board[i][j].piece ->white << endl;
					cout << Board::getInstance().board[i][j].piece ->x << endl;
					cout << Board::getInstance().board[i][j].piece ->y << endl;
				}}
		}



	}
};
#endif /* SRC_STORAGE_H_ */
