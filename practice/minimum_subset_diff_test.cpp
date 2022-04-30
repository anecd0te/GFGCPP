#include<bits/stdc++.h>
using namespace std;
vector<bool> subset(int arr[], int n, int sum){
    bool dp[n+1][sum+1];
    vector<bool> ans;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=sum;j++){
            if(i==0)
                dp[i][j] = false;
            if(j==0)
                dp[i][j] = true;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=sum;j++){
            if(arr[i-1]<=j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else dp[i][j] = dp[i-1][j];
        }
    }
    for(int j = 0;j<=sum/2;j++){
        ans.push_back(dp[n][j]);
        }
    return ans;
}
int minimum(int arr[], int n){
    if(n==0)
        return 0;
    int range = accumulate(arr, arr+n, 0);
    //cout<<"range is "<<range<<endl;
    vector<bool> v = subset(arr, n, range);
    int mini = INT_MAX;
    for(int i = 0;i<v.size();i++){
        //cout<<"value of "<<i<<" is "<<v[i]<<" "<<endl;
        if(v[i]==true)
            mini = min(mini, range-2*i);
    }
    return mini;
}
int main(){
    int arr[] = {1,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<"N is "<<n<<endl;
    cout<<minimum(arr,n);
    return 0;
}