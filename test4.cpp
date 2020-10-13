#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head;
void Insert(int data, int n){
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(n==1){
		temp->next = head;
		head = temp;
		return;
	}
	Node *temp1 = head;
	for(int i = 0; i <n-2; i++){
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next=temp;
}
void Delete(int n){
	Node *temp = head;
	if(n==1){
		head = temp->next;
		delete temp;
		return;
	}
	for(int i = 0; i<n-2;i++){
		temp = temp->next;
	}
	Node *temp1 = temp->next;
	temp->next = temp1->next;
	delete temp1;	
}
void Print(){
	Node *temp = head;
	cout<<"List is ";
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
void Reverse(){
	Node *next, *prev;
	prev = NULL;
	Node *current = head;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
int main(){
	head = NULL;
	Insert(2,1);
	Insert(3,2);
	Insert(4,3);
	Insert(5,4);
	Print();
	//Delete(3);
	Reverse();
	Print();
	return 0;
}