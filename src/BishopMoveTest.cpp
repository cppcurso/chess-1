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
	Bishop bishop1 = Bishop(true, 6, 2);



};

TEST_F(BishopTest, validMove){
//		ASSERT_TRUE(bishop1.validMove(7,7));
		ASSERT_TRUE(bishop1.validMove(4,4));
		ASSERT_TRUE(bishop1.validMove(3,5));
//		ASSERT_TRUE(bishop1.validMove(7,3));
//		ASSERT_FALSE(bishop1.validMove(5,3));
}
