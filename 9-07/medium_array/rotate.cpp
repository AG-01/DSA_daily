#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(m,vector<int>(n,0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            ans[j][n-i-1] = mat[i][j];
        }
    }
    mat = ans;

	
}

int main() {
    
    return 0;
}

//brute
/*
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(m,vector<int>(n,0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            ans[j][n-i-1] = mat[i][j];
        }
    }
    mat = ans;
*/
//better
/*
    int n = mat.size();
    int m = mat[0].size();
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<m;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i = 0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }
*/
