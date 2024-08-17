#include <bits/stdc++.h>
#include <vector>
using namespace std;

int numWays(int n){
    vector<vector<int>> dp(n+1,vector<int>(2));

    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[2][0] = 2;
    dp[2][1] = 2;

    for (int i = 3;i<=n;i++){
        for (int j = 0;j<=1;j++){
            dp[i][j] = dp[i-1][1-j] + dp[i-2][1-j];
        }
    }
    return dp[n][0] + dp[n][1];
}
