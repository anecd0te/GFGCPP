#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int sum){
    int dp[arr.size()+1][sum+1];
    for(int i  = 0;i<=arr.size();i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 1;
        }
    }
    for(int i = 1;i<=arr.size();i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[arr.size()][sum];
}
int main(){
    vector<int> arr = {2,3,5,6,8,10};
    int sum = 10;//count number of subsets with sum 10;
    cout<<solve(arr,sum);
    return 0;
}