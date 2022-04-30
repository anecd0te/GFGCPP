#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    int x = 4;
    auto i = s.lower_bound(x);
    if(i == s.begin())
        cout<<*i;
    else if(i==s.end()){
        i--;
        cout<<*i;
    }
    // cout<<*i;
    else{
        int a = *i;
        i--;
        int b = *i;
        if(abs(x-a)<abs(x-b))
            cout<<a;
        else cout<<b;
    }
    return 0;
}