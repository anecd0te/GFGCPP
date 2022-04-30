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
bool search(Node *root, int key){
    if(!root)
        return false;
    if(root->data == key)
        return true;
    if(key<root->data)
        return search(root->left, key);
    else return search(root->right, key);    
}
int main(){
    Node *root = new Node(100);
    root->left = new Node(80);
    root->right = new Node(120);
    root->left->left = new Node(60);
    root->left->right = new Node(90);
    root->right->left = new Node(110);
    root->right->right = new Node(130);
    root->right->left->right = new Node(115);
    int key = 131;
    bool ans = search(root, key);
    ans?cout<<"Present":cout<<"Absent";
    return 0;
}