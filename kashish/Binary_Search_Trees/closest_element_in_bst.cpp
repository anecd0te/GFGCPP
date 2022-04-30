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
int closest(Node *root, int k){
    if(!root)
        return INT_MAX;
    if(root->data-k==0)
        return 0;
    if(k < root->data){
        return min(abs(root->data-k), closest(root->left, k));
    }
    else return min(abs(root->data-k), closest(root->right,k));
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
    int k = 36;
    cout<<closest(root, k);
    return 0;
}