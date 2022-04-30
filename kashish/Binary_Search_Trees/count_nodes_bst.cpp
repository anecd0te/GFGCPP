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
void cnt(Node *root, int l, int r, int &count){
    if(!root)
        return;
    if(root->data >= l && root->data <= r)
        count++;
    if(l<root->data)
        cnt(root->left, l, r, count);
    if(r>root->data)
        cnt(root->right, l, r, count);
}
int main(){
        //      40
        //    /   \
        //   20    50
        //  / \    / \
        // 10 25  45  70
        //    /    \
        //   22    47
    Node *root = new Node(40);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(10);
    root->left->right = new Node(25);
    root->left->right->left = new Node(22);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->left->right = new Node(47);
    int l = 20;
    int r = 50;
    int count = 0;
    cnt(root, l, r, count);
    cout<<count;
    return 0;
}