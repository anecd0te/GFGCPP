#include<bits/stdc++.h>
using namespace std;
int power(int x, int n){
    if(n==0)
        return 1;
    int ans = power(x,n/2);
    if(n&1){
        return x*ans*ans;
    }
        // return n * power(x,n/2)*power(x,n/2);
    else return ans*ans;
    // power(x,n/2) * power(x,n/2);
}
int main(){
    int n = 5;
    int x = 2;
    cout<<power(x,n);
    return 0;
}