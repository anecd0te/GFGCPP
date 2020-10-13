#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head;
void Insert(int val){
	Node *temp = new Node;
	temp->data  = val;
	temp->next = head;
	head = temp; 
}
void Delete(int n){
	Node *temp1 = head;
	if(n==1){
		head = temp1->next;
		delete temp1;
		return;
	}
	for(int i = 0; i<n-2;i++){
		temp1 = temp1->next; //n-1th node
 	}
	Node *temp2 = temp1->next; //nth node
	temp1->next = temp2->next; //pointing to n+1th node;
	delete temp2;

}
void Print(){
	Node *temp = head;
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cout<<"Enter a position"<<"\n";
	cin>>n;
	Delete(n);
	Print();
	return 0;
}