#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 22;
    int b = 45;
    int const *ptr = &a;
    ptr = &b;
    cout<<*ptr;
    return 0;
}