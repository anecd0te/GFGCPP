#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum, vector<vector<int>> &dp){
    if(n==0)
        return 0;
    if(sum==0)
        dp[n][sum] = 1;
    if(dp[n][sum]!=-1)
        return dp[n][sum];
    if(arr[n-1]<=sum){
        return dp[n][sum] = count(arr, n-1, sum, dp)+count(arr, n, sum-arr[n-1], dp);
    }
    else return dp[n][sum] = count(arr, n-1, sum, dp);
    
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;
    vector<vector<int>> dp(n+1, vector<int> (sum+1, -1));
    cout<<" "<<count(arr, n, sum, dp);
    return 0;
}