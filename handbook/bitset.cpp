#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<10> s(string("0011001100"));
    bitset<10> s1(string("1111111111"));
    cout<<(s&s1);
}