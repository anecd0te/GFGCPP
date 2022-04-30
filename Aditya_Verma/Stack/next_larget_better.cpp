#include<bits/stdc++.h>
using namespace std;
vector<int> next(vector<int> arr){
    stack<int> st;
    unordered_map<int, int> mp;
    for(auto x:arr){
        while(st.size() && st.top()<x){
            mp[st.top()] = x;
            st.pop();
        }
        st.push(x);
    }
    vector<int> ans;
    for(auto x: arr){
        if(mp.find(x)!=mp.end())
            ans.push_back(mp.find(x)->second);
        else ans.push_back(-1);
    }
    return ans;
}
int main(){
    vector<int> arr{1,3,4,2};
    vector<int> ans = next(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}