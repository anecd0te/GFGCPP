#include<bits/stdc++.h>
using namespace std;
int solve(string s1, string s2){
    int dp[s1.size()+1][s2.size()+1];
    for(int i = 0;i<=s1.size();i++){
        for(int j = 0;j<=s2.size();j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    for(int i = 1;i<=s1.size();i++){
        for(int j = 1;j<=s2.size();j++){
            if(s1[i]==s2[j])
                dp[i][j] = 1 + dp[i-1][j-1];
            else {
                dp[i][j] = 0;
            }
        }
    }
    int ans = dp[0][0];
    for(int i = 0;i<=s1.size();i++){
        for(int j = 0;j<=s2.size();j++){
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}
int main(){
    string s1 = "abcf";
    string s2 = "abcdgf";
    cout<<solve(s1, s2);
    return 0;
}