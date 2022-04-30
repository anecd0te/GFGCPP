#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> ip, int start, int end, vector<int> &temp_op, set<vector<int>> &op)
{
    if(start == end)
    {
        op.insert(temp_op);
        return;
    }
    solve(ip, start+1, end, temp_op, op);
    temp_op.push_back(ip[start]);
    solve(ip, start+1, end, temp_op , op);
    temp_op.pop_back();


}
int main()
{
    vector<int> ip = {1,2,3};
    set<vector<int>> op;
    vector<int> temp_op;
    int end = ip.size();
    solve(ip, 0, end, temp_op, op);
    for(auto x: op)
    {
        for(auto y: x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }

    return 0;
}