#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
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
int Height(BstNode *root){
	if(root == NULL){
		return -1;
	}
	int leftheight = Height(root->left);
	int rightheight = Height(root->right);
	return max(leftheight, rightheight) + 1;
	}
int main(){
	BstNode *rootPtr = NULL;
	rootPtr = Insert(rootPtr, 15);
	rootPtr = Insert(rootPtr, 10);
	rootPtr = Insert(rootPtr, 20);
	rootPtr = Insert(rootPtr, 25);
	rootPtr = Insert(rootPtr, 8);
	rootPtr = Insert(rootPtr, 12);
	/*
	int number;
	cout<<"Enter the number"<<"\n";
	cin>>number;
	if (Search(rootPtr,number)==true)
	{
		cout<<number<<" Found"<<"\n";
	}
	else cout<<"Not found"<<"\n";*/
	int height = Height(rootPtr);
	cout<<"Height of the tree is "<<height<<"\n";
	return 0;
}