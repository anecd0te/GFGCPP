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
void vertical(Node* root){
    if(!root)
        return;
    queue<pair<Node*, int>> q;
    map<int, vector<int>> mp;
    q.push(make_pair(root, 0));
    while(!q.empty()){
        pair<Node*, int> p = q.front();
        q.pop();
        Node *temp = p.first;
        int hd = p.second;
        mp[hd].push_back(temp->data);
        if(temp->left)
            q.push(make_pair(temp->left, hd-1));
        if(temp->right)
            q.push(make_pair(temp->right, hd+1));
    }
    for(auto i = mp.begin(); i!=mp.end();i++){
        for(int j = 0;j<i->second.size();j++){
            cout<<mp[i->first][j]<<" ";
        }cout<<endl;
    }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(9);
    root->left->left->right = new Node(7);
    root->left->left->right->right = new Node(8);
    vertical(root);
    return 0;
}