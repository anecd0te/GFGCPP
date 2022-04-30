#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
void leftView(Node* root){
    if(!root)
        return;
    bool isFirst = true;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(!temp){
            if(q.size()==0)
                return;
            q.push(NULL);
            isFirst = true;
        }
        else{
            if(isFirst){
            cout<<temp->val<<" ";
            isFirst = false;
        }
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);
    root->right->right->right = new Node(8);
    leftView(root);
    return 0;
}