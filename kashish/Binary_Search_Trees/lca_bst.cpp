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
Node *lca(Node *root, int a, int b){
    if(!root)
        return NULL;
    if(a<root->data && b<root->data)
        return lca(root->left, a, b);
    if(a>root->data && b>root->data)
        return lca(root->right, a, b);
    return root;
}
int main(){
    //             40
    //           /    \
    //         30      60
    //       /    \       \
    //      20   35       70
    //     /        \        \
    //    10        37       80
    Node *root = new Node(40);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left =  new Node(20);
    root->left->right = new Node(35);
    root->left->left->left = new Node(10);
    root->left->right->right = new Node(37);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    int a = 35;
    int b = 70;
    cout<<"LCA OF "<<a<<" and "<<b<<" is "<<lca(root, a,b)->data;
    return 0;
}