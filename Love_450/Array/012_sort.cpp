#include<bits/stdc++.h>
using namespace std;
void dutch(int arr[], int size){
    int low = 0, mid = 0, high = size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid]==1)
            mid++;
        else if(arr[mid]==2){
            swap(arr[mid], arr[high--]);
        }
    }
}
int main(){
    int arr[] = {0,1,1,1,2,0,1,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    dutch(arr, size);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}