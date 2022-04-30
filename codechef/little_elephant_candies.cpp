#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int elep, cand, sum=0,desire;
        cin>>elep>>cand;
        for(int i = 0;i<elep, i++){
            cin>>sum;
            sum += desire;
        }
        if(desire<=cand)
            cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}