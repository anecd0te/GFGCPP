#include<bits/stdc++.h>
using namespace std;
void naiveSum(vector<int> arr)
{
    int n = arr.size();
    int best_sum = arr[0];
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i; k<j;k++)
            {
                sum += arr[k];
            }
            best_sum = max(sum, best_sum);
        }
    }
    cout<<best_sum;
}
void betterSum(vector<int> arr)
{
    int n = arr.size();
    int best_sum = arr[0];
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
            sum += arr[j];
            best_sum = max(sum, best_sum);
        }
        
    }
    cout<<best_sum;
}

void bestSum(vector<int> arr)
{
    int sum = 0, best_sum = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        sum = max(arr[i], sum+arr[i]);
        best_sum = max(best_sum, sum);
    }
    cout<<best_sum;
}
int main()
{
    vector<int> arr = {-1, 2, 4, -3, 5, 2, -5, 2 };
    // naiveSum(arr);
    // betterSum(arr);
    bestSum(arr);
}
