#include<bits/stdc++.h>
using namespace std;

void mergeTwoSimple(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> arr3(arr1.size()+arr2.size());
    int k = 0;
    for(int i = 0; i<arr1.size();i++)
    {
        arr3[k++] = arr1[i];
    }

    for(int i = 0; i<arr2.size(); i++)
    {
        arr3[k++] = arr2[i];
    }

    sort(arr3.begin(), arr3.end());

    k = 0;
    for(int i = 0; i<arr1.size();i++)
    {
        arr1[i] = arr3[k++];
    }

    for(int i = 0; i<arr2.size(); i++)
    {
        arr2[i] = arr3[k++];
    }
}
void mergeTwoSortedBetter(vector<int> &arr1, vector<int> &arr2)
{
    for(int i = 0;i<arr1.size();i++)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i], arr2[0]);
        }

        int first = arr2[0],k;

        for(k = 1;k<arr2.size() && arr2[k]<first; k++)
        {
            arr2[k-1] = arr2[k];
        }
        arr2[k-1] = first;
    }
}

void gapMethod(vector<int> &arr1, vector<int> &arr2)
{
    int size1 = arr1.size();
    int size2 = arr2.size();
    int gap = ceil((float)(size1 + size2)/2);
    while(gap > 0)
    {
        cout<<gap<<"\n";
        int i = 0, j = gap;
        while(j<(size1+size2))
        {
            if(j<size1 && arr1[i] > arr1[j])
            {
                swap(arr1[i], arr1[j]);
            }
            else if(i < size1 && j>= size2 && arr1[i] > arr2[j-size1])
            {
                swap(arr1[i], arr2[j - size1]);
            }
            else if(i>= size1 && j>= size1 && arr2[i - size1] > arr2[j-size1])
            {
                swap(arr2[i-size1], arr2[j-size1]);
            }
            i++, j++;
        }
        if(gap==1)
        {
            gap = 0;
        }
        else{
            gap = ceil((float)gap/2);
        }
        
    } 
}
int main()
{
    vector<int> arr1 = {1,2,3,8,10};
    vector<int> arr2 = {4,7,9};

    // mergeTwoSimple(arr1, arr2);
    // mergeTwoSortedBetter(arr1, arr2);
    gapMethod(arr1, arr2);

    for(auto x : arr1)
    {
        cout<<x<<" ";
    }

    cout<<"\n";

    for(auto x : arr2)
    {
        cout<<x<<" ";
    }

    return 0;
}