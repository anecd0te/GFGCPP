#include<bits/stdc++.h>
using namespace std;
void generate_subset(vector<int> arr,vector<int> &in_ans, vector<vector<int>> &ans){
    if(arr.size()==0){
        ans.push_back(in_ans);
        return;
        }
    int num = arr[0];
    arr.erase(arr.begin()+0);
    generate_subset(arr,in_ans, ans);
    in_ans.push_back(num);
    generate_subset(arr, in_ans, ans);
    in_ans.pop_back();
}
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> in_ans;
    generate_subset(arr, in_ans, ans);
    for(auto x : ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}