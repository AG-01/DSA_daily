#include <bits/stdc++.h>
using namespace std;

void printaubu(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind==n)
    {
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    printaubu(ind+1,ds,arr,n);
    ds.pop_back();
    printaubu(ind+1,ds,arr,n);
}

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ds;
    printaubu(0,ds,arr,n);
    return 0;
}