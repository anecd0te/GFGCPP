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
void kdis(Node *root, int k, vector<int> &ans){
    if(!root)
        return;
    if(k==0){
        ans.push_back(root->data);
        return;
    }
    kdis(root->left, k-1, ans);
    kdis(root->right, k-1, ans);
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    vector<int> ans;
    int k = 3;
    kdis(root, k, ans);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}