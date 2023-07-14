#include <bits/stdc++.h>
using namespace std;
void bubble( int arr[], int n)
{
     if (n==1) return;
     for(int i=0;i<n;i++)
     {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
     }
        bubble(arr,n-1);
}


int main() {

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    
    return 0;
}