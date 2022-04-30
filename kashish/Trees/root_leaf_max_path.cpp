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
void maxi_sum(Node *root, int curr_sum, int &max_sum){
    if(!root)
        return;
    curr_sum += root->data;
    if(!root->left && !root->right)
        max_sum = max(curr_sum, max_sum);
    maxi_sum(root->left, curr_sum, max_sum);
    maxi_sum(root->right, curr_sum, max_sum);
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int curr_sum = 0, max_sum = 0;
    maxi_sum(root, curr_sum, max_sum);
    cout<<max_sum;
    return 0;
}