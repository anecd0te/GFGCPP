#include<bits/stdc++.h>
using namespace std;
vector<string> getPath(int n){
    if(n==0){
        return {""};
    }
    if(n<0)
        return {};
    vector<string> gp1 = getPath(n-1);
    vector<string> gp2 = getPath(n-2);
    vector<string> gp3 = getPath(n-3);
    vector<string> paths;
    for(auto x: gp1){
        paths.push_back('1'+x);
    }
    for(auto x:gp2){
        paths.push_back('2'+x);
    }
    for(auto x: gp3){
        paths.push_back('3'+x);
    }
    return paths;
} 
int main(){
    int num;
    cin>>num;
    vector<string> ans = getPath(num);
    cout<<"[";
    for(int i = 0;i<ans.size()-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]";
    
    return 0;
}