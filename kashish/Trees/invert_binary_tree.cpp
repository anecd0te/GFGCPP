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
void invert(Node *root){
    if(!root)
        return;
    swap(root->left, root->right);
    // Node *temp = root->left;
    // root->left->data=root->right->data;
    // root->right->data = temp->data;
    invert(root->left);
    invert(root->right);
}
void inorder(Node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorder(root);
    cout<<endl;
    invert(root);
    inorder(root);
    return 0;
}