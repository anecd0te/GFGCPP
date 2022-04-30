// https://www.youtube.com/watch?v=hQIGPCoVtH0
#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int sum){
    if(sum==0)//we have finally found our combination. hence, passed
        return 1;
    if(sum<0) //we couldn't find the combination. hence, failed
        return 0;
    if(n <=0 && sum>=1) //coins finished without giving us sum. hence failed
        return 0;
        /***count(arr, n-1, sum) == coin not selected, hence discarded
        and count(arr, n, sum-arr[n-1]) coin selected and can be reused again.
        ***/
    return count(arr,n-1,sum)+count(arr, n, sum-arr[n-1]);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" "<<count(arr, n, 4);
    return 0;
}