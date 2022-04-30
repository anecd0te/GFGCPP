#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
                arr[j+1] = arr[j];
                j--;
        }
        arr[++j] = key; 
    }
}
int main(){
    int arr[] = {9,5,4,3,6,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr, n);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}