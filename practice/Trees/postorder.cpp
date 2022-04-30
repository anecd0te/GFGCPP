#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
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
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(!st1.empty()){
        Node *temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left)
            st1.push(temp->left);
        if(temp->right)
            st1.push(temp->right);
    }
    while(!st2.empty()){
        cout<<st2.top()->data<<" ";
        st2.pop();
    }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // postorder_rec(root);
    postorder_iter(root);
    return 0;
}