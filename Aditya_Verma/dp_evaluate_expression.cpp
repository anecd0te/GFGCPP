#include<bits/stdc++.h>
using namespace std;
unordered_map<string, int> mp;
int solve(string s, int i, int j, bool istrue){
    if(i>j)
        return false;
    if(i==j){
        if(istrue == true){
            return s[i]=='T';
        }
        else return s[i]=='F';
    }
    // string temp = to_string(i);
    // temp.push_back(' ');
    // temp.append(to_string(j));
    // temp.push_back(' ');
    // temp.append(to_string(istrue));
    string temp=to_string(i)+" "+to_string(j)+" "+to_string(istrue);
    cout<<"temp is "<<temp<<endl;
    if(mp.find(temp)!=mp.end()){
        cout<<mp[temp]<<endl;
        return mp[temp];
    }
    int ans=0;
    for(int k = i+1;k<=j-1;k+=2){
        int lt = solve(s,i,k-1,true);
        int lf = solve(s,i,k-1, false);
        int rt = solve(s,k+1,j,true);
        int rf = solve(s,k+1,j,false);
        if(s[k]=='&'){
            if(istrue==true){
                ans = ans + lt*rt;
            }
            else{
                ans = ans + lf*rt+ lt*rf + lf*rf;
            }
        }
        if(s[k]=='|'){
            if(istrue==true){
                ans += lt*rt + lt*rf + lf*rt;
            }
            else ans += lf*rf;
        }
        if(s[k] == '^'){
            if(istrue==true){
                ans += lt*rf + lf*rt;
            }
            else {
                ans += lt*rt + lf*rf;
            }
        }   
    }
    return mp[temp] = ans;
}
int main(){
    string s = "T|F&T^F";
    int  n = s.size();
    int ans = solve(s, 0, n-1, true);
    cout<<ans;
    return 0;

}