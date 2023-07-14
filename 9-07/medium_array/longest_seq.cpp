#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    //better solution
    if(a.size()==0) return 0;
    sort(a.begin(),a.end());
    int n = a.size();
    int last = INT_MIN;
    int count = 0;
    int longest = 1;
    for(int i = 0;i<n;i++)
    {
        if(a[i]-1 == last)
        {
            count++;
            last = a[i];
        }
        else if(last!=a[i])
        {
            count = 1;
            last = a[i];
        }
        longest=max(longest,count);

    }
    return longest;
}

int main() {
    

    vector<int> a = {1, 3, 2, 4, 5, 7, 6, 8,11,13,12,99};
    cout << longestSuccessiveElements(a) << endl;

    
    return 0;
}