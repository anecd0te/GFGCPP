#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr)
{
    int n = arr.size();
    bool swapped;
    for(int i = 0; i<n-1; i++)
    {
        swapped = false;
        for(int j = 0; j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            return;

    }
}

void selection(vector<int> &arr)
{
    int min_idx;
    int n = arr.size();
    for(int i = 0; i<n-1; i++)
    {
        min_idx = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        // swap(arr[min_idx], arr[i]);
        int key = arr[min_idx];
        while(min_idx>i)
        {
            arr[min_idx] = arr[min_idx-1];
            min_idx--;
        }
        arr[i] = key;

    }
}

void insertion(vector<int> &arr)
{
    int n = arr.size();
    int key,j;
    for(int i = 1; i<n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[++j] = key;
    }
}
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    // bubble(arr);
    // selection(arr);
    insertion(arr);
    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}