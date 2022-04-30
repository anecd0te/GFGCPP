#include<bits/stdc++.h>
using namespace std;
int bin(int arr[], int n){
    int x = -1;
    for(int b = n;b>=1;b/=2){
        while(arr[x+b]<arr[x+b+1])
            x+=b;
    }
    return x+1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<bin(arr, n);
    return 0;
}