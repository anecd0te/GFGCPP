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
void inorder(Node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* constbst(vector<int> post, int start, int end){
    if(start>end)
        return NULL;
    Node *root = new Node(post[end--]);
    int i;
    for(i = end;i>=start;i--){
        if(post[i]<root->data)
            break;
    }
    root->right = constbst(post, i+1, end);
    root->left = constbst(post, start, i);
    return root;
    
}
int main(){
    vector<int> post = {6,10, 35, 47, 44, 40, 30};
    Node *root = constbst(post, 0, post.size()-1);
    inorder(root);
    return 0;  
}