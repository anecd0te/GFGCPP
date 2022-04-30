#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x, pos;
    cin>>x>>pos;
    
    n++;

    int *arr1 = new int[n];

    int i;
    for(i = n-1; i>=pos;i--)
    {
        arr1[i] = arr[i-1];
    }
    arr1[i--] = x;

    for(;i>=0;i--)
    {
        arr1[i] = arr[i];
    }

    delete []arr;
    arr = arr1;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}