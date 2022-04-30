#include<bits/stdc++.h>
using namespace std;
void tar(int arr[], int tar, int n){
    sort(arr, arr+n);
    int start = 0;
    int end = n-1;
    int sum = 0;
    while(start<=end){
        cout<<"start "<<start<<" and end "<<end<<endl;
        sum = arr[start]+arr[end];
        if(sum==tar){
            cout<<start<<" "<<end<<endl;
            break;
        }
        else if(sum>tar)
            end -= 1;
        else start+=1;
    }
}
int main(){
    int arr[] = {3,4,7,11,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    tar(arr, target, n);
    return 0;
}