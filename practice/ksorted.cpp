#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,6,3,12,56,8};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i = 0;i<n;i++){
        minh.push(arr[i]);
        if(minh.size()>k){
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    while(minh.size()!=0){
        ans.push_back(minh.top());
        minh.pop();
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}