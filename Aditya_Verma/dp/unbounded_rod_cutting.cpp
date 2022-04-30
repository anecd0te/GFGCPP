#include<bits/stdc++.h>
using namespace std;
int maxiprof(vector<int> len, vector<int> prof, int rlen, int n){
    if(rlen==0 || n==0)
        return 0;
    if(len[n-1]<=rlen)
        return max(prof[n-1]+maxiprof(len, prof, rlen-len[n-1], n), maxiprof(len, prof, rlen, n-1));
    else return maxiprof(len, prof, rlen, n-1);
}

int max_prof(vector<int> len, vector<int> prof, int rlen){
    int size = len.size();
    // int ans=0;
    return maxiprof(len, prof, rlen, size);
    // return ans;
}
int max_prof_tab(vector<int> len, vector<int> prof, int rlen){
    int dp[len.size()+1][rlen+1];
    for(int i = 0;i<=len.size();i++){
        for(int j = 0;j<=rlen;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 0;
        }
    }
    for(int i = 1;i<=len.size();i++){
        for(int j = 1;j<=rlen;j++){
            if(len[i-1]<=j){
                dp[i][j] = max(dp[i-1][j], prof[i-1] + dp[i][j-len[i-1]]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[len.size()][rlen];
}
int main(){
    vector<int> len = {1,2,3,4};
    vector<int> prof = {5,6,8,10};
    int rlen = 4;//rod length
    // cout<<max_prof(len, prof, rlen);
    cout<<max_prof_tab(len, prof, rlen);
    return 0;
}