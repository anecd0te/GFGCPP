#include<bits/stdc++.h>
using namespace std;

int duplicateSimple(vector<int> &arr)
{
    int size = arr.size();
    sort(arr.begin(), arr.end());

    for(int i = 0; i<size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int duplicateBetter(vector<int> &arr)
{
    // sort(arr.begin(), arr.end());
    map<int, int> mp;
    for(int i = 0 ;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }

    for(auto i = mp.begin(); i!=mp.end(); i++)
    {
        if(i->second>1)
            return i->first;
    }
    return -1;
}

int duplicateBest(vector<int> &arr)
{
    int slow = arr[0];
    int fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    fast = arr[0];
    while(slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}
int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    cout<<"Duplicate element is ";
    // cout<<duplicateSimple(arr);
    // cout<<duplicateBetter(arr);
    cout<<duplicateBest(arr);
    

    return 0;
}