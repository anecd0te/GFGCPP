#include<bits/stdc++.h>
using namespace std;

void rearrangepointer(vector<int> &arr)
{
    int low = 0, high = arr.size()-1;
    while(low<=high)
    {
        if(arr[low]<0 && arr[high]<0)
        {
            low++;
        }
        else if(arr[low]<0 && arr[high]>0)
        {
            low++;
            high--;
        }
        else if(arr[low]>0 && arr[high]<0)
        {
            swap(arr[low++], arr[high--]);
        }
        else if(arr[low]>0 && arr[high]>0)
        {
            high--;
        }
    }
}

//Time complexity O(n)
void rearrange(vector<int> &arr)
{
    int j = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i], arr[j]);
            
            j++;
        }
        
    }
}

int main()
{
    vector<int> arr = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };

    // rearrange(arr);
    cout<<"Original Array \n";
    for(auto x : arr)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    rearrangepointer(arr);

    for(auto x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}