#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> arr, int sum){
    bool dp[arr.size()+1][sum+1];
    for(int i = 0;i<=arr.size();i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = false;
            if(j==0)
                dp[i][j] = true;
        }
    }
    for(int i = 1;i<=arr.size();i++){
        for(int j  =1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[arr.size()][sum];
}
int main(){
    vector<int> arr = {1,5,11,5};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if(sum&1)
        cout<<"Not possible"<<endl;
    else solve(arr, sum/2)?cout<<"Possible"<<endl:cout<<"Not Possible"<<endl;
}