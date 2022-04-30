#include<bits/stdc++.h>
using namespace std;
void subset(string ip, string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }
    char s = ip[0];
    ip.erase(ip.begin()+0);
    subset(ip,op);
    subset(ip, op+s);
}
int main(){
    string ip = "abc";
    string op = "";
    subset(ip, op);
    return 0;
}