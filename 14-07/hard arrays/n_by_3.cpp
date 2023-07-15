#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	// Write your code here
    int count1=0;
    int count2=0;
    int element1=0;
    int element2=0;
    int n =v.size();
    for(int i=0;i<n;i++)
    {
        if(element1==v[i])
        {
            count1++;
        }
        else if(element2==v[i])
        {
            count2++;
        }
        else if(count1==0&&element2!=v[i])
        {
            element1=v[i];
            count1++;
        }
        else if(count2==0&&element1!=v[i])
        {
            element2=v[i];
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    vector<int> ans;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==element1)
        {
            c1++;
        }
        else if(v[i]==element2)
        {
            c2++;
        }
    }
    if(c1>n/3)
    {
        ans.push_back(element1);
    }
    if(c2>n/3)
    {
        ans.push_back(element2);
    }
    return ans;
    


}

int main() {
    
    return 0;
}

    

//list approach

vector<int> majorel(vector<int> v)
{
    vector<int> ls;
    map<int,int> m;
    int n = v.size();
    int mini = (int)(n/3)+1;
    for(int i=0;i<n;i++)
    {
        mpp[v[i]]++;
        if(mpp[v[i]]==mini)
        {
            ls.push_back(v[i]);
        }
        if(ls.size()==2)
        {
            return ls;
        }
    }
    sort(ls.begin(),ls.end());
    return ls;
}