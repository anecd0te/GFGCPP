#include<bits/stdc++.h>
using namespace std;
void solve(string s1, string s2){
    int dp[s1.size()+1][s2.size()+1];
    for(int i = 0;i<=s1.size();i++){
        for(int j = 0;j<=s2.size();j++){
            if(i==0 ||j==0)
                dp[i][j] = 0;
        }
    }
    for(int i = 1;i<=s1.size();i++){
        for(int j = 1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    // cout<<dp[s1.size()][s2.size()];
    string ans = "";
    int i = s1.size();
    int j = s2.size();
    // cout<<i<<" "<<j<<endl;
    cout<<s1<<" "<<s2<<endl;
    while(i>0 && j>0){
        cout<<"i is "<<i<<"and j is "<<j<<endl;
        cout<<s1[i-1]<<" "<<s2[j-1]<<endl;
        if(s1[i-1]==s2[j-1]){
            // cout<<s1[i]<<"yes both are same"<<s2[j]<<endl;
            ans.push_back(s1[i-1]);
            // cout<<ans<<" ";
            i--;
            j--;
        }
        else{ if(dp[i-1][j]>dp[i][j-1])
            i--;
        else j--;
        }
    }
    cout<<dp[1][1]<<endl;
    reverse(ans.begin(), ans.end());
    cout<<ans;

}
int main(){
    string s2 = "abcdaf";
    string s1 = "acbcf";
    solve(s1, s2);
    return 0;
}