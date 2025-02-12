#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
//insert at head
void push(Node **head, int data){
    Node *temp = new Node(data);
    // temp->data = data;
    temp->next = *head;
    *head = temp;
}
//print linked list
void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//insert after a given node
void insertafter(Node *prev_node, int data){
    Node *temp = new Node(data);
    temp->next = prev_node->next;
    prev_node->next = temp; 
}
//given a reference to the head, insert new node at the end;
void append(Node **head, int data){
    Node *temp = *head;
    while(temp->next!=NULL)
        temp = temp->next;
    Node *newNode = new Node(data);
    temp->next = newNode;
}
int main(){
    Node* head = NULL;
    push(&head, 9);//insert at head;
    push(&head, 7);
    push(&head, 6);
    print(head);
    cout<<endl;
    insertafter(head->next, 8);//insert after a given node
    print(head);
    cout<<endl;
    append(&head, 10);
    print(head);
    return 0;
}