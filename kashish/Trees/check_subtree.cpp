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
bool identical(Node *root1, Node *root2){
    if(!root1 && !root2)
        return true;
    if(!root1 || !root2)
        return false;
    if(root1->data != root2->data)
        return false;
    if(identical(root1->left, root2->left) && identical(root1->right, root2->right))
        return true;
    return false;
}
bool subtree(Node *root, Node *root1){
    queue<Node*> q;
    q.push(root);
    bool isident;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if(temp->data == root1->data){
            isident = identical(temp, root1);
        }
        if (isident == true)
            return true;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return false;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    Node *root1 = new Node(3);
    root1->left = new Node(6);
    root1->right = new Node(7);
    cout<<subtree(root, root1);
    return 0;
}