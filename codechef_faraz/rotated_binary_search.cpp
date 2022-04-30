#include<bits/stdc++.h>
using namespace std;
int bin_s(vector<int> arr, int target){
    int start = 0, end = arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>arr[0]){//we are in region 1
            if(target<arr[0])
                start = mid+1;
            else if(target<arr[mid])
                end = mid-1;
            else start = mid+1;
        }
        else{
            if(target>arr[0])
                end = mid-1;
            else if(target>arr[mid])
                start = mid+1;
            else end = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<bin_s(arr, target);
    return 0;
}