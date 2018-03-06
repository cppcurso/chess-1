/*
 * BishopMoveTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include <Bishop.h>
#include <gtest/gtest.h>

class BishopTest : public ::testing::Test{
protected:
	Bishop bishop1 = Bishop(true, 2, 0);



};

TEST_F(BishopTest, validMove){
		ASSERT_FALSE(bishop1.validMove(5,0));
		ASSERT_TRUE(bishop1.validMove(5,3));
}
