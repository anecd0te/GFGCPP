#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 31;
    int y = sqrt(x);
    // cout<<y;
    for(int i = 1;i<y;i++){
        if(x%i==0)
            cout<<"not prime";
        else cout<<"prime";
    }
    return 0;
}