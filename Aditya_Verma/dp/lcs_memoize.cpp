#include<bits/stdc++.h>
using namespace std;
int solve(string s1, string s2, int m, int n, vector<vector<int>> &dp){
    if(dp[m][n]!=-1){
        // cout<<m<<" "<<n;
        return dp[m][n];
    }
    if(m==0 || n==0)
        return dp[m][n] = 0;
    if(s1[m-1]==s2[n-1])
        return dp[m][n] = 1 + solve(s1, s2, m-1, n-1, dp);
    else return max(solve(s1, s2, m-1, n, dp), solve(s1, s2, m, n-1, dp));
}
int main(){
    string s1 = "abcdgh";
    string s2 = "abedfhr";
    int m = s1.size();
    int n = s2.size();
    vector<vector<int>> dp(m+1, vector<int> ((n+1),-1));
    // int dp[m+1][n+1];
    cout<<solve(s1, s2, m, n, dp);
    return 0;
}