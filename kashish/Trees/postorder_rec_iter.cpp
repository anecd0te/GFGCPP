#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        right = NULL;
        left =NULL;
    }
};
void postorder_rec(Node *root){
    if(!root)
        return;
    postorder_rec(root->left);
    postorder_rec(root->right);
    cout<<root->data<<" ";
}
void postorder_iter(Node *root){
    if(!root)
        return;
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    while(!s1.empty()){
        Node *top = s1.top();
        s1.pop();
        s2.push(top);
        if(top->left)
            s1.push(top->left);
        if(top->right)
            s1.push(top->right);
    }
    while(s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postorder_rec(root);
    // postorder_iter(root);
    return 0;
}