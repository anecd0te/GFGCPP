#include<bits/stdc++.h>
using namespace std;
string key[]={"", "abc","def", "ghi","jkl","mno","pqrs","tu","vwx","yz"};
void getKPC(string ip, string op){
    if(ip.size()==0){
        cout<<op<<" ";
        return;
    }
    char c = ip[0];
    string rem = ip.substr(1);
    string reqKey = key[c-'0'];
    for(int i = 0;i<reqKey.length();i++){
        char cho = reqKey[i];
        getKPC(rem, op+cho);
    }
}
int main(){
    string num;
    cin>>num;
    getKPC(num, "");
    return 0;
}