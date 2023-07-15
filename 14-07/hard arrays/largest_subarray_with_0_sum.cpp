#include <bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
    vector<int> prefixSum;
    int sum = 0;
    for(int i = 0;i<arr.size();i++)
    {
        sum+=arr[i];
        prefixSum.push_back(sum);
    }
    unordered_map<int,int> m;
    int ans = 0;
    for(int i = 0;i<prefixSum.size();i++)
    {
        if(prefixSum[i]==0)
        {
            ans = max(ans,i+1);
        }
        else if(m.find(prefixSum[i])==m.end())
        {
            m[prefixSum[i]] = i;
        }
        else
        {
            ans = max(ans,i-m[prefixSum[i]]);
        }
    }
    return ans;
	
}

int main() {
    
    return 0;
}