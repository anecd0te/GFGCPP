#include<bits/stdc++.h>
using namespace std;
void showlist(list<int> g){
    for(auto i = g.begin();i!=g.end();i++){
        cout<<*i<<" ";
    }
}
int main(){
    list<int> g;
    g.push_back(1);
    g.push_back(2);
    g.push_back(3);
    g.push_back(4);
    g.push_back(5);
    g.push_front(0);
    showlist(g);
    return 0;
}