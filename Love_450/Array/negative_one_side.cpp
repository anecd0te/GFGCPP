#include<bits/stdc++.h>
using namespace std;
void neg(int arr[], int n){
    int low = 0, mid=0;
    while(mid<n){
        if(arr[mid]<0)
            swap(arr[low++], arr[mid++]);
        else mid++;
    }
}
int main(){
    int arr[] = {6, -1, -2, 4, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    neg(arr, size);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}