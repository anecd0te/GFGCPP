#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7;
    int arr[3];
    arr[0]=0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 3;i<=n;i++){
        arr[i%3] = arr[(i+1)%3]+arr[(i+2)%3];
    }
    cout<<arr[n%3];
    return 0;
}