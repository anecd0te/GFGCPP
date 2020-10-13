#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *Reverse(Node *head){
	Node *temp = new Node;
	if(head->next==NULL){
		return head;
	}
	else{
	temp = Reverse(head->next);
	Node *q = head->next;
	q->next = head;
	head->next = NULL;
	}
	return temp;
}
void Insert(Node **head,int data){
	Node *temp = new Node;
	temp->data = data;
	temp->next = (*head);
	(*head) = temp;
}
void Print(Node *head){
	Node *temp = head;
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){
	Node *head = NULL;
	int n,x;
	cout<<"How many nodes you want ?"<<"\n";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Enter Value to be inserted"<<"\n";
		cin>>x;
		Insert(&head,x);
	}
	Print(head);
	//cout<<head<<"\n";
	cout<<"Let's reverse the nodes"<<"\n";
	Node *nhead = Reverse(head);
	cout<<"Reversed Linked list is "<<"\n";
	Print(nhead);
}