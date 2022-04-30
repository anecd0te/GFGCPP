#include<bits/stdc++.h>
using namespace std;
void k_most(int arr[], int n, int k){
    unordered_map<int, int> um;
    for(int i = 0;i<n;i++){
        um[arr[i]]++;
    }
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> minh;
    for(auto i = um.begin();i!=um.end();i++){
        minh.push({i->second,i->first});
        if(minh.size()>k){
            minh.pop();
        }
    }
    while(minh.size()!=0){
        cout<<minh.top().second<<" ";
        minh.pop();
    }

}
int main(){
    int arr[] = { 3,3,3, 1, 4, 4, 5, 2, 6, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    k_most(arr, n, k);
}