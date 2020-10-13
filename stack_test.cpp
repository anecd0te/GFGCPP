#include<bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;
int A[MAX_SIZE];
int top = -1;
void Push(int x){
	if(top == MAX_SIZE-1){
		cout<<"Stack overflow"<<"\n";
		return;
	}
	A[++top]=x;
}
void Pop(){
	if(top == -1){
		cout<<"Stack Underflow"<<"\n";
	}
	top--;
}
int Top(){
	return A[top];
}
void Print(){
	cout<<"Stack :"<<"\n";
	for(int i = top;i>=0;i--){
		cout<<A[i]<<"\n";
	}
}
int main(){
	Push(2);
	Push(8);
	Push(0);
	Push(4);
	Push(1);
	Push(9);
	Push(9);
	Push(1);
	Print();
	Pop();
	Print();
	return 0;
}
