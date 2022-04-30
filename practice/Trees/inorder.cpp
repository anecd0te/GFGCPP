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
void inorder_iter(Node *root){
    if(!root)
        return;
    stack<Node*> st;
    Node *curr = root;
    // st.push(root);
    while(curr || !st.empty()){
        while(curr){
            st.push(curr);
            curr = curr->left;
        }
        cout<<st.top()->data<<" ";
        curr = st.top()->right;
        st.pop();
    }
}
void inorder_rec(Node *root){
    if(!root)
        return;
    inorder_rec(root->left);
    cout<<root->data<<" ";
    inorder_rec(root->right);
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // inorder_rec(root);
    inorder_iter(root);
    return 0;
}