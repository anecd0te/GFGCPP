#include<bits/stdc++.h>
using namespace std;
int find_b(vector<int> arr, int target){
    int low = 0, high = arr.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target)
            return mid;
        else if(mid>0 && arr[mid-1]==target)
            return mid-1;
        else if(mid<arr.size()-1 && arr[mid+1]==target)
            return mid+1;
        else if(arr[mid]<target)
            low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    vector<int> arr = {5,10,30,20,40};
    int target = 20;
    cout<<find_b(arr, target);
    return 0;
}