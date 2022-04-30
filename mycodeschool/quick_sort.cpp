#include<bits/stdc++.h>
using namespace std;
int paritition(int arr[], int low, int high){
    int pivot = high;
    int pIndex = low;
    for(int i = low;i<high;i++){
        if(arr[i]<arr[pivot]){
            swap(arr[i], arr[pIndex++]);
        }
    }
    swap(arr[pIndex], arr[pivot]);
    return pIndex;
    }
void quick_sort(int arr[], int low, int high){
    if(low<high){
        int p = paritition(arr, low, high);
        quick_sort(arr, low, p-1);
        quick_sort(arr, p+1, high);
    }
}
int main(){
    int arr[] = {3,2,5,4,6,7,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}