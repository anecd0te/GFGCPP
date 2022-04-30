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
void level(Node *root){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
Node* util(Node *root){
    while(root->right)
        root = root->right;
    return root;
}
Node *del(Node *root, int key){
    if(!root)
        return NULL;
    if(key<root->data){
        root->left = del(root->left, key);
    }
    else if(key > root->data){
        root->right = del(root->right, key);
    }
    else if(key==root->data){
        if(!root->left && !root->right)
            return NULL;
        else if(root->left && root->right){
            Node *temp;
            temp = util(root->left);
            root->data = temp->data;
            root->left = del(root->left, temp->data);
            return root;
        }
        else if(root->left)
            return root->left;
        else if(root->right)
            return root->right;
    }
    return root;
    
}
int main(){
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->right = new Node(45);
    root->left->right->left = new Node(43);
    root->right->left = new Node(55);
    root->right->right = new Node(66);
    root->right->left->right = new Node(58);
    root->right->left->right->left = new Node(57);
    level(root);
    int key = 60;
    root = del(root, key);
    cout<<endl;
    level(root);
    return 0;
}