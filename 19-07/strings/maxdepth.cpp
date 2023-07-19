//Given a valid parenthesis string (with only '(' and ')', an open parenthesis will always end with a close parenthesis, and a close parenthesis will never start first), remove the outermost layers of the parenthesis string and return the new parenthesis string.

#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int depth = 0, maxDepth = 0;
    for (char c : s) {
        if (c == '(') {
            depth++;
            maxDepth = max(depth, maxDepth);
        } else if (c == ')') {
            depth--;
        }
    }
    return maxDepth;
}

int main() {
    string s;
    cin >> s;
    cout << maxDepth(s) << endl;
    
    
    return 0;
}