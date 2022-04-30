#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int> a, vector<int> b)
{
    map<int, int> mp;
    vector<int> ans;
    for(int i = 0; i<a.size(); i++)
    {
        mp[a[i]] = i;
    }

    for(int i = 0;i<b.size(); i++)
    {
        if(mp.find(b[i])!=mp.end())
        {
            ans.push_back(b[i]);
        }
    }
    cout<<"Intersection is :";
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}
int main()
{
    vector<int> a = {1, 2, 5, 6, 2, 3, 5, 7, 3 };
    vector<int> b = {2, 4, 5, 6, 8, 9, 4, 6, 5, 4};
    
    set<int> s;
    for(int i = 0;i<a.size();i++)
    {
        s.insert(a[i]);
    }

    for(int i = 0;i<b.size();i++)
    {
        s.insert(b[i]);
    }

    for(auto i = s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    map<int, int> mp;
    for(int i = 0; i<a.size(); i++)
    {
        mp[a[i]] = i;
    }

    for(int i = 0;i<b.size(); i++)
    {
        mp[b[i]] = i;
    }
    cout<<"Using map"<<endl;
    for(auto i = mp.begin(); i!=mp.end();i++)
    {
        cout<<i->first<<" ";
    }

    intersection(a,b);
    return 0;

}