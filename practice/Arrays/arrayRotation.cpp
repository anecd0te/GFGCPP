//Time complexity O(n)
//Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>d;

    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin(), arr.end());

    for(auto x: arr)
    {
        cout<<x<<" ";
    }

    return 0;
}