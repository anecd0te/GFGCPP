#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<int> &ans)
{
    int arrr[arr.size()]={0};
    for(int i = 0; i<arr.size(); i++)
    {
        arrr[arr[i]]++;
    }

    for(int i = 1;i<arr.size(); i++)
    {
        if(arrr[i]>1)
        {
            ans.push_back(i);
        }
        if(arrr[i]==0)
        {
            ans.push_back(i);
        }
    }
}

int main()
{
    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> ans;
    solve(arr, ans);
    cout<<"answer is \n";
    for(auto x : ans)
    {
        cout<<x<<" ";
    }

    return 0;

}