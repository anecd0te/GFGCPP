#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    int i = low, j = mid+1, k = 0;
    int temp[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(int arr[], int low, int high){
    if(low<high){
        int mid = low + (high-low)/2;
        merge_sort(arr, low,mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main(){
    int arr[] = {3,2,5,4,6,7,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}