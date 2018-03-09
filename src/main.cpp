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

<<<<<<< HEAD
	Board::getInstance();
	Board::getInstance().init();
	Storage::save();
	Board::getInstance().print();
	Board::getInstance().move(0,1,0,2);
	Storage::restore();
	Board::getInstance().print();





//	Chess chessGame;
//	chessGame.play();
=======
	Chess chessGame;
	chessGame.play();
>>>>>>> 6612c77ba3491e542861bed4e9df6d466feabe98

}


