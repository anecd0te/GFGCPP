#include<bits/stdc++.h>
using namespace std;
int main(){
    int B[2][3] = {2,3,6,4,5,8};
    // cout<<B[0][0]<<endl;
    // cout<<B[0]<<endl;
    // cout<<B[1]<<endl;
    cout<<B<<endl;
    cout<<*B<<endl;
    cout<<*B+1<<endl;
    cout<<B+1<<endl;
    int (*p)[3] = B;
    cout<<p<<endl;

    
}