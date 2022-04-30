#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}
int main(){
    int arr[] = {3,2,5,4,6,7,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}