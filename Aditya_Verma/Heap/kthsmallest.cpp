#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> maxh;
    for(int i = l;i<=r;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
            maxh.pop();
    }
    return maxh.top();
}

int main()
{
    int n, k;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<kthsmallest(arr, 0, n-1, k);
    return 0;
}