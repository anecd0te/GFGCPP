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
int diameter(Node *root, int &dm){
    if(!root)
        return 0;
    int lh = diameter(root->left, dm);
    int rh = diameter(root->right, dm);
    int ht = 1+max(lh, rh);
    int ans = 1 + lh + rh;
    dm = max(dm, ans);
    return ht;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(5);
    int dm=0;
    int h = diameter(root, dm);
    cout<<dm;
    return 0;
}
