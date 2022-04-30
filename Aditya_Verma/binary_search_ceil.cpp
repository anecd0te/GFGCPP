#include<bits/stdc++.h>
using namespace std;
int bin_s(vector<int> arr, int target){
    int low = 0, high = arr.size()-1, res = INT_MIN;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target)
            return mid;
        if(arr[mid]>target){
            // res = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    // if (res == INT_MIN)
    //     return -1;
    // else return res;
    return arr[high];
}
int main(){
    vector<int> arr = {1,2,8,10,11,12,19};
    int target = 5;
    cout<<bin_s(arr, target);
    return 0;
}