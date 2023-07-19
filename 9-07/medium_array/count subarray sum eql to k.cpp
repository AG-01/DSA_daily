//Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here

    // int n = arr.size();
    // map<int,int>mpp;
    // int preSum = 0, cnt = 0;
    // for(int i =0;i<n;i++)
    // {
    //     preSum+=arr[i];
    //     int remove = preSum - k;
    //     cnt +=mpp[remove];
    //     mpp[preSum]+=1;
    // }
    // return cnt;
    int n = arr.size();
    int sum = 0;
    int count = 0;
    unordered_map < int, int > m;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k)
            count++;
        if (m.find(sum - k) != m.end())
            count += m[sum - k];
        m[sum]++;
    }
    return count;

}

int main() {
    
    return 0;
}