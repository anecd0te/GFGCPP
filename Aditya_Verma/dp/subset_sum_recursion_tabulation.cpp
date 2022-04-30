#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> arr, int sum){
    int m = arr.size();
    int n = sum;
    int dp[m+1][sum+1];
    for(int i = 0;i<=m;i++){
        for(int j= 0;j<=n;j++){
            if(i==0)
                dp[i][j]=0;
            if(j==0)
                dp[i][j]=1;
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(arr[i-1]<=j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i-1]]);
                // dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[m][n];

}
int main(){
    vector<int> arr = {2,3,7,8,10};
    int sum = 6;
    cout<<solve(arr, sum);
}