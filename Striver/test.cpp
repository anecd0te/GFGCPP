#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, vector<int> &subarray)
{
    int max_sum = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        for(int j = i+1; j<arr.size(); j++)
        {
            int sum = 0;
            for(int k = i; k<=j; k++)
            {
                sum+= arr[k];
            }
            if(sum>max_sum)
            {
                subarray.clear();
                max_sum = sum;
                subarray.push_back(i);
                subarray.push_back(j);
            }
        }
    }
    return max_sum;
}

int better(vector<int> arr, vector<int> &subarray)
{
    int max_sum = INT_MIN;
    for(int i = 0; i<arr.size(); i++)
    {
        int sum = 0;
        for(int j = i; j<arr.size(); j++)
        {
            sum += arr[j];
            if(sum >  max_sum)
            {
                max_sum = sum;
                subarray.clear();
                subarray.push_back(i);
                subarray.push_back(j);
            }
        }
    }
    return max_sum;
}


int best(vector<int> arr, vector<int> &subarray)
{
    int max_sum = arr[0];
    int sum = 0, start = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        sum = max(arr[i], sum+arr[i]);
        if(sum>max_sum)
        {
            max_sum = sum;
            subarray.clear();
            subarray.push_back(start);
            subarray.push_back(i);
        }
        if(sum<0)
        {
            start = i+1;
            sum = 0;
        }

        if(sum<0)
        {
            start = i+1;
            sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> subarray;
    // cout<<solve(arr, subarray);
    // cout<<better(arr, subarray);
    cout<<best(arr, subarray);
    for(auto x : subarray)
    {
        cout<<x<<" ";
    }
    return 0;
}
