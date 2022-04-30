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
bool mirror(Node *root, Node *root1){
    if(!root && !root1)
        return true;
    if(!root || !root1)
        return false;
    if(root->data != root1->data)
        return false;
    return (mirror(root->left, root1->right) && mirror(root->right, root1->left));
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    root->right->left = new Node(4);
    root->right->left->right = new Node(5);
    Node *root1 = new Node(1);
    root1->right = new Node(3);
    root1->left = new Node(2);
    root1->left->right = new Node(4);
    root1->left->right->left = new Node(5);
    cout<<mirror(root, root1);
    return 0;
}