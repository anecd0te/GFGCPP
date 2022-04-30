#include<bits/stdc++.h>
using namespace std;
int fib(int i){
    int numer = pow(1+sqrt(5),i) - pow(1-sqrt(5), i);
    int denom = pow(2,i)*sqrt(5);
    return numer/denom;
}
int main(){
    int n = 5;
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0;i<n;i++){
        // cout<<fib(i)<<" ";
        cout<<a<<" ";
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}