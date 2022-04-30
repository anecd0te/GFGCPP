#include<bits/stdc++.h>
using namespace std;
vector<int> brute(vector<int> arr){
    vector<int> ans(arr.size());
    // ans.push_back(-1);
    for(int i = arr.size()-1;i>=0;i--){
        int flag = 1;
        for(int j = i - 1;j>=0;j--){
            if(arr[j]<arr[i]){
                ans[i] = arr[j];
                flag = 0;
                break;
            }
        }
        if(flag)
            ans[i] = -1;
    }
    return ans;
}
vector<int> aditya(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    for(int i = 0 ;i<arr.size();i++){
        if(st.top()==0)
            ans.push_back(-1);
        else if(st.top()>0 && st.top()<arr[i])
            ans.push_back(st.top());
        else if(st.top()>0 && st.top()>=arr[i]){
            while(st.top()>0 && st.top()>=arr[i])
                st.pop();
            if(st.top()==0)
                ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {4,5,2,10,8};
    // vector<int> ans = brute(arr);
    vector<int> ans = aditya(arr);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}