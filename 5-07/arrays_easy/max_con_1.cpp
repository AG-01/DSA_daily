#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int maxConsecutiveOnes(vector<int>& nums)
    {
        int n = nums.size();
        int count = 0;
        int maxcount = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                count++;
            else
            {
                maxcount = max(maxcount,count);
                count = 0;
            }
        }
        return max(maxcount,count);
    }
};

int main() {
    
    return 0;
}