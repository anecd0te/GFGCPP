#include<bits/stdc++.h>
using namespace std;

int simple(vector<int> arr, vector<int> &subarr)
{
    int max_sum = 0;
    for(int i = 0;i<arr.size(); i++)
    {
        for(int j = i; j<arr.size();j++)
        {   
            int sum = 0;
            for(int k = i; k<=j;k++)
            {
                sum += arr[k];
            }
            if(sum>max_sum){
                max_sum = sum;
                subarr.clear();
                subarr.push_back(i);
                subarr.push_back(j);
            }
        }
    }
    return max_sum;
}

int better(vector<int> arr, vector<int> &subarr)
{
    int max_sum = INT_MIN;
    for(int i = 0; i<arr.size(); i++)
    {
        int sum = 0;
        for(int j = i; j<arr.size();j++)
        {
            sum += arr[j];
            if(sum>max_sum)
            {
                max_sum = sum;
                subarr.clear();
                subarr.push_back(i);
                subarr.push_back(j);
            }
        }
    }
    return max_sum;
}

int kadane(vector<int> arr, vector<int> &subarr)
{
    int max_sum = arr[0];
    int sum = 0, start = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        sum = max(arr[i], sum+arr[i]);
        if(sum>max_sum)
        {
            max_sum = sum;
            subarr.clear();
            subarr.push_back(start);
            subarr.push_back(i);
            
        }
        if(sum<0)
        {
            sum = 0;
            start = i+1;
        }
    }
    return max_sum;
}
int main()
{
    vector<int> arr {-2, 1, -3, 4, -1, 2, 1, -5, };
    vector<int> subarr;
    // cout<<simple(arr, subarr)<<"\n";
    // cout<<better(arr, subarr)<<"\n";
    cout<<kadane(arr, subarr)<<"\n";
    for(int i = subarr[0];i<=subarr[1];i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}