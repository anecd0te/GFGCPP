#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n, d;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>d;
    int start = 0, end = sizeof(arr)/sizeof(arr[0])-1;
    reverseArray(arr, start, end);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }

    return 0;
}