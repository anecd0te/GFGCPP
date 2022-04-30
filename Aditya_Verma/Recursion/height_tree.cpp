#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root){
    if(root==NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
    }
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    cout<<height(root);
    return 0;
}