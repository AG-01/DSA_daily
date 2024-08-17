#include <bits/stdc++.h>
using namespace std;

/*
n = 8
k = 2
p = [3,2,4,6,1,1,5,3]

function - > F(n) = min(F(n-1),F(n-2)) + p(n)
Return the path with minimum cost
*/


vector<int> paidStaircase(int n, const vector<int>& p) {
    vector<int> dp(n + 1, 0);
    vector<int> from(n + 1, 0);

    dp[0] = 0;
    dp[1] = p[1];

    for (int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + p[i];
        if (dp[i - 1] < dp[i - 2]) {
            from[i] = i - 1;
        } else {
            from[i] = i - 2;
        }
    }

    vector<int> path;
    for (int curr = n; curr >= 0; curr = from[curr]) {
        path.push_back(curr);
        if (curr == 0) {
            break;
        }
    }

    reverse(path.begin(), path.end());

    return path;
}

int main() {
    int n = 5;  // Number of stairs
    vector<int> p = {0, 1, 2, 2, 1, 2};  // Costs for each stair

    vector<int> path = paidStaircase(n, p);

    cout << "Path: ";
    for (int stair : path) {
        cout << stair << " ";
    }
    cout << endl;

    return 0;
}
