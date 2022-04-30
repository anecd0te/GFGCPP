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
Node *insertion(Node *root, int val){
    if(!root){
        Node *root = new Node(val);
        return root;
        }
    if(root->data == val)
        return root;
    else if(val > root->data){
        root->right = insertion(root->right, val);
    }
    else{
        root->left = insertion(root->left, val);
    }
    return root;
}
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
int main(){
        //       30
        //    /     \
        //   25     35
        //  / \    /  \
        // 22  27 33  37
    Node *root = new Node(30);
    root->left = new Node(25);
    root->right = new Node(35);
    root->left->left = new Node(22);
    root->left->right = new Node(27);
    root->right->left = new Node(33);
    root->right->right = new Node(37);
    int val = 36;
    level(root);
    insertion(root, val);
    cout<<endl;
    level(root);
    return 0;
}