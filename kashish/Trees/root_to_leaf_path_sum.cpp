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
void path_sum(Node *root,int curr_sum, int sum, bool &sumfound){
    if(!root)
        return;
    curr_sum += root->data;
    
    if(!root->left && !root->right){
        cout<<curr_sum<<" "<<sum<<endl;
        if(curr_sum==sum)
            sumfound = true;
    }
    path_sum(root->left, curr_sum, sum, sumfound);
    path_sum(root->right, curr_sum, sum, sumfound);
}
int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  int sum = 11;
  bool sumfound=false;
  path_sum(root,0, sum, sumfound);
  cout<<sumfound;
  return 0; 
}