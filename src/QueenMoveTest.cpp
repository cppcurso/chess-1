/*
 * QueenMoveTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */




#include <Queen.h>
#include <gtest/gtest.h>

class QueenTest : public ::testing ::Test{
protected:
Queen queen1 = Queen(true,0,0);
};
TEST_F(QueenTest,validateMovement){
	ASSERT_TRUE(queen1.validMove(0,5));
	ASSERT_FALSE(queen1.validMove(1,2));
	ASSERT_TRUE(queen1.validMove(5,5));
	ASSERT_TRUE(queen1.validMove(5,0));
	ASSERT_FALSE(queen1.validMove(5,4));
}
