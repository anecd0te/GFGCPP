#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int n, int x){
    int k = 0;
    for(int b = n/2;b>=1;b/=2){
        while(k+b<n && arr[k+b]<=x)
            k+=b;
    }
    if(arr[k]==x)
        return k;
    return -1;

}
int main(){
    int arr[] = {2,5,6,7,9,11,15,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binary(arr, n, 6)<<" Found by my function"<<endl;
    cout<<binary_search(arr, arr+n, 6)<<" found by inbuilt func"<<endl;
    cout<<lower_bound(arr, arr+n, 6)-arr<<" Found by lower bound"<<endl;
    return 0;
}