#include<bits/stdc++.h>
using namespace std;
int palin(string s1, int n){
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    int dp[n+1][n+1];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=n;j++){
            if(i==0|| j==0)
                dp[i][j]=0;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int i = n,j=n;
    string ans = "";
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans.insert(ans.begin()+0, s1[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else j--;
        }
    }
    cout<<ans<<endl;
    return dp[n][n];
}
int main(){
    string a = "agbcba";
    int n = a.size();
    int ans = palin(a, n);
    cout<<n-ans;
    return 0;

}