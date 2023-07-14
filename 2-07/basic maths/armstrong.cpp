#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int temp = n;
    cin >> n;
    int sum = 0;
    while (n) {
        int pop = n%10;
        n/=10;
        sum = sum + pop*pop*pop;
    }
    if (sum == temp) cout << "Armstrong";
    else cout << "Not Armstrong";
    return 0;
}

