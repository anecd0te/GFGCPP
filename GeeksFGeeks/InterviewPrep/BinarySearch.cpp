#include<bits/stdc++.h>
using namespace std;

int binaryRecursive(vector<int> &arr, int start, int stop, int x)
{
    while(start <= stop)
    {
        int mid = start + (stop-start)/2;
        
        if(arr[mid] == x)
        {
            return mid;
        }
        if(arr[mid] < x)
        {
            return binaryRecursive(arr, mid+1, stop, x);
        }
        return binaryRecursive(arr, start, mid-1, x);
    }

    return -1;
}

int binaryIterative(vector<int> &arr, int start, int end, int x)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            start = mid + 1;
        }
        else end = mid-1;
    }
    return -1;
    
}
int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int size = arr.size();

    // cout<<binaryRecursive(arr, 0, size-1, x);
    cout<<binaryIterative(arr, 0, size-1, x);

    return 0;
}