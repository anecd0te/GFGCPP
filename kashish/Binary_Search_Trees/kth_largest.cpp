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
void ksmall(Node *root, int &k, int &v){
    if(!root)
        return;
    if(k<0)
        return;
    ksmall(root->right, k, v);
    cout<<root->data<<" "<<k<<endl;
    k--;
    if(k==0){
        v = root->data;
        return;
    }
    ksmall(root->left,k, v);
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
    int k = 3;
    int val=-1;
    ksmall(root, k, val);
    cout<<k<<"th smallest value is "<<val;
    return 0;
}