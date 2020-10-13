#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
/*
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
}*/
Node *Insert(Node *head, int data){
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head==NULL){
		head = temp;
		//return;
	}
	else{
		Node *temp1 = head;
		while(temp1->next!=NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}
	return head;

}
void Print(Node *p){
	if(p==NULL)
		return;
	cout<<p->data;
	Print(p->next);
}
void RPrint(Node *p){
	if(p==NULL)
		return;
	RPrint(p->next);
	cout<<p->data;
}
Node *Reverse(Node *head, Node *p){
	if(p->next==NULL){
		head = p;
		return head;
	}
	else{
	Reverse(head, p->next);
	Node *q = p->next;
	q->next = p;
	p->next = NULL;
}
return head;
}
int main(){
	Node *head = NULL;
	head = Insert(head,1);
	head = Insert(head,2);
	head = Insert(head,3);
	head = Insert(head,4);
	Print(head);
	cout<<"\n";
	RPrint(head);
	cout<<"\n";
	head = Reverse(head, head);
	Print(head);
	return 0;	
}

