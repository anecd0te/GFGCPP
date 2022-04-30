#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[], int n){
    int mini = arr[0]; //minimum number till now;
    int max_diff = arr[1]-arr[0];
    for(int i  = 1;i<n;i++){
        if((arr[i]-mini)>max_diff)
            max_diff = arr[i]-mini;
        mini = min(mini, arr[i]);
        
    }
    return max_diff;
}
int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum difference is "<<maxi(arr, n);
    return 0;
}