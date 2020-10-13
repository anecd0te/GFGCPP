#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void Enqueue(int x){
	Node *temp = new Node();
	cout<<"Enqueing "<<x<<"\n";
	temp->data = x;
	temp->next = NULL;
	if(front==NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
void Dequeue(){
	Node *temp = front;
	cout<<"Dequeing"<<"\n";
	if(front == NULL){
		cout<<"Error, Empty queue"<<"\n";
		return;
	}
	if(front==rear){
		front = rear = NULL;
	}
	else front = front->next;
	delete temp;
}
void Print(){
	Node *temp = front;
	if(front==NULL){
		cout<<"Empty Queue"<<"\n";
		return;
	}
	cout<<"Queue is :: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){
	Print();
	Enqueue(2);
	Enqueue(4);
	Enqueue(9);
	Enqueue(8);
	Print();
	Dequeue();
	Print();
	return 0;
}