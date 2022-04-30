#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
void rightView(Node* root){
    if(!root)
        return;
    queue<Node*> q;
    bool isFirst = true;
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
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
        }
    }
}
int main(){
    /*             1
                  /  \
                 2    3    
                 \     \
                  5     6
                       / \
                      7   8
                      */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->left = new Node(7);
    root->right->right->right = new Node(8);
    rightView(root);
    return 0;
}    