//sum of cube of numbers using recursion
#include <bits/stdc++.h>
using namespace std;
long long sum( long long n)
{
    if(n==0) return;
    return n*n*n + sum(n-1);
    

}
int main() {
    
    return 0;
}