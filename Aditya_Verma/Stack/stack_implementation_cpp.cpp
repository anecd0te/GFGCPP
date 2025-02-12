#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
    int top;
public:
    int a[Max];
    Stack(){
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
    bool Stack::push(int x){
        if(top>=(MAX-1))
            cout<<"Overflow";
            return false;
        else{
            a[++top] = x;
            cout<<x<<" Pushed in the stack";
            return true;
        }
    }
    int Stack::pop(){
        if(top<0){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else{
            int x = a[top--];
            return x;
        }
    }
    int Stack::peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else{
            cout<<a[top]<<endl;
            return 0;
        }
    }
    bool Stack::isEmpty(){
        return (top<0);
    }
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek();

}