#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // Write your code here.
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}

//brute
/*
mark row(i)
{
    for(int j = 0;j<m;j++)
    {
        if(arr[i][j]!=0)
            arr[i][j] = -1;
    }
}
mark col(j)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i][j]!=0)
            arr[i][j] = -1;
    }
}

for(int i = 0;i<n;i++)
{
    for(int j = 0;j<m;j++)
    {
        if(arr[i][j]==0)
        {
            mark row(i);
            mark col(j);
        }
    }
}

for(int i = 0;i<n;i++)
{
    for(int j = 0;j<m;j++)
    {
        if(arr[i][j]==-1)
        {
            arr[i][j] = 0;
        }
    }
}


*/

//better
/*
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // Write your code here.
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
*/

//optimal
/*
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // Write your code here.
    bool row = false;
    bool col = false;
    for(int i = 0;i<n;i++)
    {
        if(matrix[i][0]==0)
        {
            col = true;
            break;
        }
    }
    for(int i = 0;i<m;i++)
    {
        if(matrix[0][i]==0)
        {
            row = true;
            break;
        }
    }
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<m;j++)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(row)
    {
        for(int i = 0;i<m;i++)
        {
            matrix[0][i] = 0;
        }
    }
    if(col)
    {
        for(int i = 0;i<n;i++)
        {
            matrix[i][0] = 0;
        }
    }
    return matrix;
}
*/