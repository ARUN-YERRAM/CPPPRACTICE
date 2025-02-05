#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &maze, int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1);
}

bool solveMaze(vector<vector<int>> &maze, int x, int y, vector<vector<int>> &sol, int n) {
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y, n)) {
        sol[x][y] = 1;

        if (solveMaze(maze, x + 1, y, sol, n)) return true;
        if (solveMaze(maze, x, y + 1, sol, n)) return true;

        sol[x][y] = 0; // Backtrack
    }
    return false;
}

int main() {
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 0, 0},
                                {1, 1, 1, 1}};
    int n = maze.size();
    vector<vector<int>> sol(n, vector<int>(n, 0));

    if (solveMaze(maze, 0, 0, sol, n)) {
        for (const auto &row : sol) {
            for (int cell : row) cout << cell << " ";
            cout << endl;
        }
    } else {
        cout << "No solution exists\n";
    }
    return 0;
}
