#include<bits/stdc++.h>
using namespace std;
void counting(int arr[], int n, int mn, int mx){
    int range = mx-mn+1;
    int arr1[range] = {0};
    for(int i = 0;i<n;i++){
        arr1[arr[i]-mn]++;
    }
    for(int i = 1;i<range;i++){
        arr1[i]+=arr1[i-1];
    }
    int arr2[n];
    for(int i = n-1;i>=0;i--){
        int val = arr[i];
        int pos = arr1[val-mn]-1;
        arr2[pos]=val;
        arr1[val-mn]--;
    }
    for(int i = 0;i<n;i++){
        arr[i] = arr2[i];
    }
}
int main(){
    int arr[] = {1,2,5,2,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    counting(arr, n, mn, mx);
    for(auto x:arr)
        cout<<x<<" ";

}