#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(int numRows)
{
    vector<vector<int>> ans(numRows);
    for(int i = 0; i<numRows; i++)
    {
        ans[i].resize(i+1);
        ans[i][0] = ans[i][i] = 1;

        for(int j = 1; j<i; j++)
        {
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans;
    ans = solve(n);
    for(auto x: ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

}