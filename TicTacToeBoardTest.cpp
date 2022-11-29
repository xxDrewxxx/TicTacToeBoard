/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

using namespace std;

 
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

TEST(TicTacToeBoardTest, toggleTest) {
	TicTacToeBoard obj;
	char result = obj.toggleTurn();
	ASSERT_EQ(result, O);
}

TEST(TicTacToeBoardTest, placePieceTest) {
	TicTacToeBoard obj;
	char result = obj.placePiece(1,2);
	ASSERT_EQ(X, result);
	//obj.placePiece(1,3);
	// obj.toggleTurn();
	char result2 = obj.placePiece(2,2);
	ASSERT_EQ(O, result2);
	char result3 = obj.placePiece(0,2);
	ASSERT_EQ(X, result3);
}

TEST(TicTacToeBoardTest, getPieceTest) {
	TicTacToeBoard obj3;

	obj3.placePiece(2,2);
	char result = obj3.getPiece(2,2);
	ASSERT_EQ(X, result);

	char result2 = obj3.getPiece(4,2);
	ASSERT_EQ(Invalid, result2);
}

TEST(TicTacToeBoardTest, getWinnerTest) {
	TicTacToeBoard obj;

	// obj.placePiece(0,0);
	// obj.placePiece(0,1);
	// obj.placePiece(1,1);
	// obj.placePiece(0,2);
	// obj.placePiece(2,2);

	obj.placePiece(0,0);
	obj.placePiece(0,2);
	obj.placePiece(0,1);
	obj.placePiece(1,0);
	obj.placePiece(1,2);
	obj.placePiece(1,1);
	obj.placePiece(2,0);
	obj.placePiece(2,1);
	obj.placePiece(2,2);

	char result = obj.getWinner();
	ASSERT_EQ(Blank, result);
}

TEST(TicTacToeBoardTest, gameTest) {
	TicTacToeBoard obj5;

	// obj5.placePiece(0,0);
	// obj5.placePiece(0,1);
	// obj5.placePiece(1,1);
	// obj5.placePiece(0,2);
	// obj5.placePiece(2,2);

	obj5.placePiece(0,0);
	obj5.placePiece(0,2);
	obj5.placePiece(0,1);
	obj5.placePiece(1,0);
	obj5.placePiece(1,2);
	obj5.placePiece(1,1);
	obj5.placePiece(2,0);
	obj5.placePiece(2,1);
	obj5.placePiece(2,2);

	char result1 = obj5.getPiece(0,0);
	char result2 = obj5.getPiece(0,1);
	char result3 = obj5.getPiece(0,2);
	char result4 = obj5.getPiece(1,0);
	char result5 = obj5.getPiece(1,1);
	char result6 = obj5.getPiece(1,2);
	char result7 = obj5.getPiece(2,0);
	char result8 = obj5.getPiece(2,1);
	char result9 = obj5.getPiece(2,2);

	cout << result1 << " " << result2 << " " << result3 << endl;
	cout << result4 << " " << result5 << " " << result6 << endl;
	cout << result7 << " " << result8 << " " << result9 << endl;



}

//(0,0) (0,1) (0,2)
//(1,0) (1,1) (1,2)
//(2,0) (2,1) (2,2)