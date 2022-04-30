#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair arminmax(int arr[], int n){
    Pair minmax;
    int i;
    if(n&1){
        minmax.min = minmax.max = arr[0];
        i = 1;
    }
    else{
        if(arr[0]<arr[1]){
        minmax.min = arr[0];
        minmax.max = arr[1];     
    } 
        else{
            minmax.max = arr[0];
            minmax.min = arr[1];
        }       
        i=2;
    }
    while(i<n-1){
        if(arr[i]<arr[i+1]){
            if(arr[i]<minmax.min)
                minmax.min = arr[i];
            if(arr[i+1]>minmax.max)
                minmax.max = arr[i+1];
        }
        else{
            if(arr[i]>minmax.max)
                minmax.max = arr[i];
            if(arr[i+1]<minmax.min)
                minmax.min = arr[i+1];
        }
        i+=2;
    }
    return minmax;
}
int main(){
    // int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr[] = {4,5,2,1,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    Pair minmax = arminmax(arr, size);
    cout<<"Minimum is "<<minmax.min<<endl;
    cout<<"Maximum is "<<minmax.max<<endl;
    return 0;
}