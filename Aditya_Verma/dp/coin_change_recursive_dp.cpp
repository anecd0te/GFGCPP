#include<bits/stdc++.h>
using namespace std;
int coin_recursive(vector<int> arr, int sum, int n){
    if(sum==0)
        return 1;
    //if sum is less than 0 or number of elements finished but still required sum not achieved.
    if(sum<0 || (n<=0 && sum>=1))
        return 0;
    return coin_recursive(arr, sum-arr[n-1],n) + coin_recursive(arr, sum, n-1);
}
int coin_dp(vector<int> arr, int sum, int n){
    int dp[arr.size()+1][sum+1];
    for(int i = 0;i<=arr.size();i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 1;
        }
    }
    for(int i = 1;i<=arr.size();i++){
        for(int j =1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[arr.size()][sum];
}
int main(){
    vector<int> arr = {3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    // cout<<coin_recursive(arr, sum, n);
    cout<<coin_dp(arr, sum, n);
    return 0;
}