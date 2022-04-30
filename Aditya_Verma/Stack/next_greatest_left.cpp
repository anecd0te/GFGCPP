#include<bits/stdc++.h>
using namespace std;
vector<int> ngl(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    unordered_map<int, int> mp;
    for(int i = arr.size()-1;i>=0;i--){
        while(st.size() && st.top()<arr[i]){
            mp[st.top()] = arr[i];
            st.pop();
        }
        st.push(arr[i]);
    }
    for(auto x:arr){
        if(mp.find(x)!=mp.end())
            ans.push_back(mp.find(x)->second);
        else ans.push_back(-1);
    }
    return ans;
}
vector<int> aditya(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    for(int i = 0;i<arr.size();i++){
        if(st.size()==0)
            ans.push_back(-1);
        else if(st.size()>0 && st.top()>arr[i])
            ans.push_back(st.top());
        else if(st.size()>0 && st.top()<arr[i]){
            while(st.size()>0 && st.top()<arr[i]){
                st.pop();
            }
            if(st.size()==0)
                ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {1,3,2,4};
    // vector<int> ans = ngl(arr);
    vector<int> ans = aditya(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}