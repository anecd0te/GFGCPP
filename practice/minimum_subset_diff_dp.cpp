#include<bits/stdc++.h>
using namespace std;
int mindiff(int arr[], int n, int sum){
    bool dp[n+1][sum+1];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = false;
            if(j==0)
                dp[i][j] = true;
        }
    }
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];

        }
    }
    int diff = INT_MAX;
    for(int j = sum/2;j>=0;j--){
        if(dp[n][j]==true){
            diff = sum - 2*j;
            break;
        }
    }
    return diff;
}
int main(){
    int arr[] = {3,1,4,2,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+= arr[i];
    }
    cout<<mindiff(arr,n,sum);
}