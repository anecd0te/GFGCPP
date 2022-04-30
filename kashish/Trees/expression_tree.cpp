#include<bits/stdc++.h>
using namespace std;
struct Node{
    char data;
    Node *left;
    Node *right;
    Node(char x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
Node *ptree(string s, int &ptr){
    if(ptr == s.size())
        return NULL;
    Node *temp = new Node(s[ptr]);
    if(s[ptr]=='*' || s[ptr] == '/' || s[ptr] == '+' || s[ptr] == '-'){
        ptr++;
        temp->left = ptree(s, ptr);
        temp->right = ptree(s, ptr);
        return temp;
    }
    else{
        ptr++;
        return temp;
    }
}
void inorder(Node *root){
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
Node *postTree(string s, int &ptr){
    if(ptr == -1)
        return NULL;
    Node *temp = new Node(s[ptr]);
    if(s[ptr]=='*' || s[ptr] == '/' || s[ptr] == '+' || s[ptr] == '-'){
        ptr--;
        temp->right = postTree(s, ptr);
        temp->left = postTree(s, ptr);
        return temp;
    }
    else{
        ptr--;
        return temp;
    }
}
int main(){
    string s =  "*+34/76";
    string post = "ab-c+de/*";
    int ptr = 0;
    int postptr = post.size()-1;
    Node *root = ptree(s, ptr);
    Node *postroot = postTree(post, postptr);
    inorder(root);
    cout<<endl;
    inorder(postroot);
    return 0;
}