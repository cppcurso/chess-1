/*
 * main.cpp
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */
#include "chess.h"
#include <gtest/gtest.h>
#include "Board.h"
#include "Storage.h"
using namespace std;

int main(int argc, char **argv) {
//	::testing::InitGoogleTest(&argc, argv);
//	return RUN_ALL_TESTS();

	Board::getInstance();
		Board::getInstance().init();
//		Board::getInstance().print();
		Storage::save();
		Storage::restore();
		Board::getInstance().move(0, 1, 0, 2);
//		Board::getInstance().print();


//	Chess chessGame;
//	chessGame.play();

}


