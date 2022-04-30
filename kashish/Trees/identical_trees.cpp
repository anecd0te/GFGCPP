#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
bool identical(Node *root1, Node *root2){
    if(!root1 && !root2)
        return true;
    if(!root1 || !root2)
        return false;
    if(root1->data != root2->data)
        return false;
    if(identical(root1->left, root2->left) && identical(root1->right,root2->right))
        return true;
    return false;
}
int main(){
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(13);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<identical(root, root1);
    return 0;
}