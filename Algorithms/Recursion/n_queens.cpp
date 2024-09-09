/*
 * The N-Queens problem is a classic problem in computer science and algorithms.
 * The problem is to place N queens on an N x N chessboard so that no two queens
 * threaten each other. In other words, no two queens can be in the same row, column,
 * or diagonal. The solution should be a configuration of queens that satisfies these constraints.
 *
 */

#include <bits/stdc++.h>
using namespace std;

// function to check whether a square (board[row][col]) is safe or not
bool isSafe(vector<vector<int>> &board, int row, int col, int n) {
  // check column
  for (int i = 0; i < col; i++) {
    if (board[row][i]) {
      return false;
    }
  }

  // check left upper diagonal
  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
    if (board[i][j]) {
      return false;
    }
  }

  // check left lower diagonal
  for (int i = row, j = col; i < n && j >= 0; i++, j--) {
    if (board[i][j]) {
      return false;
    }
  }

  return true;
}

// helper to recursively solve N Queens using backtracking
bool helper(vector<vector<int>> &board, int col, int n) {
  // base case: if all queens are placed, return true
  if (col >= n) {
    return true;
  }

  // try to place the queen in each row of current column
  for (int i = 0; i < n; i++) {
    // check if position board[i][col] is safe
    if (isSafe(board, i, col, n)) {
      board[i][col] = 1; // place the queen there

      // recurse to place rest of the queens
      if (helper(board, col + 1, n)) {
        return true;
      }

      // if we come here then that means placing queen didn't lead to a
      // solution... so backtrack
      board[i][col] = 0;
    }
  }

  return false; // no solution found
}

void solveNQueens(int n) {
  // setting n*n board with all zeros
  vector<vector<int>> board(n, vector<int>(n, 0));

  if (helper(board, 0, n)) {
    cout << "Solution found: " << '\n';
    for (auto row : board) {
      for (auto cell : row) {
        cout << (cell ? " Q " : " * ");
      }
      cout << '\n';
    }
  }
}

int main() {
  int n = 20;

  solveNQueens(n);

  return 0;
}
