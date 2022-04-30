#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &arr, int x)
{
    if(arr.size()==0 || arr[arr.size()-1]<=x)
    {
        arr.push_back(x);
        return;
    }
    int temp = arr[arr.size()-1];
    arr.pop_back();
    insert(arr, x);
    arr.push_back(temp);
}
void Sort(vector<int> &arr, int n)
{
    if(n==1)
        return;
    int temp = arr[n-1];
    arr.pop_back();
    Sort(arr, n-1);
    insert(arr, temp);
}
int main()
{
    vector<int> arr = {1,5,4,2,3,8,7,9};
    Sort(arr, arr.size());

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}