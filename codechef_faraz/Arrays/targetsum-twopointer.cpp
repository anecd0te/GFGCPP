#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr {1,2,3,4,7,11};
    int start = 0, end = arr.size()-1, sum = 10;
    bool flag = true;
    while(start < end)
    {
        if( arr[start]+arr[end] == sum)
        {
            cout<<"Found at "<<start<<" and "<<end;
            flag = false;
            break; 
        }
        else if(arr[start] + arr[end] < sum)
        {
            start++;
        }
        else end--;
    }
    if(flag)
    {
        cout<<"Not found";
    }
    return 0;
}