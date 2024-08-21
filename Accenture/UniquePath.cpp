#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int uniquePathsWithObstaclesBFS(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    
    // If the starting or ending cell is blocked, return 0 paths
    if (obstacleGrid[0][0] == 1 || obstacleGrid[n-1][m-1] == 1) {
        return 0;
    }

    vector<vector<int>> paths(n, vector<int>(m, 0));
    paths[0][0] = 1; // Start position

    queue<pair<int, int>> q;
    q.push({0, 0});

    int drow[] = {0, 1};
    int dcol[] = {1, 0};

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int i = 0; i < 2; i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            // Check bounds and if the cell is not blocked
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && obstacleGrid[nrow][ncol] == 0) {
                if (paths[nrow][ncol] == 0) {
                    q.push({nrow, ncol});
                }
                // Update the number of paths to this cell
                paths[nrow][ncol] += paths[row][col];
            }
        }
    }

    return paths[n-1][m-1];
}

// Example usage
int main() {
    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    
    cout << uniquePathsWithObstaclesBFS(obstacleGrid) << endl; // Output: 2

    return 0;
}
