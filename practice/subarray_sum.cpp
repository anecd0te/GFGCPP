#include<bits/stdc++.h>
using namespace std;
int sub_sum(int arr[], int n){
    int best = 0, sum = 0;
    for(int i = 0;i<n;i++){
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    return best;
}
int subarr_sum(int arr[], int n){
    int best = 0;
    for(int i = 0;i<n;i++){
        int sum=0;
        for(int j = i;j<n;j++){
            sum += arr[j];
            best = max(best, sum);
        }
    }
    return best;
}
int subarray_sum(int arr[], int n){//O(n3)
    int best=0;
    for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum=0;
            for(int k = i;k<j;k++){
                sum+= +arr[k];
            }
            best = max(sum, best);
        }
    }
    return best;
}
int main(){
    int arr[] = {-1,2,4,-3,5,2,-5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<subarray_sum(arr, n)<<endl;
    cout<<subarr_sum(arr, n)<<endl;
    cout<<sub_sum(arr, n);
    return 0;
}