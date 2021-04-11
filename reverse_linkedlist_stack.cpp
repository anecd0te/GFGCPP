#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
/*
void Reverse(char *c, int n){
	stack<char> s;
	for(int i = 0; i<n; i++){
		s.push(c[i]);
	}
	for(int i = 0; i<n; i++){
		c[i] = s.top();
		s.pop();
	}
}
int main(){
	cout<<"Enter your string \n";
	char c[51];
	gets(c);
	cout<<c<<"\n";
	cout<<"Reverse String is \n";
	Reverse(c,strlen(c));
	cout<<c;
}*/
void Push(Node **top, int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = *top;
	*top = temp;

}
Node *Reverse(Node *head){
	stack<Node *> stk;
	Node *temp = head;
	while(temp->next!=NULL){
		stk.push(temp);
		temp = temp->next;
	}
	head = temp;
	while(!stk.empty()){
		temp->next = stk.top();
		temp = temp->next;
		stk.pop();
	}
	temp->next = NULL;
	return head;	
}
void Print(Node **top){
	Node *temp = *top;
	cout<<"stack is ";
	while(temp!=NULL){
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){
	Node *top = NULL;
	Push(&top,2);
	Print(&top);
	Push(&top,4);
	Print(&top);
	Push(&top,6);
	Print(&top);
	Push(&top,8);
	Print(&top);
	top = Reverse(top);
	Print(&top);

	return 0;
}