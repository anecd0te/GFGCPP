#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left= NULL;
        right = NULL;
    }
};
vector<int> bottom(Node *root){
    if(!root)
        return {};
    vector<int> ans;
    queue<pair<int, Node*>> q;
    map<int, int> mp;
    q.push(make_pair(0,root));
    while(!q.empty()){
        pair<int, Node*> p = q.front();
        q.pop();
        int hd = p.first;
        Node *temp = p.second;
        mp[hd] = temp->data;
        if(temp->left)
            q.push(make_pair(hd-1, temp->left));
        if(temp->right)
            q.push(make_pair(hd+1, temp->right));
    }
    for(auto x:mp){
        ans.push_back(x.second);
    }
    return ans;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> ans = bottom(root);
    for(auto x : ans){ 
        cout<<x<<" ";
    }
    return 0 ;
}