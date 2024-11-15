#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <utility>
using namespace std;

class Solution {
public:
    // Directions for moving up, down, left, right
    vector<int> directions = {-1, 0, 1, 0, -1}; 
    
    // Helper function for BFS
    void bfs(int x, int y, vector<vector<int>>& grid, vector<pair<int, int>>& islandCells, int baseX, int baseY) {
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = 0;  // Mark the cell as visited
        
        while (!q.empty()) {
            pair<int, int> cell = q.front();
            q.pop();
            // Record the relative position of the cell to the base point of the island
            islandCells.push_back({cell.first - baseX, cell.second - baseY});
            
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
    }

    int numDistinctIslands(vector<vector<int>>& grid) {
        set<vector<pair<int, int>>> distinctIslands;  // Set to store unique shapes of islands
        int m = grid.size();
        int n = grid[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    vector<pair<int, int>> islandCells;  // To store the shape of the current island
                    bfs(i, j, grid, islandCells, i, j);  // Start BFS from the current cell
                    distinctIslands.insert(islandCells);  // Add the shape of the island to the set
                }
            }
        }
        
        return distinctIslands.size();  // The size of the set gives the number of distinct islands
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> grid = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1}
    };
    
    cout << "Number of Distinct Islands: " << solution.numDistinctIslands(grid) << endl;
    
    return 0;
}
