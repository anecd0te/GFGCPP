#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *prev;
	Node *next;
};
Node *head;
Node *GetNewNode(int x){
	Node *newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;  
}
void InsertAtHead(int x){
	Node *newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}
void InsertAtTail(int x){
	Node *newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	Node *temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}
void Print(){
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){

}