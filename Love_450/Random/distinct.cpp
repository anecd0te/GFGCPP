#include<bits/stdc++.h>
using namespace std;
int distinct(int arr[], int size){
    unordered_map<int, int> mp;
    vector<int> ans;
    for(int i = 0;i<size;i++){
        mp[arr[i]]++;
    }
    int count = 0;
    for(auto i = mp.begin();i!=mp.end();i++){
        if(i->second==1){
            count++;
            ans.push_back(i->first);
        }
    }
    for(auto x: ans)
        cout<<x<<" ";
    return count;
}
int main(){
    int arr[] = {5,10, 15,5,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<distinct(arr,size);
    return 0;
}