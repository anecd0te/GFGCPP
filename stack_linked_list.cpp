#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *link;
};
Node *top = NULL;
void Push(int x){
	Node *temp = new Node;
	temp->data = x;
	temp->link = top;
	top = temp;
}
void Pop(){
	Node *temp;
	if(top==NULL)
		return;
	temp = top;
	top = top->link;
	free(temp);
}
void Top(){
	Node *temp = top;
	cout<<temp->data<<"\n";
}
void IsEmpty(){
	if(top==NULL)
		cout<<"Yes Stack is empty"<<"\n";
	else cout<<"Not empty"<<"\n";
}
void Print(){
	Node *temp = top;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<"\n";
}
int main(){
	IsEmpty();
	Push(2);
	Push(3);
	Push(4);
	Print();
	Pop();
	cout<<"After Pop Instruction"<<"\n";
	Print();
	Top();
	IsEmpty();
	return 0;
}