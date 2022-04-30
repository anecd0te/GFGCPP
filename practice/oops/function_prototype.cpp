#include<bits/stdc++.h>
using namespace std;
void display(string n, int x);
void foo(string n, int x);
void foo(string name, int n){
    if(n==12)
        return;
    cout<<name+" in foo"<<endl;
    display(name+" from foo", n+1);
}
void display(string name, int n){
    if(n==12)
        return;
    cout<<name+" in display"<<endl;
    foo(name+" from display", n+1);

}
int main(){
    string name = "Dinesh";
    display(name, 0);
    return 0;

}