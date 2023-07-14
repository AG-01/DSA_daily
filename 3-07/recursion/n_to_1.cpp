//print n to 1 using recusion

#include <bits/stdc++.h>
using namespace std;
void printN(int i,int n)
{
    if(i<0) return;
    cout<<i<<" ";
    printN(i-1,n);

}
int main() {
    int n;
    cin>>n;
    printN(n,n);

    return 0;
}