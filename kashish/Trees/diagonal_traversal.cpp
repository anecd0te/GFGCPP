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
void solve(Node* root, map<int, vector<int>> &mp, int d){
    if(!root)
        return;
    mp[d].push_back(root->val);
    if(root->left)
        solve(root->left, mp, d+1);
    if(root->right)
        solve(root->right, mp, d);
}
vector<int> diagonal(Node* root){
    if(!root)
        return {};
    map<int,vector<int>> mp;
    vector<int> ans;
    int d = 0;
    solve(root, mp, d);
    for(auto x : mp){
        for(auto y: x.second)
            ans.push_back(y);
    }
    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    vector<int> v = diagonal(root);
    for(auto x: v){
        cout<<x<<" ";
    }
    return 0;
}