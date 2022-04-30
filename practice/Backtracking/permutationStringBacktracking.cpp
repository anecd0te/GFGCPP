#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r, set<string> &ans)
{
    if(l==r)
    {
        ans.insert(s);
        return;
    }

    for(int i = l; i<r; i++)
    {
        swap(s[i], s[l]);
        permute(s, l+1, r, ans);
        swap(s[i], s[l]);
    }
}

int main()
{
    string s = "ABC";
    set<string> ans;
    permute(s, 0, s.length(), ans);
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
    return 0;
}