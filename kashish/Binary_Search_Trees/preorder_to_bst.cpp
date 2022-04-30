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
Node *conbst(Node *&root, int x){
    if(!root){
        return root = new Node(x);
    }
    if(x<root->data){
        root->left = conbst(root->left, x);
    }
    else{
        root->right = conbst(root->right, x);
    }
    return root;
}
Node* bst(vector<int> &arr){
    Node *root = NULL;
    for(auto x:arr){
        conbst(root, x);
    }
    return root;
}
void postorder(Node *root){
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int constbst(vector<int> &preorder, int n, int pos, Node *root, int left, int right){
    if(pos == n || preorder[pos]<left || preorder[pos]>right){
        return pos;
    }
    if(preorder[pos]<root->data){
        root->left = new Node(preorder[pos]);
        pos++;
        pos = constbst(preorder, n, pos, root->left, left, root->data-1);
    }
    if(pos==n || preorder[pos]<left || preorder[pos]>right){
        return pos;
    }
    root->right = new Node(preorder[pos]);
    pos++;
    pos = constbst(preorder, n, pos, root->right, root->data+1, right);
    return pos;
}
Node *betterbst(vector<int> arr){
    int n = arr.size();
    if(n==0)
        return NULL;
    Node *root = new Node(arr[0]);
    if(n==1){
        return root;
    }
    constbst(arr, n, 1, root, INT_MIN, INT_MAX);
    return root;
}
int main(){
    vector <int> arr = {10, 5, 1, 7, 40, 50};
    // Node *root = bst(arr); // recursive approach with O(n^2)
    //better approach with O(n)
    Node *root = betterbst(arr);
    // postorder(root);
    inorder(root);
    return 0;


}