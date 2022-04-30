#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i = 1;i<n;i++){
        int hole = i;
        int value = arr[i];
        while(hole>0 && arr[hole-1]>value){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
}
int main(){
    int arr[] = {3,2,5,4,6,7,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}