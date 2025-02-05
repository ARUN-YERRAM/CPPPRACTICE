#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &board, int row, int col, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col]) return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j]) return false;
    }
    return true;
}

bool solveNQueens(vector<vector<int>> &board, int row, int n) {
    if (row == n) {
        for (const auto &r : board) {
            for (int cell : r) cout << (cell ? "Q " : ". ");
            cout << endl;
        }
        cout << "---------\n";
        return true;  // Return true as soon as a valid solution is found
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            solveNQueens(board, row + 1, n);  // If true, stop further recursion
                // return true;
            board[row][col] = 0;  // Backtrack
        }
    }
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (solveNQueens(board, 0, n)) {
        cout << "No solution exists\n";
    }
    return 0;
}
