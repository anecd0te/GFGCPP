#include<bits/stdc++.h>
using namespace std;

void simple(vector<int> &tempArr)
{
    reverse(tempArr.begin(), tempArr.end());
}

void iteratorMethod(vector<int> &tempArr)
{
    vector<int> temp(tempArr.rbegin(), tempArr.rend());
    tempArr.swap(temp);
}

void swapFunction(vector<int> &tempArr)
{
    for(auto start = tempArr.begin()+3, end = prev(tempArr.end()); start<end; ++start,--end)
    {
        swap(*start, *end);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> tempArr = arr;
    // simple(tempArr);
    // iteratorMethod(tempArr);
    swapFunction(tempArr);
    for(auto x : tempArr)
    {
        cout<<x<<" ";
    }
}