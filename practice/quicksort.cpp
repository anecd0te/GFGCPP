#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
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
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}
int main(){
    int arr[] = {10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for(auto x: arr){
        cout<<x<<" ";
        }
    return 0;
}