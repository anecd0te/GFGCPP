#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Dinesh";
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        st.push(s[i]);
    }
    string ans = "";
    while(!st.empty()){
        char x = st.top();
        ans += x;
        st.pop();
    }
    cout<<ans<<endl;
    return 0;
}