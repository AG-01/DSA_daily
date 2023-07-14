//Given a number N. Count the number of digits in N which evenly divides N.

#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n)
{
    int count = 0;
    int temp = n;
    while(temp)
    {
        int digit = temp % 10;
        if(digit != 0 && n % digit == 0)
        {
            count++;
        }
        temp /= 10;
    }
    return count;
}

int main() {
    
    int n;
    cin >> n;
    cout << evenlyDivides(n);
    
    return 0;
}