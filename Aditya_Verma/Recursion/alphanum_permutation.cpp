#include<bits/stdc++.h>
using namespace std;
void solve(string ip, string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }
    if(isalpha(ip[0])){
        char temp = ip[0];
        ip.erase(ip.begin()+0);
        solve(ip, op+(char)tolower(temp));
        solve(ip, op+(char)toupper(temp));
    }
    else{
        char temp = ip[0];
        ip.erase(ip.begin()+0);
        solve(ip, op+temp);
    }
}
int main(){
    string ip = "a1b2";
    string op = "";
    solve(ip, op);
    return 0;
}