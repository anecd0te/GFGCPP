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
int sum_r(Node *root, bool &flag){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return root->data;
    int l =  sum_r(root->left, flag);
    int r = sum_r(root->right, flag);
    cout<<"left "<<l<<" right "<<r<<" root data"<<root->data<<endl;
    if(root->data != l+r)
        flag = false;
    return root->data + l + r;
}
bool sum_tree(Node *root){
    bool flag = true;
    sum_r(root, flag);
    return flag;
}
int main(){
    Node *root = new Node(22);
    root->left = new Node(6);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(2);
    root->right->left = new Node(1);
    root->right->right = new Node(4);
    cout<<sum_tree(root);
    return 0;
}