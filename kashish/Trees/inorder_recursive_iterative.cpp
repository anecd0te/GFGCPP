#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void inorder_iter(Node*root){
    if(!root)
        return;
    stack<Node*> st;
    while(!st.empty()||root){
        while(root){
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();
        cout<<root->data<<" ";
        root = root->right;
    }
}
void inorder_rec(Node *root){
    if(!root)
        return;
    inorder_rec(root->left);
    cout<<root->data<<endl;
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