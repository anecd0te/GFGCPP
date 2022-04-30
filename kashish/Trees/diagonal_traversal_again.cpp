#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
void solve(Node *root, map<int, vector<int>> &mp, int hd){
    if(!root)
        return;
    mp[hd].push_back(root->data);
    if(root->left)
        solve(root->left, mp, hd+1);
    if(root->right)
        solve(root->right, mp, hd);
}
void diagonal(Node *root){
    if(!root)
        return;
    map<int, vector<int>> mp;
    int hd =  0;
    solve(root, mp, hd);
    for(auto x:mp){
        for(auto y:x.second){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    // if(!root)
    //     return;
    // map<int, vector<int>> mp;
    // queue<pair<Node*, int>> q;
    // q.push(make_pair(root, 0));
    // while(!q.empty()){
    //     pair<Node*,int> p = q.front();
    //     q.pop();
    //     Node *temp = p.first;
    //     int hd = p.second;
    //     mp[hd].push_back(temp->data);
    //     if(temp->left)
    //         q.push(make_pair(temp->left, hd+1));
    //     if(temp->right)
    //         q.push(make_pair(temp->right, hd));
    // }
    // for(auto i = mp.begin(); i!=mp.end();i++){
    //     for(int j = 0;j<i->second.size();j++){
    //         cout<<mp[i->first][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    diagonal(root);
    return 0;  
}