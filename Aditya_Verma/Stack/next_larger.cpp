#include<bits/stdc++.h>
using namespace std;
vector<int> aditya(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    for(int i = arr.size()-1;i>=0;i--){
        if(st.size()==0)
            ans.push_back(-1);
        else if(st.size()>0 && st.top()>arr[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()<=arr[i]){
            while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0)
                ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<int> better(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    unordered_map<int, int> mp;
    for(auto x:arr){
        while(st.size()>0 && st.top()<x){
            mp[st.top()] = x;
            st.pop();
        }
        st.push(x);
    }
    for(auto x:arr){
        if(mp.find(x)!=mp.end())
            ans.push_back(mp.find(x)->second);
        else ans.push_back(-1);
    }
    return ans;
}
int main(){
    vector<int> arr = {1,3,2,4};
    // vector<int> ans = aditya(arr);
    vector<int> ans = better(arr);
    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}