#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr { 4,3,2,10,12,1,5,6};
    int key, j;
    for(int i = 1;i<arr.size();i++)
    {
        key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}