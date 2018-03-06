#include <Pawn.h>
#include <gtest/gtest.h>

class PawnTest : public ::testing::Test{
protected:
	Pawn pawn = Pawn(true,0,0);
};

TEST_F(PawnTest,validMove){
	ASSERT_TRUE(pawn.validMove(0,2));
	ASSERT_FALSE(pawn.validMove(0,6));
}
