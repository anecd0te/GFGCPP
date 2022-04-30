#include<bits/stdc++.h>
using namespace std;
int bin(int arr[], int low, int high){
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>high){
            low = mid+1;
        }
        else high = mid;
    }
    return low;
}
int main(){
    int arr[] = {4,5,6,7,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<bin(arr, 0,n-1);
    return 0;
}