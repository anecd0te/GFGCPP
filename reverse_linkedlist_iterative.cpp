#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head;
void Insert(int data){
	Node *temp = new Node;
	temp->data = data;
	temp->next = head;
	head = temp; 
}
void Print(){
	Node *temp = head;
	cout<<"List is";
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
void Reverse(){
	Node *current, *prev, *next;
	current = head;
	prev = NULL;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
int main(){
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Print();
	Reverse();
	Print();
	return 0;
}