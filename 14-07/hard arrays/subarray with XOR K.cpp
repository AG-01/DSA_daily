//Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.

#include <bits/stdc++.h>
using namespace std;
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    unordered_map < int, int > m;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        sum = sum ^ a[i];
        if (sum == b) {
            ans++;
        }
        if (m.find(sum ^ b) != m.end()) {
            ans += m[sum ^ b];
        }
        m[sum]++;
    }
    return ans;
}

int main() {
    
    return 0;
}