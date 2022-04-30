#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int el, can, tot=0, candy;
        cin>>el>>can;
        for(int i = 0;i<el;i++){
            cin>>candy;
            tot+=candy;
        }
        // cout<<can<<" "<<tot<<endl;
        if(can>=tot)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}