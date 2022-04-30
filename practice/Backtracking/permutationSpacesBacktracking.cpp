#include<bits/stdc++.h>
using namespace std;

void solve(int start, int end, string &s, set<string> &ans)
{
    if(start == end-1)
    {
        ans.insert(s);
        return;
    }
    solve(start+1, end, s, ans);
    s.insert(start+1, " ");
    solve(start+2, end+1, s, ans);
    s.erase(start+1,1);
}
int main()
{
    string s = "abc";
    set<string> ans;
    solve(0, s.length(), s, ans);
    for(auto x : ans)
    {
        cout<<x<<" ";
    }

    return 0;
}