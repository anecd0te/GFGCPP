#include<bits/stdc++.h>
using namespace std;
void maximus(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        arr[i] = max;
    }
}
void sum_sub(int arr[], int n){
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum = sum+arr[j];
            cout<<"sum of subarray from "<<i<<"to "<<j<<" is"<<sum<<"\n";
        }
        
    }
}
int main(){
    //int arr[] = {0,-9,1,3,-4,5};
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //int arr[] = {0,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sum_sub(arr, size);
    return 0;
}