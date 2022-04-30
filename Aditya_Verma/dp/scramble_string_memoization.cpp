#include<bits/stdc++.h>
using namespace std;
unordered_map<string, bool> mp;
bool isscramble(string s1, string s2){
    string key = s1+" "+s2;
    if(s1.compare(s2)==0)
        return true;
    if(s1.length()<=1)
        return false;
    // int i = 1;
    if(mp.find(key)!=mp.end())
        return mp[key];
    int n = s1.size()-1;
    bool flag = false;
    for(int i = 1;i<=n;i++){
        if((isscramble(s1.substr(0,i), s2.substr(0,i)) && isscramble(s1.substr(i,n-i), s2.substr(i,n-i)))
        || (isscramble(s1.substr(0,i), s2.substr(n-i,i)) && isscramble(s1.substr(i, n-i), s2.substr(0,n-i)))){
            flag = true;
            break;
        }
    }
    return mp[key] = flag;

    // if(dp[s1.size()+])
    
    

}
int main(){
    string s1 = "coder";
    string s2 = "ocred";
    // string s2 = "coder";
    mp.clear();
    if(s1.size()!=s2.size()){
        cout<<"No"<<endl;
        return 0;
    }
    if(s1.size()==0 && s2.size()==0){
        cout<<"true"<<endl;
        return 0;
    }
    if(isscramble(s1, s2))
        cout<<"yes";
    else cout<<"No";
    return 0;
}