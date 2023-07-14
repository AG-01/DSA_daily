#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }


    map<int,int> hash;
    for(int i = 0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    //iterate in map
    for(auto i:hash)
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        int number;
        cout<<"Enter the number to be searched: ";
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;

    }
    return 0;
}