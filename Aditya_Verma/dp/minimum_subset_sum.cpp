#include<bits/stdc++.h>
using namespace std;
int subset(vector<int> arr, int sum){
    int dp[arr.size()+1][sum+1];
    for(int i = 0;i<=arr.size();i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = 0;
            if(j==0)
                dp[i][j] = 1;
        }
    }
    for(int i = 1;i<=arr.size();i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[arr.size()][sum];
}
int solve(vector<int> arr){
    int range = accumulate(arr.begin(), arr.end(),0);
    int mx = INT_MAX, ans;
    for(int i = 0;i<=range/2;i++){
        ans = subset(arr,i);
        // cout<<"Subset possible for "<<i<<" and ans is "<<ans<<endl;
        if(ans){
            // cout<<"subset sum is "<<range-2*i<<endl;
            mx = min(mx, (range-2*i));
        }
            
    }
    // cout<<"mx is "<<mx<<endl;
    return mx;
}
int main(){
    // vector<int> arr = {1,6,11,5};
    vector<int> arr = {1,3,7};
    cout<<solve(arr)<<endl;
    return 0;
}