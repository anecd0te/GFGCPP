#include<bits/stdc++.h>
using namespace std;
//Simple recursion + memoization
int solve_memoization(vector<int> w, vector<int> val, int n, int wt, vector<vector<int>> &dp){
    if(n==0 || wt==0)
        return dp[0][0]=0;
    if(dp[n][wt]!=-1){
        cout<<"coming from "<<n<<" "<<wt<<endl;
        return dp[n][wt];
    }
    else if(w[n-1]<=wt){
        return dp[n][wt] = max(val[n-1]+ solve_memoization(w, val, n-1, wt-w[n-1], dp), solve_memoization(w, val, n-1, wt, dp));
    }
    else return dp[n][wt] = solve_memoization(w, val, n-1, wt, dp);
}
//Simple Recursion top down approach
int solve(vector<int> w, vector<int> val, int n, int wt){
    if(n==0 || wt==0)
        return 0;
    else if(w[n-1]<=wt){
        return max(val[n-1]+ solve(w, val, n-1, wt-w[n-1]), solve(w, val, n-1, wt));
    }
    else return solve(w, val, n-1, wt);
}
int main(){
    vector<int> w = {1,3,4,5};
    vector<int> val = {1,4,5,7};
    int wt = 7;
    int n = w.size();
    vector<vector<int>> dp(w.size()+1,vector<int>(wt+1,-1));
    // int dp[4+1][7+1];
    // memset(dp, -1, sizeof(dp));
    // cout<<dp[4][4]<<endl;
    // cout<<solve(w,val,n, wt, dp)<<endl;
    cout<<solve_memoization(w,val,n, wt, dp)<<endl;
    return 0;
}