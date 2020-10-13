#include<bits/stdc++.h>
using namespace std;
struct BstNode{
	int data;
	BstNode *left;
	BstNode *right;
};
BstNode *GetNewNode(int data){
	BstNode *newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
BstNode *Insert(BstNode *root, int data){
	if(root == NULL){ //Empty Tree
		root = GetNewNode(data);
	}
	else if(data<=root->data){
		root->left = Insert(root->left, data);
	}
	else root->right = Insert(root->right, data);
	return root;
}
bool Search(BstNode *root, int data){
	if(root == NULL)return false;
	else if(root->data == data) return true;
	else if(data<=root->data)return(Search(root->left, data));
	else return Search(root->right, data);
}
int findMin(BstNode *root){
	if(root == NULL){
		cout<<"Tree is empty"<<"\n";
		return -1;
	}
	else if(root->left == NULL){
		return root->data;
	}
	return findMin(root->left);
}
int findMax(BstNode *root){
	if(root == NULL){
		cout<<"Tree is empty"<<"\n";
		return -1;
	}
	else if(root->right == NULL){
		return root->data;
	}
	return findMax(root->right);
}
int main(){
	BstNode *rootPtr = NULL;
	rootPtr = Insert(rootPtr, 15);
	rootPtr = Insert(rootPtr, 10);
	rootPtr = Insert(rootPtr, 20);
	rootPtr = Insert(rootPtr, 25);
	rootPtr = Insert(rootPtr, 8);
	rootPtr = Insert(rootPtr, 12);
	rootPtr = Insert(rootPtr, 2);
	int min = findMin(rootPtr);
	int max = findMax(rootPtr);
	cout<<"Minimum element is "<<min<<" and maximum element is "<<max<<"\n";
	return 0;
}