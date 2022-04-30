#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    int temp[high-low+1];
    int i=low;
    int j = mid+1;
    int k = 0;
    while(i<mid+1 && j <=high){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i<mid+1){
        temp[k++] = arr[i++];
    }
    while(j<=high){
        temp[k++] = arr[j++];
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-i]
    }
    
}
void mergeSort(int arr[],int low, int high){
    //int low = 0;
    //int high = n-1;
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main(){
    int arr[] = {9,5,3,1,4,2,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}