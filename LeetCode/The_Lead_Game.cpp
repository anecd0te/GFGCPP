#include<bits/stdc++.h>
using namespace std;
int main(){
    int n_rounds;
    cin>>n_rounds;
    int p1, p2, s1=0, s2=0, o_lead=INT_MIN, winner;
    for(int i = 0;i<n_rounds;i++){
        cin>>p1>>p2;
        s1 += p1;
        s2 =+ p2;
        if(s1>=s2 && s1-s2>o_lead){
            winner = 1;
            o_lead = s1-s2;
        }
        else if(s2 > s1 && s2-s1>o_lead){
            winner = 2;
            o_lead = s2-s1;
        } 
    }
    cout<<winner<<" "<<o_lead;
    return 0;
}