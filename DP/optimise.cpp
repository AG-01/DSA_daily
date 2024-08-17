#include <bits/stdc++.h>
#include <vector>

using namespace std;

//cheapest path to the top using DP
/*

n = 3
k = 2
p = [3,2,4]

Objective function

F(i) = minimum cost to reach the top
F(0) = 0
F(1) = 3
F(2) = 2 or 5(if taking 2 1-steps)
F(3) = 6  Here comes the transition function

F(n) = P(n) + min(F(n-1), F(n-2))

We will use bottom up approach to solve this problem

Time complexity = O(n)
Space complexity = O(n)

*/

int paidStaircase(int n, int k, vector<int> p) {
    vector<int> dp(n+1,0);
    dp[0] = 0;
    dp[1] = p[1];

    for (int i = 2; i<=n;i++)
    {
        dp[i] = p[i] + min(dp[i-1],dp[i-2]);
    }
    return dp[n];
}

int main()
{
    int n = 3;
    int k = 2;
    vector<int> p = {0,3,2,4};
    cout<<paidStaircase(n,k,p);
    return 0;
}
