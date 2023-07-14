#include <bits/stdc++.h>
using namespace std;

void secondlargest(int arr[], int n)
{
    int sec = -1;
    int larg = arr[0];
    for (int i=0;i<n;i++)
    {
        if(arr[i]>larg)
        {
            sec = larg;
            larg = arr[i];
        }
        else if(arr[i]>sec && arr[i]!=larg)
        {
            sec = arr[i];
        }
    }

}

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    cout<<secondlargest(arr,n);
    
    return 0;
}