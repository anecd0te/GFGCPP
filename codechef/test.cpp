#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x, count=0;
        cin>>n;
        for(int i = 1;i<=n;i++){
            cin>>x;
            if(x>=1 && x<=7)
                count++;
            if(count==7){
                cout<<i<<endl;
                break;
            }
                
        }
    }
    return 0;
}