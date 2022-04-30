#include<bits/stdc++.h>
using namespace std;
class Base{
    int x;
public:
    virtual void func() = 0;
    int getX(){
        return x;
    }
};
class Derived:public Base{
    int y;
public:
    void func(){
        cout<<"Hello in derived fun ";
    }

};
int main(){
    Derived d;
    d.func();
    return 0;
}