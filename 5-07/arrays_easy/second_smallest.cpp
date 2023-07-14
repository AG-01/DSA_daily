#include <bits/stdc++.h>
using namespace std;

void secondsmall(int arr[], int n)
{
    int small = arr[0];
    int secsmal = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            secsmal = small;
            small = arr[i];
        }
        else if(arr[i]<secsmal && arr[i]!=small)
        {
            secsmal = arr[i];
        }
    }
    cout<<secsmal;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    cout<<secondsmall(arr,n);

    
    return 0;
}