#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Directions for moving up, down, left, right
    vector<int> directions = {-1, 0, 1, 0, -1}; 
    
    // Helper function for BFS
    int bfs(int x, int y, vector<vector<int>>& grid) {
        int area = 0;
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = 0;  // Mark the cell as visited
        
        while (!q.empty()) {
            pair<int, int> cell = q.front();
            q.pop();
            area++;  // Increment area for each land cell
            
            // Explore all 4 directions (up, down, left, right)
            for (int i = 0; i < 4; i++) {
                int newX = cell.first + directions[i];
                int newY = cell.second + directions[i + 1];
                
                // Check if the new cell is within bounds and is land (1)
                if (newX >= 0 && newY >= 0 && newX < grid.size() && newY < grid[0].size() && grid[newX][newY] == 1) {
                    q.push({newX, newY});  // Add the cell to the queue
                    grid[newX][newY] = 0;  // Mark the cell as visited
                }
            }
        }
        
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        
        // Iterate through every cell in the grid
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    maxArea = max(maxArea, bfs(i, j, grid));  // Update max area using BFS
                }
            }
        }
        
        return maxArea;
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> grid = {
        {0, 1, 0, 0, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };
    
    cout << "Max Area of Island: " << solution.maxAreaOfIsland(grid) << endl;
    
    return 0;
}
