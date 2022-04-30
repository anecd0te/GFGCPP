#include<bits/stdc++.h>
using namespace std;

void ksort(int arr[], int n, int k, vector<int> &ans)
{
    priority_queue<int, vector<int>, greater<int>> minh;
    // vector<int> ans;
    // cout<<n<<endl;
    for(int i = 0; i<n; ++i)
    {
        minh.push(arr[i]);
        while(minh.size()>k)
        {
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    while(minh.size()>0)
    {
        ans.push_back(minh.top());
        minh.pop();
    }
}

int main()
{
    int n, k;
    vector<int> ans;
    cin>>k>>n;
    int arr[n];
    
    for(int i = 0; i<n; ++i)
    {
        cin>>arr[i];
    }

    ksort(arr, n, k, ans);
    // cout<<ans.size()<<" "<<endl;
    for(auto x: ans)
    {
        cout<<x<<" ";
    }

    return 0;
}