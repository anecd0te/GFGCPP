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
void morris(Node *root){
    Node *prev;
    Node *curr = root;
    while(curr){
        if(!curr->left){
            cout<<curr->data<<" ";
            curr = curr->right;
        }
        else{
            prev = curr->left;
            while(prev->right!=NULL && prev->right!=curr){
                prev = prev->right;
            }
            if(!prev->right){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                cout<<curr->data<<" ";
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }
}
int main(){
    //         50
    //       /    \
    //     40      60
    //   /    \      \
    // 30      45     65
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->left = new Node(30);
    root->left->right = new Node(45);
    root->right->right = new Node(65);
    morris(root);
    return 0;  
}