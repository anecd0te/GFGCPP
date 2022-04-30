#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2)
{
    int i = arr1.size()-1;
    int j = 0;

    while(i>=0 && j < arr2.size())
    {
        if(arr1[i]>arr2[j])
        {
            swap(arr1[i--], arr2[j++]);
        }
        else{
            i--;
        };
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {0, 2, 6, 8, 9};

    merge(arr1, arr2);

    for(auto x: arr1)
    {
        cout<<x<<" ";
    }
    for(auto x : arr2)
    {
        cout<<x<<" ";
    }

    return 0;
}