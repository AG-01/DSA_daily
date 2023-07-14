class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        for(int i = 0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for ( auto it:mpp)
        {
            if(it.second>(nums.size()/2))
            {
                return it.first;
            }
        }
        return -1;
        
    }
};


//Moore's Voting Algorithm
int majorityElement(vector<int> v)
{
    int count = 0;
    int element = 0;
    for(int i = 0;i<v.size();i++)
    {
        if(count == 0)
        {
            element = v[i];
        }
        if(element == v[i])
        {
            count++;
        }
        else
        {
            count--;
        }

    }
    return element;
    
}