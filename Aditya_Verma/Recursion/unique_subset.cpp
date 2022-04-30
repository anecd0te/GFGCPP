#include<bits/stdc++.h>
using namespace std;
void subset(string ip, string op,set<string> &st){
    if(ip.size()==0){
        st.insert(op);
        return;
    }
    char s = ip[0];
    ip.erase(ip.begin()+0);
    subset(ip, op, st);
    subset(ip, op+s, st);

}
int main(){
    string ip = "aab";
    string op = "";
    set<string> st;
    subset(ip, op, st);
    for(auto x:st){
        cout<<x<<endl;
    }
    return 0;
}
