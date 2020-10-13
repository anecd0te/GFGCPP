//https://gist.github.com/mycodeschool/9465a188248b624afdbf
//MyCodeSchool 
//https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
Node *FindMin(Node *root){
	while (root->left!=NULL)
		root = root->left;
	return root;
}
Node *Delete(Node *root, int data){
	if(root == NULL)
		return root;
	else if(data<root->data)
		root->left = Delete(root->left, data);
	else if(data > root->data)
		root->right = Delete(root->right, data);
	else {
		//CASE 1: No child
		if(root->left==NULL && root->right == NULL){
			delete root;
			root = NULL;
		}
		//Case 2: only one child
		else if(root->left == NULL){
			Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			Node *temp =  root;
			root = root->left;
			delete temp;
		}
		//Case 3: 2 children
		else {
			Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}
void Inorder(Node *root){
	if(root == NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
Node *Insert(Node *root, int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	if(data<=root->data)
		root->left = Insert(root->left, data);
	else
		root->right = Insert(root->right, data);
	return root;
}
int main(){
	Node *root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
	root = Delete(root,5);
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
	return 0;
}