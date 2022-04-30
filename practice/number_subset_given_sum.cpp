#include<bits/stdc++.h>
using namespace std;
int num(int arr[], int n, int diff){
    int summ = accumulate(arr, arr+n, 0);
    int sum = (summ+diff)/2;
    int dp[n+1][sum+1];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = false;
            if(j==0)
                dp[i][j] = true;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1]<=j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main(){
    int arr[] = {1,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int diff = 1;
    cout<<num(arr, size, diff);
    return 0;
}