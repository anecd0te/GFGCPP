#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
};
Node *Insert(Node *root, int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data){
		root->left = Insert(root->left, data);
	}
	else root->right = Insert(root->right, data);
	return root;
}
bool IsSubtreeLesser(Node *root, int value){
	if(root == NULL){
		return true;
	}
	if(root->data<=value
		&& IsSubtreeLesser(root->left, value)
		&& IsSubtreeLesser(root->right, value))
		return true;
	else
		 return false;
}
bool IsSubtreeGreater(Node *root, int value){
	if(root == NULL)
		return true;
	if(root->data>=value
		&& IsSubtreeGreater(root->left, value)
		&& IsSubtreeGreater(root->right, value))
		return true;
	else 
		return false;
}
/*
bool IsBinarySearchTree(Node *root){
	if(root == NULL)
		return true;
	if(IsSubtreeLesser(root->left, root->data)
		&& IsSubtreeGreater(root->right, root->data)
		&& IsBinarySearchTree(root->left)
		&& IsBinarySearchTree(root->right))
		return true;
	else 
		return false;

}
*/
bool IsBinarySearchTreeImproved(Node *root, int minval, int maxval){
	if(root == NULL)
		return true;
	if(root->data > minval && root->data < maxval
		&& IsBinarySearchTreeImproved(root->left, minval, root->data)
		&& IsBinarySearchTreeImproved(root->right, root->data, maxval))
		return true;
	else 
		return false;
}
bool IsBinarySearchTree(Node *root){
	return IsBinarySearchTreeImproved(root, INT_MIN, INT_MAX);
}
int main(){
	Node *root = NULL;
	root = Insert(root, 7);
	root = Insert(root, 4);
	root = Insert(root, 1);
	root = Insert(root, 6);
	root = Insert(root, 9);
	bool ans = IsBinarySearchTree(root);
	cout<<"The tree is "<< ans;
	//cout<<INT_MIN<<"\n";
	//cout<<INT_MAX<<"\n";
	return 0;
}