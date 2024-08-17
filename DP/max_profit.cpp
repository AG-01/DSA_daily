#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
Problem:
	Maximum Profit in a Grid

	A robot is located at the top-left corner of a m x n grid (marked 'S' in the diagram below).
	The robot can only move either down or right at any point in time.
	The robot is trying to reach the bottom-right corner of the grid (marked 'E' in the diagram below).
	Each cell contains a coin the robot can collect.

	What is the maximum profit the robot can accumulate?

	+---+---+---+---+
	| S | 2 | 2 | 1 |
	+---+---+---+---+
	| 3 | 1 | 1 | 1 |
	+---+---+---+---+
	| 4 | 4 | 2 | E |
	+---+---+---+---+
*/

// Time complexity:
// Space complexity:
// f(i,j) = max(f(i-1, j), f(i, j-1)) + grid(i,j)

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
int maxprofit(vector<vector<int>>& Grid) {
    int m = Grid.size();
    int n = Grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    dp[0][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {

            if (i > 0 && j > 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])+ Grid[i][j];
            } else if (i > 0) {
                dp[i][j] = dp[i - 1][j]+ Grid[i][j];;
            } else if (j > 0) {
                dp[i][j] = dp[i][j - 1]+ Grid[i][j];;
            }
        }
    }

    return dp[m - 1][n - 1];
}

int getPath(vector<vector<int>> &dp, int m, int n,vector<vector<int>> &path )
{
    if (m == 0 && n == 0) {
        path.push_back({0, 0});
        return 1;
    }
    if (m == 0){
        path.push_back({0, n});
        return 1;
    }
    if (n == 0){
        path.push_back({m, 0});
        return 1;
    }


}
