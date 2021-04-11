// Stack - Object oriented implementation using arrays
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101

class Stack
{
private:
	int A[MAX_SIZE];
	int top;
public:
	// constructor
	Stack(){
		top = -1;
	}
	void Push(int x){
		if(top==MAX_SIZE-1){
			cout<<"Stack Overflow \n";
			return;
		}
		A[++top] = x;
	}
	void Pop(){
		if(top == -1){
			cout<<"Stack Underflow \n";
		}
		top--;
	}
	int Top(){
		if(top==-1){
			cout<<"Empty stack \n";
			return 0;
		}
		return A[top];
	}
	int isEmpty(){
		if(top == -1)
			return 1;
		return 0;
	}
	// ONLY FOR TESTING - NOT A VALID OPERATION WITH STACK 
	// This function is just to test the implementation of stack. 
	// This will print all the elements in the stack at any stage. 
	void Print(){
		if(top == -1){
			cout<<"Empty Stack. \n";
			return;
		}
		cout<<"Stack ";
		for(int i = 0; i<=top; i++){
			cout<<A[i];
		}
		cout<<"\n";
	}
};
int main(){
	Stack s;
	s.Print();
	s.Push(2);
	s.Print();
	s.Push(4);
	s.Print();
	s.Push(6);
	s.Print();
	s.Pop();
	s.Print();
	return 0;

}