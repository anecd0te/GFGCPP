#include<bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 Node *next;
};
void Insert(Node **head_ref,int x){
	Node *temp = new Node;
	temp->data = x;
	temp->next = (*head_ref);
	(*head_ref) = temp;
}
void Print(Node *node){
	while(node!=NULL){
		cout<<" "<<node->data;
		node = node->next;
	}
}
int main(){
	int n,x;
	Node *head=NULL; //Empty List
 	cout<<"How many nodes you want to add"<<"\n";
 	cin>>n;
 	for(int i = 0; i < n; i++){
 		cout<<"Enter value"<<"\n";
 		cin>>x;
 		Insert(&head,x);
 	}
 	Print(head);
 	cout<<head<<" "<<sizeof(*head);
	return 0;
}