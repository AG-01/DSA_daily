#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.

      set<vector<int>> st;
    for(int i = 0;i<n;i++)
    {
        set<int> hash;
        for(int j=i+1;j<n;j++)
        {
            int third = -(arr[i]+arr[j]);
            if(hash.find(third)!=hash.end())
            {
                vector<int> temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }

            hash.insert(arr[j]);
          
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    vector<vector<int>> res = triplet(n, arr);
    if (res.size() == 0)
        cout << "No such triplet found";
    else {
        for (int i = 0; i < res.size(); ++i) {
            for (int j = 0; j < 3; ++j) cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}


//optimal approach by 2 pointer



#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.

    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for (int i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0)
            {
                j++;

            }
            else if(sum>0)
            {
                k--;

            }
            else {
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
                
            }
        }
    }
    return ans;

}