/*
 * KingMoveTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */


#include <King.h>
#include <gtest/gtest.h>

class KingTest : public ::testing ::Test{
protected:
King king1 = King(true,3,3);
};
TEST_F(KingTest,validateMovement){
	ASSERT_TRUE(king1.validMove(4,4));
	ASSERT_TRUE(king1.validMove(3,2));
	ASSERT_TRUE(king1.validMove(2,4));
	ASSERT_FALSE(king1.validMove(5,0));
	ASSERT_FALSE(king1.validMove(5,5));
	ASSERT_TRUE(king1.validMove(2,2));
}
