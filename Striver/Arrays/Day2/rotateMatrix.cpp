#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int> (n, 0));
    for(int i = 0; i<matrix.size(); i++)
    {
        for(int j = 0; j<matrix[0].size(); j++)
        {
            ans[j][n-i-1] = matrix[i][j];
        }
    }

    return ans;
}

void better(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for(int i = 0;i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            swap(matrix[j][i], matrix[i][j]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    // vector<vector<int>> rotated = rotate(matrix);
    // cout<<"Rotated Matrix \n";
    // for(int i = 0; i<rotated.size(); i++)
    // {
    //     for(int j = 0; j<rotated[0].size(); j++)
    //     {
    //         cout<<rotated[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    better(matrix);
    cout<<"Rotated Matrix \n";
    for(int i = 0; i<matrix.size(); i++)
    {
        for(int j = 0; j<matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    
}