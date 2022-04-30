#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node *bst(int arr[], int l, int r){
    if(l>r)
        return NULL;
    int mid = (l + r)/2;
    Node *root = new Node(arr[mid]);
    root->left = bst(arr, l, mid-1);
    root->right = bst(arr, mid+1, r);
    return root;
}
void preorder(Node *root){
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[] = {10, 12, 15, 20, 24, 28};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node *root = bst(arr, 0, size-1);
    preorder(root);
    return 0;
}