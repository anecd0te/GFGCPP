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
void greatest(Node *root, int &sum){
    if(!root)
        return;
    greatest(root->right, sum);
    sum += root->data;
    root->data = sum;
    greatest(root->left, sum);
}
void inorder(Node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
        //         50
        //       /    \
        //     40      60
        //   /   \   /    \
        // 30    45  55    65
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->left = new Node(30);
    root->left->right = new Node(45);
    root->right->left = new Node(55);
    root->right->right = new Node(65);
    int sum = 0;
    inorder(root);
    cout<<endl;
    greatest(root, sum);
    inorder(root);
    return 0;
}