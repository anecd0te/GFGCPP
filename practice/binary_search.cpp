#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int low, int high, int x){
    low = 0;
    int n = high;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]<x)
            low = mid+1;
        else high = mid;

    }
    cout<<low;
    if(low<=n && arr[low] == x)
        return low;
    else return -1;
}
// int binary_search(int arr[], int low, int high, int x){
//     while(low<=high){
//         int mid = low + (high-low)/2;
//         if(arr[mid]==x)
//             return mid;
//         else if(arr[mid]<x){
//             low = mid+1;
//         }
//         else if(arr[mid]>x){
//             high = mid-1;
//         }
//     }
//     return -1;
// }
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    int ans = binary_search(arr, 0, n-1, x);
    (ans==-1)?cout<<"Not found":cout<<"Found";
    return 0; 
}