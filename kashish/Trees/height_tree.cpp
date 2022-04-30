#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
int height(Node* root){
    if(!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // vector<int> v = diagonal(root);
    cout<<height(root);
    return 0;
}