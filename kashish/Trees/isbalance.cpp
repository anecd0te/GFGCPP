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
int height(Node* root, bool &isbal){
    if(!root)
        return 0;
    int lh = height(root->left, isbal);
    int rh = height(root->right, isbal);
    if(abs(lh-rh)>1)
        isbal = false;
    return 1 + max(lh, rh);
}

bool isbalanced(Node *root){
    bool isbal = true;
    height(root, isbal);
    return isbal;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);
    // vector<int> v = diagonal(root);

    string ans = isbalanced(root)?"Yes":"No";
    cout<<ans;
    return 0;
}