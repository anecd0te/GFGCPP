 #include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{

    int n = arr.size();

    for(int i = 0; i<n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }   
}

void stableSelectionSort(vector<int> &arr)
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

        int key = arr[min_idx];
        while(min_idx>i)
        {
            arr[min_idx] = arr[min_idx-1];
            min_idx--;
        }

        arr[i] = key;
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    // selectionSort(arr);
    stableSelectionSort(arr);

    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}