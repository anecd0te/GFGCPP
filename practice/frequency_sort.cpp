#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1, pair<int, int> p2){
    if(p1.second == p2.second)
        return p1.first<p1.first;
    return p1.second>p2.second;
}
void freq(int arr[], int n){
    unordered_map<int, int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), compare);
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].second;j++){
            cout<<v[i].first<<" ";
        }
        cout<<endl;
    }



}
int main(){
    int arr[] = {5,5,5,4,6,4,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    freq(arr, size);
    return 0;
}