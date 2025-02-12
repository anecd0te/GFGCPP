#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum, vector<vector<int>> &dp){
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j]=1;
        }
    }
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j]+dp[i][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
    
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;
    vector<vector<int>> dp(n+1, vector<int> (sum+1, -1));
    cout<<" "<<count(arr, n, sum, dp);
    return 0;
}