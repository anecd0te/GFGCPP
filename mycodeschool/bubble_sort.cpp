#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        bool flag = false;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false)
            return;
    }
}
int main(){
    int arr[] = {3,2,5,4,6,7,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}