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
void inorder(Node *root){
    if(!root)
        return;
    stack<Node *> st;
    while(root || !st.empty()){
        while(root){
            st.push(root);
            root= root->left;
        }
        root = st.top();
        st.pop();
        cout<<root->val<<" ";
        root = root->right;
    }
}
// void inorder(Node* root){
//     if(!root)
//         return;
//     stack<Node*> st;
//     while(root || !st.empty()){
//         while(root){
//             st.push(root);
//             root = root->left;
//         }
//         root = st.top();
//         st.pop();
//         cout<<root->val;
//         root = root->right; 
//     }

// }
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    inorder(root);
    return 0;
}