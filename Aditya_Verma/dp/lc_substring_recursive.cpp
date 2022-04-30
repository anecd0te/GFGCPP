#include<bits/stdc++.h>
using namespace std;
int solve(string s1, string s2, int m, int n, int ans){
    if(m==0 || n==0){
        return ans;
    }
    if(s1[m-1] == s2[n-1]){
        ans = solve(s1, s2, m-1, n-1, ans+1);
    }
    // else return 0;
    return max(ans, max(solve(s1, s2, m-1, n, 0), solve(s1, s2, m, n-1, 0)));
}
int main(){
    string s1 = "abcde";
    string s2 = "abfce";
    int ans = 0;
    cout<<solve(s1, s2, s1.size(), s2.size(), ans);
    // cout<<ans;
    return 0;
}