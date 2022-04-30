#include<bits/stdc++.h>
using namespace std;
void freq(string s){
    unordered_map<char, int> mp;
    // cout<<s<<" ";
    int n = s.size();
    for(auto x:s){
        mp[x]++;
    }
    for(auto x:s){
        if(mp[x]!=0){
            cout<<x<<" "<<mp[x]<<endl;
            mp[x]= 0;
        }
    }
}
int main(){
    string s = "ddineeshh";
    freq(s);
    return 0;
}