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
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
void level_rl(Node *root){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);

    }
}
void level_rl_reverse(Node *root){
    if(!root)
        return;
    queue<Node*> q;
    stack<Node*> st;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        st.push(temp);
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
    }
    while(!st.empty()){
        cout<<st.top()->data<<" ";
        st.pop();
    }
}
int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->right = new Node(6);
//   level(root);
//   level_rl(root);
  level_rl_reverse(root); // 4 5 6 2 3 1
  return 0;  
}