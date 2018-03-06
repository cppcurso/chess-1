#include <Pawn.h>
#include <gtest/gtest.h>

class PawnTest : public ::testing::Test{
protected:
	Pawn pawn = Pawn(true,1,1);
	Pawn pawn2 = Pawn(false,1,1);
};

TEST_F(PawnTest,validMove){
	ASSERT_TRUE(pawn.validMove(1,2));
	ASSERT_TRUE(pawn.validMove(1,3));
	ASSERT_FALSE(pawn.validMove(1,5));
	ASSERT_TRUE(pawn2.validMove(1,0));
	ASSERT_FALSE(pawn.validMove(1,0));
	ASSERT_FALSE(pawn2.validMove(1,2));
	ASSERT_TRUE(pawn.validMove(2,2));
	ASSERT_FALSE(pawn.validMove(3,3));
}
