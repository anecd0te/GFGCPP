#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int minimum;
    for(int i = 0; i<n-1; ++i)
    {
        minimum = i;
        for(int j = i+1; j<n; ++j)
        {
            if(arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    // cout<<"Before Sorting"<<endl;
    // for(auto x: arr)
    // {
    //     cout<<x<<" ";
    // }
    SelectionSort(arr, n);
    // cout<<"After Sorting"<<endl;
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}