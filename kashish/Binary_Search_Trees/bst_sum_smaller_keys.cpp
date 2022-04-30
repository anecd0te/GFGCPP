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
void summ(Node *root, int &sum){
    if(!root)
        return ;
    summ(root->left, sum);
    sum += root->data;
    root->data = sum;
    summ(root->right, sum);
}
void level(Node *root){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
int main(){
        //         30
        //       /    \
        //     20      40
        //   /    \      \
        // 13     24      42
    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(13);
    root->left->right = new Node(24);
    root->right->right = new Node(42);
    int sum = 0;
    summ(root, sum);
    level(root);
    return 0;
}