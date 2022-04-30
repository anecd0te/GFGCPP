#include<bits/stdc++.h>
using namespace std;
void selection(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int smallest = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallest])
                smallest = j;
        }
        swap(arr[i], arr[smallest]);
    }
}
int main(){
    int arr[] = {10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection(arr, n);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}