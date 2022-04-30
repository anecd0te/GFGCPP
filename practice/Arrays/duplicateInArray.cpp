#include<bits/stdc++.h>
using namespace std;

int SlowFastPointer(vector<int> arr)
{
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    fast = arr[0];
    while(slow!=fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

//Time Complexity : O(n), Space Complexity : O(n)
int MapDuplicate(vector<int> arr)
{
    map<int, int> mp;
    for(int i = 0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for(auto i = mp.begin(); i!= mp.end(); i++)
    {
        if(i->second>1)
            return i->first;
    }

    return -1;
}
//Time Complexity : O(nlogn) -- sorting the array
int NaiveDuplicate(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    // cout<<NaiveDuplicate(arr)<<endl;
    // cout<<MapDuplicate(arr)<<endl;
    cout<<SlowFastPointer(arr)<<endl;

    return 0;
}