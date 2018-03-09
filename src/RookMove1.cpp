/*
 * RookMove1.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include <Rook.h>
#include <gtest/gtest.h>

class RookTest : public ::testing ::Test{
protected:
Rook rook1 = Rook(true,0,0);
};
TEST_F(RookTest,validateMovement){
	ASSERT_FALSE(rook1.validMove(6,1));
	ASSERT_FALSE(rook1.validMove(4,2));
	ASSERT_TRUE(rook1.validMove(0,5));
}


