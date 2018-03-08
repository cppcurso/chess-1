/*
 * Storage.cpp
 *
 *  Created on: 08/03/2018
 *      Author: usuario
 */

#include "Storage.h"

Storage::Storage() {
	// TODO Auto-generated constructor stub

}

Storage::~Storage() {
	// TODO Auto-generated destructor stub
}

template<typename T>
	void write(const char* name, T data) {
	    ofstream file(name, ios::binary);
	    file.write((char*) &data, sizeof(T));
	}

	template<typename T>
	void read(const char* name, T& data) {
	    ifstream file(name, ios::binary);
	    file.read((char *) &data, sizeof(T));
	}

	static void  Storage:: save(){
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				write( "games", Board::getInstance().board[i][j].piece -> getFigure()[0]);
				write( "games", Board::getInstance().board[i][j].piece -> getFigure()[1]);
				write( "games", Board::getInstance().board[i][j].piece -> isWhite());
				write( "games", Board::getInstance().board[i][j].piece -> getX());
				write( "games", Board::getInstance().board[i][j].piece -> getY());

			}
		}
	}
//		//static Board Storage::restore(Board& board);
