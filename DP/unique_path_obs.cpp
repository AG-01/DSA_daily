#include <bits/stdc++.h>
using namespace std;

/*
Problem:
	Unique Paths with Obstales

	A robot is located at the top-left corner of a m x n grid (marked 'S' in the diagram below).
	The robot can only move either down or right at any point in time.
	The robot is trying to reach the bottom-right corner of the grid (marked 'E' in the diagram below).

	Now consider if some obstacles are added to the grids.
	How many unique paths would there be?

	+---+---+---+---+
	| S |   |   |   |
	+---+---+---+---+
	|   | 1 | 1 | 1 |
	+---+---+---+---+
	|   |   |   | E |
	+---+---+---+---+

	An obstacle and empty space is marked as 1 and 0 respectively in the grid.
*/

/*
Goal - reach the x,y coordinate in the matrix
Base cases
    - If matrix is empty, return false
    - If matrix is 1x1, return true if the element is 1
    - If matrix is 2x2, total ways = 2

Transition function
    - dp[i][j] = dp[i-1][j] + dp[i][j-1]

If we have some particular cell where we cannot go, then we can set dp[i][j] = 0
We create a bad cells array to store the bad cells
    - If bad cell is found, then dp[i][j] = 0

If we determine the cost of each cell, then we can add the cost to the dp[i][j] value
    - dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + cost[i][j]

Objective functionn -
*/

// Time complexity: O(m * n)
// Space complexity: O(m * n)
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    dp[0][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {

            if (obstacleGrid[i][j] == 1)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0 && j > 0) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            } else if (i > 0) {
                dp[i][j] = dp[i - 1][j];
            } else if (j > 0) {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }

    return dp[m - 1][n - 1];
}

int main() {
    vector<vector<int>>  
 grid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int result = uniquePathsWithObstacles(grid);
    cout << "Number of unique paths with obstacles: " << result << endl;
    return 0;
}
