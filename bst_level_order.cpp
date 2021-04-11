#include<bits/stdc++.h>
using namespace std;
struct Node
{
	char data;
	Node *left;
	Node *right;
};
Node *Insert(Node *root, int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data<=root->data)
		root->left = Insert(root->left, data);
	else root->right = Insert(root->right, data);
	return root;
}
void LevelOrder(Node *root){
	if(root == NULL){
		cout<<"Empty tree \n";
		return;
	}
	queue<Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node *current = Q.front();
		Q.pop();
		cout<<current->data<<" ";
		if(current->left!=NULL)
			Q.push(current->left);
		if(current->right!=NULL)
			Q.push(current->right);
	}
}
int main(){
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	LevelOrder(root);
}