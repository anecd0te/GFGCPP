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
    //position to be deleted;
    int pos;
    cin>>pos;

    for(int i = pos-1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    for(int i = 0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

}