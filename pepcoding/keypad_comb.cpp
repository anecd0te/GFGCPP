#include<bits/stdc++.h>
using namespace std;
string key[]={"", "abc","def", "ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string> getKPC(string num){
    if(num.size()==0)
        return {""};
    char c = num[0];
    string rem = num.substr(1);
    vector<string> midans = getKPC(rem);
    string kp = key[c-'0'];
    vector<string> ans;
    for(int i = 0;i<kp.size();i++){
        for(auto x:midans){
            ans.push_back(kp[i]+x);
        }
    }
    return ans;
}
int main(){
    string num;
    cin>>num;
    vector<string> ans = getKPC(num);
    for(auto an : ans)
        cout<<an<<" ";
    return 0;
}