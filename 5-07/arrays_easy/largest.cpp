#include <bits/stdc++.h>
using namespace std;
void largest(int arr[], int n)
{
        int larg = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>larg)
            {
                larg=arr[i];
            }
        }
        return larg;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    cout<<largest(arr,n);
    
    
    return 0;
}