#include <bits/stdc++.h>
using namespace std;

void reverse(int l, int arr[],int n)
{
    if(l>=n/2) return;
    swap(arr[l],arr[n-l-1]);
    reverse(l+1,arr,n);
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(1,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;
    return 0;
}