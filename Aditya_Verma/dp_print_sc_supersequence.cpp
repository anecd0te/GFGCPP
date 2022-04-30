#include<bits/stdc++.h>
using namespace std;
string sub(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    for(int i = 0; i<=m;i++){
        for(int j = 0;j<=n;j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int lcs = dp[m][n];
    int i = m,j=n;
    string ans = "";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans.insert(ans.begin()+0, s1[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                ans.insert(ans.begin()+0, s1[i-1]);
                i--;
            }
            else{
                ans.insert(ans.begin()+0, s2[j-1]);
                j--;
            }
        }
    }
    while(i>0){
        ans.insert(ans.begin()+0, s1[i-1]);
        i--;
    }
    while(j>0){
        ans.insert(ans.begin()+0, s2[j-1]);
        j--;
    }
    return ans;
}
int main(){
    string s1 = "acbcf";
    string s2 = "abcdaf";
    int m = s1.size();
    int n = s2.size();
    cout<<sub(s1,s2,m,n);
    return 0;
}