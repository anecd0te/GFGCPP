#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, k;
    cin>>n>>x>>k;
    int arr[n];
    
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    priority_queue<pair<int, int>> maxh;

    for(int i = 0; i<n; i++)
    {
        maxh.push(make_pair(abs(x-arr[i]), arr[i]));

        if(maxh.size()>k)
            maxh.pop();
    }

    vector<int> ans;
    while(maxh.size()>0)
    {
        pair<int, int> an = maxh.top();
        ans.push_back(an.second);
        maxh.pop();
    }
    sort(ans.begin(), ans.end());
    for(auto x:ans)
        cout<<x<<" ";

    return 0;
}