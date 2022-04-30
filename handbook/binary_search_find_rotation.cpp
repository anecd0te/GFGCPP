#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int n){
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[high])
            low = mid+1;
        else{
            ans = mid;
            high = mid-1;
        }
    }
    return arr[ans];
}
int main(){
    // 17,2,5,6,7,9,11,15
    int arr[] = {27,2,9,11,15,17,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binary(arr, n)<<" Found by my function"<<endl;
    // cout<<binary_search(arr, arr+n, 6)<<" found by inbuilt func"<<endl;
    // cout<<lower_bound(arr, arr+n, 6)-arr<<" Found by lower bound"<<endl;
    return 0;
}
