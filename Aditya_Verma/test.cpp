#include<bits/stdc++.h>
using namespace std;
void fun(const int *p){
    *p = 0;
}
int main(){
    const int i = 10;
    fun(&i);
    return 0;
}