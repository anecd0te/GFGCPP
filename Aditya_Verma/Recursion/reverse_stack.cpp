#include<bits/stdc++.h>
using namespace std;
void inser(stack<int> &s, int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int tem = s.top();
    s.pop();
    inser(s, temp);
    s.push(tem);
}
void rever(stack<int> &s){
    if(s.size()==0)
        return;
    int temp = s.top();
    s.pop();
    rever(s);
    inser(s, temp);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    rever(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}