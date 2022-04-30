#include<bits/stdc++.h>
using namespace std;
//static int t[5][51];
int knapsack(int val[], int wt[],int w, int n){
    int dp[n+1][w+1];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=w;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=w;j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];

}
int main(){
    int w = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    // memset(t, -1, sizeof(t));
    //cout<<t[1][1]<<endl;
    cout<<knapsack(val, wt, w, n);

    return 0;
}