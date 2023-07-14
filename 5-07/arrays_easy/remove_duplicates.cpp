#include <bits/stdc++.h>
using namespace std;
void remove(int arr[], int n)
{
int i = 0;
for (int j = 1; j < n; j++)
{
if (arr[j] != arr[i])
{
    arr[i+1] = arr[j];
    i++   
}
}
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    cout<<remove(arr,n);

    return 0;
}


/*
set<int> st;
for(int i=0;i<n;i++)
{
    st.insert(arr[i]);
}

int index = 0;
for(auto i:st)
{
    arr[index++] = i;

}
return index;
*/