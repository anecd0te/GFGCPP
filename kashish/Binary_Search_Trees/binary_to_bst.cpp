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
    stack<Node*> st;
    // st.push(root);
    vector<int> ans;
    while(root || !st.empty()){
        while(root){
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();
        ans.push_back(root->data);
        root = root->right;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}
void retrieve(Node *root, vector<int> &ans){
    if(!root)
        return;
    //retrieving data in inorder 
    retrieve(root->left, ans);
    ans.push_back(root->data);
    retrieve(root->right, ans);
}
void fillbst(Node *root, vector<int> ans, int &i){
    if(!root)
        return;
    fillbst(root->left, ans, i);
    root->data = ans[i++];
    fillbst(root->right, ans, i);
}
void bst(Node *root){
    if(!root)
        return;
    vector<int> ans;
    retrieve(root, ans);
    sort(ans.begin(), ans.end());
    int i = 0;
    fillbst(root, ans, i);
}
int main(){
    Node *root = new Node(25);
    root->left = new Node(30);
    root->right = new Node(32);
    root->left->left = new Node(17);
    root->left->right = new Node(22);
    root->right->right = new Node(28);
    inorder(root);
    bst(root);
    cout<<endl;
    inorder(root);
    return 0;
}