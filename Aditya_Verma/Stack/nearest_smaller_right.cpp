#include<bits/stdc++.h>
using namespace std;
vector<int> aditya(vector<int> arr){
    vector<int> ans;
    stack<int> st;
    for(int i = arr.size()-1;i>=0;i--){
        if(st.size()==0)
            ans.push_back(-1);
        else if(st.size()>0 && st.top()<arr[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()>=arr[i]){
            while(st.size()>0 && st.top()>=arr[i])
                st.pop();
            if(st.size()==0)
                ans.push_back(-1);
            else ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int> arr = {4,5,2,10,8};
    vector<int> ans = aditya(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}