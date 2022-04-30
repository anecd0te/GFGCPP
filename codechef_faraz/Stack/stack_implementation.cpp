#include<bits/stdc++.h>
using namespace std;
int tp = -1, n = 100;
int stck[100];
void push(int x){
    if(tp>=n){
        cout<<"Overflow"<<endl;
    }
    else{
        tp +=1;
        stck[tp] = x;
    }
}
void pop(){
    if(tp == -1)
        cout<<"Underflow, stack is empty"<<endl;
    else{
        tp -=1;
    }
}
void top(){
    if(tp==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<stck[tp]<<endl;
}
int main(){
    cout<<"1. for push"<<endl;
    cout<<"2. for pop"<<endl;
    cout<<"3. for Top"<<endl;
    cout<<"4. for exit"<<endl;
    int choice, val;
    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter value to be pushed"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                top();
                break;
            }
        }
    }while(choice!=4);
    return 0;
}