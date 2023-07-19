//ou are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

#include <bits/stdc++.h>
using namespace std;
vector<int> findMissing(vector<int> a)
{
    int n = a.size();
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    int repeating = 0, missing = 0;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            missing = i;
        }
        if (hash[i] == 2)
        {
            repeating = i;
        }
    }
    return {repeating, missing};
    
}

int main() {
    
    return 0;
}