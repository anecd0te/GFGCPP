#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair minmax(int arr[], int n){
    Pair minmax;
    int i;
    if(n&1){//checking odd, true if odd
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }
    else{
        if(arr[0]>arr[1]){
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else{
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
        i=2;
    }
    while(i<n){
        if(arr[i]>arr[i+1]){
            if(arr[i]>minmax.max)
                minmax.max = arr[i];
            if(arr[i+1]<minmax.min)
                minmax.min = arr[i+1];
        }
        else{
            if(arr[i+1]>minmax.max)
                minmax.max = arr[i+1];
            if(arr[i]<minmax.min)
                minmax.min = arr[i];
        }
        i+=2;
    }
    return minmax;

}
int main(){
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int size = sizeof(arr)/sizeof(arr[0]);
    Pair min_max = minmax(arr, size);
    cout<<"Minimum is "<<min_max.min;
    cout<<"Maximum is "<<min_max.max;
    return 0;
}