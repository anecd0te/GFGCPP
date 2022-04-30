#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool flag;
    for(int i = 0; i<n-1; i++)
    {
        flag = false;
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    bubbleSort(arr);

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}