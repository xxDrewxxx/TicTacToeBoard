/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};




TEST(TicTacToeBoardTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, test_1) {
	TicTacToeBoard obj;
	obj.toggleTurn();
	// Piece turn = O;
	// toggleTurn();
	// obj.turn = O;
}

TEST(TicTacToeBoardTest, test_2) {
	TicTacToeBoard obj;
	obj.placePiece(1,3);
}

TEST(TicTacToeBoardTest, test_3) {
	TicTacToeBoard obj;
	obj.getPiece(1,3);
}

TEST(TicTacToeBoardTest, test_4) {
	TicTacToeBoard obj;
	obj.getWinner();
}

