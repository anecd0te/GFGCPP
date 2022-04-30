#include<bits/stdc++.h>
using namespace std;
vector<int> aditya(vector<int> arr){
    stack<pair<int,int>> st;
    vector<int> ans;
    for(int i = 0; i<arr.size();i++){
        if(st.size()==0)
            ans.push_back(-1);
        else if(st.size()>0 && st.top().first>arr[i]){
            // pair pt = st.top();
            ans.push_back(st.top().second);
        }
        else if(st.size()>0 && st.top().first<=arr[i]){
            while(st.size()>0 && st.top().first<=arr[i])
                st.pop();
            if(st.size()==0)
                ans.push_back(-1);
            else ans.push_back(st.top().second);
        }
        st.push({arr[i],i});
    }
    for(int i = 0;i<ans.size();i++){
        ans[i] = i-ans[i];
    }
    return ans;
}
int main(){
    vector<int> arr = {100, 80, 60, 70,60,75,85};
    // vector<int> arr = {100, 180, 1160, 1170,1260,1275,1285};
    vector<int> ans = aditya(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}