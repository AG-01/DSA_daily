//kadane's algorithm
//maximum sum subarray
//time complexity: O(n)
//space complexity: O(1)

//Brute
// maxi = INT_MIN;
// for(int i = 0;i<m;i++)
// {
//     for(int j = 0;j<n;j++)
//     {
//         sum = 0;
//         for(int k = i:j)
//         sum+=arr[k];
//         maxi=max(sum,maxi);
//     }
// }

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    maxi = LONG_MIN;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];

        if(sum>maxi)
        {
            maxi = sum;
        }

        if(sum<0)
        {
            sum = 0;
        }
    }
    return maxi;
}