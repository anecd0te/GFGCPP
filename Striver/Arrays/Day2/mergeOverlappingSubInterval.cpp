#include<bits/stdc++.h>
using namespace std;

void merge(vector<vector<int>> interval, vector<vector<int>> &ans)
{
    int n = interval.size();
    sort(interval.begin(), interval.end());
    int start = interval[0][0], end = interval[0][1];
    for(int i = 1; i<n;i++)
    {
        if(interval[i][0]<=end)
        {
            end = max(end, interval[i][1]);
        }
        else{
            ans.push_back({start, end});
            start = interval[i][0];
            end = interval[i][1];
        }
    }
    ans.push_back({start, end});
}
int main()
{
    vector<vector<int>> interval = {{1,3}, {2,6}, {8,10},{15,18}};
    vector<vector<int>> ans;
    merge(interval, ans);
    
    for(auto x : ans)
    {
        for(auto y : x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }
    return 0;
}