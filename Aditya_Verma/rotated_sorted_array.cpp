#include<bits/stdc++.h>
using namespace std;
int bin(vector<int> arr){
    int low = 0, high = arr.size()-1;
    int ans = 0;
    while(low<high && arr[low]>arr[high]){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[high]){
            low = mid+1;
        }
        else {
            high = mid;
        }
    }
    // return arr[low];
    return low;
}
int main(){
    // vector<int> arr = {4,5,6,7,0,1,2};
    vector<int> arr = {15, 18, 2, 3, 6, 12};
    cout<<bin(arr);
}