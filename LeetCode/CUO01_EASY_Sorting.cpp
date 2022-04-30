#include<bits/stdc++.h>
using namespace std;
int swap_count(int arr[], int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=(i+1)){
            while(arr[i]!=i+1){
            swap(arr[i], arr[arr[i]-1]);
            count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        cout<<swap_count(arr, n);
    }
    return 0;
}