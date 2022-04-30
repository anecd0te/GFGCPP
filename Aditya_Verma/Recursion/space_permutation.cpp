#include<bits/stdc++.h>
using namespace std;
void solve(string ip, string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }
    char temp = ip[0];
    ip.erase(ip.begin()+0);
    solve(ip, op+" "+temp);
    solve(ip, op+temp);
}
int main(){
    string ip = "ABC";
    string  op = "";
    op = op+ip[0];
    ip.erase(ip.begin()+0);
    solve(ip, op);
    return 0;

}