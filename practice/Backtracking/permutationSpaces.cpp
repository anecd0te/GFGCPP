#include<bits/stdc++.h>
using namespace std;
void solve(string s, string currstr, set<string> &ans)
{
    if(s.length()==0)
    {
        ans.insert(currstr);
        return;
    }
    char temp = s[0];
    string currstr1 = currstr;
    string currstr2 = currstr;
    currstr1.push_back(' ');
    currstr1.push_back(temp);
    currstr2.push_back(temp);
    s.erase(s.begin()+0);
    solve(s, currstr1, ans);
    // currstr.pop_back();
    // currstr.pop_back();
    // currstr.push_back(temp);
    solve(s, currstr2, ans);

}
int main()
{
    string s = "abc";
    set <string> ans;
    string currstr;
    currstr.push_back(s[0]);
    s.erase(s.begin()+0);
    solve(s, currstr, ans);
    for(auto x : ans)
    {
        cout<<x<<" ";
    }
    return 0;

}