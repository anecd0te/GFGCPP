#include<bits/stdc++.h>
using namespace std;
void subset(vector<int> arr, set<vector<int>> &s, vector<int> &temp)
{
    if(arr.size()==0)
    {
        s.insert(temp);
        return;
    }
    int first = arr[0];
    arr.erase(arr.begin()+0);
    subset(arr, s, temp);
    temp.push_back(first);
    subset(arr, s, temp);
    temp.pop_back();
}
int main()
{
    vector<int> arr = {1,2,2};
    set<vector<int>> s;
    vector<int> temp;
    subset(arr, s, temp);
    for(auto x:s)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}