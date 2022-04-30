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
void findparent(Node *root,Node *parent, map<Node*, Node*> &par){
    if(!root)
        return;
    par[root] = parent;
    findparent(root->left, root, par);
    findparent(root->right, root, par);

}
Node *findNode(Node *root, int target){
    if(!root)
        return NULL;
    if(root->data==target)
        return root;
    Node *l = findNode(root->left, target);
    Node *r = findNode(root->right, target);
    if (l) return l;
    if (r) return r;
    return NULL;
}
vector<int> kdis(Node *root, int target, int k){
    vector<int> ans;
    if(!root)
        return ans;
    map<Node*, Node*> par;
    findparent(root, NULL, par);
    Node *node = findNode(root, target);
    if(!node)
        return ans;
    int level = 0;




}
int main(){
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->left->right->left = new Node(7);
    // root->left->right->right = new Node(6);
    // root->left->right->left->left = new Node(8);
                //     20
                //     /\
                //    8  22
                //   / \
                // 4   12
                //     / \
                //   10  14
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    int target = 8, k = 2;
    vector<int> ans = kdis(root, target, k);
    for(auto x : ans)
        cout<<x<<" ";
    return 0;
}