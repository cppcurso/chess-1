/*
 * KnightMoveTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */




#include <Knight.h>
#include <gtest/gtest.h>

class KnightTest : public ::testing ::Test{
protected:
Knight knight1 = Knight(true,3,3);
};
TEST_F(KnightTest,validateMovement){
	ASSERT_TRUE(knight1.validMove(4,5));
	ASSERT_TRUE(knight1.validMove(1,2));
	ASSERT_TRUE(knight1.validMove(2,5));
	ASSERT_FALSE(knight1.validMove(5,0));
	ASSERT_FALSE(knight1.validMove(5,5));
	ASSERT_TRUE(knight1.validMove(1,4));
}
