#include<bits/stdc++.h>
using namespace std;
void del(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    del(s, k-1);
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int k = s.size();
    k = k/2+1;
    del(s,k);
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}