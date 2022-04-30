#include<bits/stdc++.h>
using namespace std;
// vector<char> print(string s1, string s2, int m, int n){
string print(string s1, string s2, int m, int n){
    int dp[m+1][n+1];
    for(int i = 0; i<=m;i++){
        for(int j = 0;j<=n;j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    // vector<char>v;
    string s = "";
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                // cout<<i<<" "<<j<<endl;
                // v.push_back(s1[i-1]);
                // s += s1[i-1];
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i = m,j=n;
    while(i>0 && j >0){
        if(s1[i-1]==s2[j-1]){
            //s.push_back(s1[i-1]);
            s.insert(s.begin()+0, s1[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])
                i--;
            else j--;
        }
    }
    //int k = s.size();
    //reverse(s.begin(),s.end());
    return s;
    
}
int main(){
    // string s1 = "abcf";
    // string s2 = "abcdef";
    string s2 = "delete";
    string s1 = "leet";
    int m = s1.size();
    int n = s2.size();
    // vector<char> ans;
    string ans;
    ans = print(s1,s2,m,n);
    cout<<ans;
    // for(auto x:ans)
    //     cout<<x<<" ";
    return 0;
}