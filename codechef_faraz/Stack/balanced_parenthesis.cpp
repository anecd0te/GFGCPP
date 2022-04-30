#include<bits/stdc++.h>
using namespace std;
bool isbalance(string s){
    stack<char> st;
    char to_push, to_pop;
    while(!s.empty()){
        to_push = s[0];
        s.erase(s.begin()+0);
        if(to_push == '(')
            st.push(to_push);
        else{
            to_pop = st.top();
            st.pop();
            if(to_pop != '(')
                return false;
        } 
    }
    if(!st.empty())
    return false;
    else return true;
}
int main(){
    string s = "))";
    cout<<isbalance(s);
    return 0;
}