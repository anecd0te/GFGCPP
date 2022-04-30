#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,3,5,7,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    set<int> s(arr,arr+n);
    set<int>:: iterator itr = s.begin();
    advance(itr, k-1);
    cout<<*itr;
    return 0;
}