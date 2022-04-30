#include<bits/stdc++.h>
using namespace std;
//codechef fraz
//Time complexity is O(n+m)
int main()
{
    vector<int> arr1 {2,4,7,9};
    vector<int> arr2 {1, 3, 5, 11, 13};
    vector<int> arr3;
    int i = 0, j = 0, k=0;
    while(i<arr1.size() && j <arr2.size())
    {
        if(arr1[i]<=arr2[j])
        {
            arr3.push_back(arr1[i++]);
        }
        else{
            arr3.push_back(arr2[j++]);
        }
    }

    while(i<arr1.size())
    {
        arr3.push_back(arr1[i++]);
    }

        while(j<arr2.size())
    {
        arr3.push_back(arr2[j++]);
    }

    for(auto x: arr3)
    {
        cout<<x<<" ";
    }

    return 0;
}