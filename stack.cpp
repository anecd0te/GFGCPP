#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack(){
            top =-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }
        bool isEmpty(){
            if(top==-1)
                return true;
            else
                return false;
        }
        bool isFull(){
            if(top==4)
                return true;
            else
                return false;
        }
        void push(int val){
            if(isFull())
                cout<<"Stack Overflow"<<endl;
            else{
                top++;
                arr[top]=val;
            }
        }
        int pop(){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            int popValue = arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
        int count(){
            return(top+1);
        }
        int peek(int pos){
            if(isEmpty()){
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else{
                return arr[pos];
            }
        }
        void change(int pos, int val){
            arr[pos]=val;
            cout<<"Value changed at the location"<<pos<<endl;
        }
        void display(){
            cout<<"All values in the stack are "<<endl;
            for(int i=4;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
};
int main(){
    Stack s1;
    int option, position, value;
    do{
        cout<<"Choose options:"<<endl;
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. Peek()"<<endl;
        cout<<"6. Count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. clearScreen()"<<endl;
        cout<<"0. Exit"<<endl;

        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enter an item to push onto stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"Item "<<s1.pop()<<" is popped successfully"<<endl;
                break;
            case 3:
                if(s1.isEmpty())
                    cout<<"The stack is empty"<<endl;
                else
                    cout<<"Not empty"<<endl;
                break;
            case 4:
                if(s1.isFull())
                    cout<<"Yes the stack is full"<<endl;
                else
                    cout<<"not full"<<endl;
                break;
            case 5:
                cout<<"Enter the position of the value you want to peek"<<endl;
                cin>>position;
                cout<<"Peak function called and the value at "<<position<<" is"<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"Number of items in the stack are "<<s1.count()<<endl;
                break;
            case 7:
                cout<<"Enter the position"<<endl;
                cin>>position;
                cout<<"Enter the value"<<endl;
                cin>>value;
                s1.change(position,value);
                break;
            case 8:
                cout<<"Display function called"<<endl;
                s1.display();
                break;
            case 9:
                cout << "\033[2J\033[1;1H";
                break;
            default:
                cout<<"Please enter correct option"<<endl;

        }
    }
    while(option!=0);
    return 0;
}