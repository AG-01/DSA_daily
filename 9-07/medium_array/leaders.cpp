//leader is number when everything on right is smaller than it

#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int>&a)
{
    int n = a.size();
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            maxi = a[i];
            ans.push_back(maxi);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;

}

int main() {
    
    vector<int> a = {7,10,4,10,6,5,2};
    vector<int> ans = leader(a);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

//brute force
/*
for(int i =0;i<n;i++)
{
    leader = true;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            leader = false;
            break;
        }
    }
    if(leader == true) ans.push_back(arr[i]);
}
*/

/*optimal approach


maxi = INT_MIN;
for(int i=n-1;i>=0;i--)
{
    if(arr[i]>maxi)
    {
        maxi = arr[i];
        ans.push_back(maxi);
    }
}
*/