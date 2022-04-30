#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> arr, int k)
{
    if(arr.size()==0)
        return false;
    if(arr[0]==k)
        return true;
    arr.erase(arr.begin()+0);
    return find(arr, k);
}
int main()
{
    vector<int> arr = {4,5,6,1,2,3,9,0};
    int k = 12;
    cout<<find(arr, k);

    return 0;
}