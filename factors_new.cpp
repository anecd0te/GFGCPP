#include<bits/stdc++.h>
using namespace std;
//optimised approach Time Complexity O(sqrt(n))
void opt_fact(int n){
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=sqrt(n))
                cout<<n/i<<" ";
        }
    }
}
//brute force approach Time Complexity O(n)
void fact(int n){
    for(int i = 1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
}
int main(){
    int n = 40;
    fact(n);
    cout<<endl;
    opt_fact(n);
    return 0;
}