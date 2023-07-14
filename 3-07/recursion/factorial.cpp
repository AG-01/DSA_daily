//factorial of numbers using recursion

class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> v;
        if(N==0) return v;
        long long fact=1;
        for(long long i=1;i<=N;i++)
        {
            fact*=i;
            v.push_back(fact);
        }
        return v;
    }
};