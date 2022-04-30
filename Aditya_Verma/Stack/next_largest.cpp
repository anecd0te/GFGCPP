#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,3,2,4};
    vector<int> ans(arr.size(),-1);
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
    
}