//longest subarray with sum k (positive numbers)
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int longestSubarray(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int sum = 0;
        int maxcount = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k)
                maxcount = i+1;
            if(m.find(sum)==m.end())
                m.insert({sum,i});
            if(m.find(sum-k)!=m.end())
                maxcount = max(maxcount,i-m[sum-k]);
        }
        return maxcount;
    }
};

int main() {
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter sum: ";
    cin>>k;
    vector<int> nums(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
        cin>>nums[i];
    solution s;
    cout<<s.longestSubarray(nums,k); 
    return 0;
}





//brute force pseudo code
/*

len = 0;
for(int i = 0;i<n<i++)
{
    for(int j = i;i<n;j++)
    {
        int s=0;
        for(k=i->j)
        {
            s+=a[k]
            if(s==k) len = max(len,j-i+1)
        }
    }
    print(len);
}
*/

//optimal
//using hashing

/*
    `int LongSub(vector<int> a, long long k){
        map<long long,int> preSumMap;
        long long sum = 0;
        int maxlen = 0;
        for(int i = 0;i<a.size();i++)
        {
            sum+=a[i];
            if(sum ==k)
            {
                maxlen = max(maxlen,i+1)
            }
            int rem = sum-k;
            if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen = max(maxlen,len);
            }
            preSumMap[sum] = i;
        }
        return maxlen;
        
    }

*/