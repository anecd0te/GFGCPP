#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "pAple";
    string s2 = "Apple";
    int flag = 1;
    unordered_map<char, int> mp;
    for(int i = 0;i<s1.size();i++){
        mp[s1[i]]++;
    }
    for(int i = 0;i<s2.size();i++){
        mp[s2[i]]--;
    }
    for(auto x: mp){
        if(x.second!=0){
            flag = 0;
            cout<<"Not anagram";
        }
    }
    if(flag)
        cout<<"Anagram";
    return 0;
}