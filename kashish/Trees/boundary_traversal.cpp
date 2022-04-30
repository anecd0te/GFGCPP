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
void left(Node *root,vector<int> &ans){
    if(!root)
        return;
    if(root->left || root->right)
        ans.push_back(root->data);
    if(root->left)
        left(root->left, ans);
    else if(root->right)
        left(root->right, ans);
}
void leaf(Node *root, vector<int> &ans){
    if(!root)
        return;
    leaf(root->left, ans);
    if(!root->left && !root->right)
        ans.push_back(root->data);
    leaf(root->right, ans);
}
void right(Node *root, vector<int> &ans){
    if(!root)
        return;
    if(root->right)
        right(root->right, ans);
    else if(root->left)
        right(root->left, ans);
    if(root->left || root->right)
        ans.push_back(root->data); 
}
vector<int> boundary(Node *root){
    vector<int> ans;
    if(!root)
        return ans;
    ans.push_back(root->data);
    if(!root->left && !root->right)
        return ans;
    left(root->left, ans);
    leaf(root, ans);
    right(root->right, ans);
    return ans;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->right = new Node(3);
    root->left->right->left = new Node(4);
    root->right->left = new Node(8);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);
    root->right->right->left->left = new Node(9);
    vector<int> ans = boundary(root);
    for(auto x : ans)
        cout<<x<<" ";
    return 0;
}