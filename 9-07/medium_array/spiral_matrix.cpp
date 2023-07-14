#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    vector<int> ans;
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    int dir = 0;
    while(top<=bottom && left<=right)
    {
        if(dir==0)
        {
            for(int i = left;i<=right;i++)
            {
                ans.push_back(MATRIX[top][i]);
            }
            top++;
        }
        else if(dir==1)
        {
            for(int i = top;i<=bottom;i++)
            {
                ans.push_back(MATRIX[i][right]);
            }
            right--;
        }
        else if(dir==2)
        {
            for(int i = right;i>=left;i--)
            {
                ans.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        else if(dir==3)
        {
            for(int i = bottom;i>=top;i--)
            {
                ans.push_back(MATRIX[i][left]);
            }
            left++;
        }
        dir = (dir+1)%4;
    }
    return ans;
}

int main() {

    vector<vector<int>> MATRIX = {{1, 2, 3, 4, 5},
                                  {6, 7, 8, 9, 10},
                                  {11, 12, 13, 14, 15},
                                  {16, 17, 18, 19, 20},
                                  {21, 22, 23, 24, 25}};
    vector<int> ans = spiralMatrix(MATRIX);
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";

    }
    cout<<endl;
    
    return 0;
}