#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum){
    if(n==0){
     return 0;   
    }
    if(sum==0)
        return INT_MAX;
    if(arr[n-1]<=sum){
        return min(1+count(arr, n, sum-arr[n-1]), count(arr, n-1, sum));
    }
    else return count(arr, n-1, sum);
}
int main(){
    int arr[] = {9,6,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 11;
    cout<<"Minimum coins required is "<<count(arr, n, sum);
    return 0;
}