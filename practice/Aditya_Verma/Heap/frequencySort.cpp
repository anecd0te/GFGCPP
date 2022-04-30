#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }


    unordered_map<int, int> mp;

    for(int i = 0; i<n; i++)
    {
        mp[arr[i]]++;
    }

    priority_queue<pair<int, int>> maxh;

    for(auto i = mp.begin(); i != mp.end(); i++)
    {
        maxh.push({i->second, i->first});
    }

    while(maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }

    return 0;
}