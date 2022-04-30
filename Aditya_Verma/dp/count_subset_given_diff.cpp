#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int s1){
    int dp[arr.size()+1][s1+1];
    for(int i = 0;i<=arr.size();i++){
        for(int j = 0;j<=s1;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 1;
        }
    }
    for(int i = 1;i<=arr.size();i++){
        for(int j = 1;j<=s1;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[arr.size()][s1];
}
int main(){
    // vector<int> arr = {1, 1, 2, 3};
    vector<int> arr = {1,0};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int diff = 1;
    int s1 = (sum+diff)/2;
    cout<<solve(arr, s1);
    return 0;
}