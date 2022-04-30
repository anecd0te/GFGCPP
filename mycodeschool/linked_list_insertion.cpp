#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node* head;
Node* Insert(Node* head, int x){
    Node* temp = new Node;
    temp->data = x;
    // temp->next = NULL; //not required
    // if(head!=NULL)
    temp->next = head;
    head = temp;
    return head;
}
void Print(Node* head){
    Node *temp = head;
    cout<<"List is : ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    head = NULL; //empty list
    cout<<"How many numbers?"<<endl;
    int n, x;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x;
        head = Insert(head, x);
        Print(head);
    }
    return 0;
}