#include <bits/stdc++.h>
using namespace std;


void insertion(int arr[], int 1,int n)
{
    if(i==n)return;
    int j=i;
    while(j>0&&arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertion(arr,i+1,n);
}
int main() {

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion(arr,0,n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}