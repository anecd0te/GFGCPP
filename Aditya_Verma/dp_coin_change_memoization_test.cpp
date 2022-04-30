#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum){
    if(sum==0)
        return 1;
    if(sum<0)
        return 0;
    if(n <=0 && sum>=1)
        return 0;
    return count(arr,n-1,sum)+count(arr, n, sum-arr[n-1]);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> dp(vector<int>, -1);
    cout<<" "<<count(arr, n, 4, dp);
    return 0;
}