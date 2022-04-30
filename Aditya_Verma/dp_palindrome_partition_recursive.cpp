#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
bool ispalin(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
            }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int palin(string s, int i, int j){
    if(i>=j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(ispalin(s,i,j))
        return 0;
    int mn = INT_MAX;
    for(int k = i;k<j;k++){
        int a = palin(s,i,k);
        int b = palin(s,k+1, j);
        int temp =a+b+1;
        // cout<<a<<" "<<b<<" "<<temp<<endl;
        mn = min(mn, temp);
    }
    return dp[i][j] = mn;
}
int main(){
    string s = "nitik";
    int n = s.size();
    //cout<<n;
    memset(dp, -1, sizeof(dp));
    cout<<palin(s,0,n-1);
    return 0;
}