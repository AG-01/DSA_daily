// given a string s, find the length of the longest substring without repeating characters.

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m; // char, index
        int ans = 0;
        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (m.find(s[i]) != m.end()) {
                start = max(start, m[s[i]] + 1);
            }
            m[s[i]] = i;
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};

int main() {
    
    return 0;
}