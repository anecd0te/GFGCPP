#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n;
    int arr[n];
    for(int i  = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>k;

    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;
    
    for(int i = 0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }

      for(int i = 0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            minh.pop();
        }
    }

    cout<<k<<"th smallest element is "<<maxh.top()<<endl;
    cout<<k<<"th greatest element is "<<minh.top();
    return 0;
}