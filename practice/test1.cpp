#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x = 6;
    // if(x&1)
    //     cout<<"Odd";
    // else cout<<"Even";
    // return 0;
    bool flag = false;
    int n = 6;
    for(int i = 1;i<=n;i++){
        flag=!flag;
    }
    if(flag)
        cout<<"odd";
    else cout<<"even";
    return 0;
}