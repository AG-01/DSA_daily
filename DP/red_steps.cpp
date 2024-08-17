#include <bits/stdc++.h>

#include <vector>

using namespace std;

int climbStairsKStepsSkipRed(int n, int k, const vector<bool>& stairs) {
    vector<int> dp(k, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < k; ++j) {
            if (i - j < 0) {
                continue;
            }
            if (stairs[i - 1]) {
                dp[i % k] = 0;
            } else {
                dp[i % k] += dp[(i - j) % k];
            }
        }
    }

    return dp[n % k];
}

int main() {
    int n = 5; // Number of steps to the top
    int k = 3; // Maximum number of steps you can climb at a time
    vector<bool> stairs = {false, true, false, false, false}; // Stairs configuration, true indicates "red" (cannot step on)

    int result = climbStairsKStepsSkipRed(n, k, stairs);
    cout << "Number of distinct ways to reach the top: " << result << endl;

    return 0;
}
