#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
void preorder_iter(Node *root){
    if(!root)
        return;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node *temp = st.top();
        st.pop();
        cout<<temp->data<<" ";
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
            st.push(temp->left);
    }
}
void preorder_rec(Node *root){
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder_rec(root->left);
    preorder_rec(root->right);
}
int main(){
    Node *root = new Node(1);
    root->left =  new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // preorder_rec(root);
    preorder_iter(root);
    return 0;
}