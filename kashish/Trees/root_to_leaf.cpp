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
void root_leaf(Node *root, vector<int> &mid_ans, vector<vector<int>> &ans){
    if(!root)
        return;
    mid_ans.push_back(root->data);
    if(!root->left && !root->right)
        ans.push_back(mid_ans);
    if(root->left)
        root_leaf(root->left, mid_ans, ans);
    if(root->right)
        root_leaf(root->right, mid_ans, ans);
    mid_ans.pop_back();
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    vector<vector<int>> ans;
    vector<int> mid_ans;
    root_leaf(root, mid_ans, ans);
    for(auto x:ans){
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}