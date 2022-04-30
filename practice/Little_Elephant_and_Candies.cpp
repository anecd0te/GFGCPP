#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int elep, cand, sum=0,desire;
        cin>>elep>>cand;
        for(int i = 0;i<elep; i++){
            cin>>desire;
            sum += desire;
        }
        if(sum<=cand){
            cout<<"Yes"<<endl;
        }
        else {
                cout<<"No"<<endl;
        }
    }
    return 0;
}