#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next=NULL;
    }
};
void print(Node* root){
    Node* temp = root;
    cout<<temp->data<<endl;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}
int main(){
    Node* root = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    root->next = second;
    second->next = third;
    third->next = fourth;
    print(root);
    return 0;

}