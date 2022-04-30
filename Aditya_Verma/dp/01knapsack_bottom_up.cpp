#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> w, vector<int> val, int wt){
    int dp[w.size()+1][wt+1];
    for(int i = 0;i<=w.size();i++){
        for(int j = 0;j<=wt;j++){
            if(j==0 || i==0)
                dp[i][j]=0;
        }
    }
    for(int i = 1;i<=w.size();i++){
        for(int j = 1;j<=wt;j++){
            if(w[i-1]<=j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-w[i-1]], dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[w.size()][wt];
}
int main(){
    vector<int> w = {1,3,4,5};
    vector<int> val = {1,4,5,7};
    int wt = 7;
    int n = w.size();
    cout<<solve(w,val, wt);
    return 0;
}