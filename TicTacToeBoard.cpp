#include "TicTacToeBoard.h"
/**
 * Class for representing a 3x3 Tic-Tac-Toe game board, using the Piece enum
 * to represent the spaces on the board.
**/

//Constructor sets an empty board and specifies it is X's turn first
TicTacToeBoard::TicTacToeBoard()
{
  turn = X;
  for(int i=0; i<BOARDSIZE; i++)
    for(int j=0; j<BOARDSIZE; j++)
      board[i][j] = Blank;
}

/**
 * Switches turn member variable to represent whether it's X's or O's turn
 * and returns whose turn it is
**/
Piece TicTacToeBoard::toggleTurn()
{
  // turn = X;
  if (turn == O) {
    turn = X;
    return X;
  } else if (turn == X) {
    turn = O;
    return O;
  }
  
}

/**
 * Places the piece of the current turn on the board, returns what
 * piece is placed, and toggles which Piece's turn it is. placePiece does 
 * NOT allow to place a piece in a location where there is already a piece.
 * In that case, placePiece just returns what is already at that location. 
 * Out of bounds coordinates return the Piece Invalid value. When the game
 * is over, no more pieces can be placed so attempting to place a piece
 * should neither change the board nor change whose turn it is.
**/ 
Piece TicTacToeBoard::placePiece(int row, int column)
{
  if (board[row][column] == Invalid) {
    return Invalid;
  }

  if (board[row][column] != Blank) {
    return board[row][column];
  }

  if (row <= 2 && row >= 0 && column <= 2 && column >= 0) {
    board[row][column] = turn;
    Piece temp = turn;
    if (turn == X) {
      turn = O;
    } else if (turn == O) {
      turn = X;
    }
    return temp;
  } else {
    return Invalid;
  }
}

/**
 * Returns what piece is at the provided coordinates, or Blank if there
 * are no pieces there, or Invalid if the coordinates are out of bounds
**/
Piece TicTacToeBoard::getPiece(int row, int column)
{
  if (board[row][column] == Blank){
    return Blank;
  } else if (board[row][column] == X) {
    return X;
  } else if (board[row][column] == O) {
    return O;
  } else {
    return Invalid;
  }
}

/**
 * Returns which Piece has won, if there is a winner, Invalid if the game
 * is not over, or Blank if the board is filled and no one has won.
**/
Piece TicTacToeBoard::getWinner()
{
  
  if (board[0][0] == X && board[0][1] == X && board[0][2] == X) {
    return X;

  } else if (board[0][0] == X && board[1][0] == X && board[2][0] == X) {
    return X;

  } else if (board[2][0] == X && board[2][1] == X && board[2][2] == X) {
    return X;

  } else if (board[0][2] == X && board[1][2] == X && board[2][2] == X) {
    return X;
  
  } else if (board[0][0] == X && board[1][1] == X && board[2][2] == X) {
    return X;
  
  } else if (board[2][0] == X && board[1][1] == X && board[0][2] == X) {
    return X;
  
  } else if (board[0][1] == X && board[1][1] == X && board[2][1] == X) {
    return X;
  
  } else if (board[1][0] == X && board[1][1] == X && board[1][2] == X) {
    return X;

  } else if (board[0][0] == O && board[0][1] == O && board[0][2] == O) {
    return O;

  } else if (board[0][0] == O && board[1][0] == O && board[2][0] == O) {
    return O;

  } else if (board[2][0] == O && board[2][1] == O && board[2][2] == O) {
    return O;

  } else if (board[0][2] == O && board[1][2] == O && board[2][2] == O) {
    return O;
  
  } else if (board[0][0] == O && board[1][1] == O && board[2][2] == O) {
    return O;
  
  } else if (board[2][0] == O && board[1][1] == O && board[0][2] == O) {
    return O;
  
  } else if (board[0][1] == O && board[1][1] == O && board[2][1] == O) {
    return O;
  
  } else if (board[1][0] == O && board[1][1] == O && board[1][2] == O) {
    return O;

  } else if (board[0][0] != Blank && 
             board[0][1] != Blank && 
             board[0][2] != Blank && 
             board[1][0] != Blank && 
             board[1][1] != Blank && 
             board[1][2] != Blank && 
             board[2][0] != Blank && 
             board[2][1] != Blank && 
             board[2][2] != Blank) 
  {          
    return Blank;

  } else {
    return Invalid;
  }

}

//(0,0) (0,1) (0,2)
//(1,0) (1,1) (1,2)
//(2,0) (2,1) (2,2)