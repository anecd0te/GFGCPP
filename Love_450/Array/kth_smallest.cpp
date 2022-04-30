#include<bits/stdc++.h>
using namespace std;
int findmin(int arr[], int n, int k){
    priority_queue<int> maxh;
    for(int i = 0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k)
            maxh.pop();
    }
    return maxh.top();
}
int main(){
    int arr[] = {7,10,4,3,20, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<findmin(arr, size, k);
    return 0;
}