#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair getMinMax(int arr[], int n){
    Pair minmax;
    int i;
    if(n%2==0){
        if(arr[0]>arr[1]){
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else{
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i=2;
    }
    else{
        minmax.min=arr[0];
        minmax.max=arr[1];
        i=1;
    }
    while(i<n-1){
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
int main()
{
    int arr[] = { 1000, 11, 445,
                1, 330, 3000 };
    int arr_size = 6;
     
    Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
        << minmax.min << endl;
    cout << "Maximum element is "
        << minmax.max;
         
    return 0;
}