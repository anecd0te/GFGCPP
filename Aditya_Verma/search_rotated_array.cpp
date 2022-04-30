#include<bits/stdc++.h>
using namespace std;
int rotated(vector<int> arr, int target){
    int n = arr.size();
    int low = 0, high = n-1, rot;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[high])
            low = mid+1;
        else{
            high = mid;
        }
    } 
    rot = low;
    low = 0, high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int actual_mid = (mid+rot)%n;
        if(arr[actual_mid]==target)
            return actual_mid;
        else if(arr[actual_mid]>target){
            high = mid-1;
        }
        else low = mid+1;
    }
    return -1;
}
int main(){
    //                  0 1  2  3  4 5 6 7    
    vector<int> arr = {11,12,15,18,2,5,6,8};
    //                  2 5 6 8 11 12 15 18
    int rot = rotated(arr, 15);
    cout<<rot;
    return 0;
}