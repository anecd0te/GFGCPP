#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
	int data;
	BstNode *left;
	BstNode *right;
};
BstNode *GetNewNode(int data){
	BstNode *temp = new BstNode();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
BstNode *Insert(BstNode *root, int data){
	if(root == NULL)
		root = GetNewNode(data);
	else if(data <= root->data)
		root->left = Insert(root->left, data);
	else root->right = Insert(root->right, data);
	return root;
}
bool Search(BstNode *root, int data){
	if(root == NULL)
		return false;
	else if(root->data==data)
		return true;
	else if(data<=root->data)
		return Search(root->left, data);
	else return Search(root->right, data);
}
/*
int FindMin(BstNode *root){
	if(root == NULL){
		cout<<"Error!! Empty tree \n";
		return -1;
	}
	else if(root->left == NULL)
		return root->data;
	else return FindMin(root->left);
}*/
BstNode *FindMin(BstNode *root){
	while(root->left != NULL)
		root = root->left;
	return root;
}
int FindHeight(BstNode *root){
	if(root == NULL)
		return -1;
	else return max(FindHeight(root->left), FindHeight(root->right))+1;
}
void LevelOrder(BstNode *root){
	if(root == NULL){
		cout<<"Error!!Queue is empty \n";
		return;
	}
	queue<BstNode*>Q;
	Q.push(root);
	while(!Q.empty()){
		BstNode *current = Q.front();
		Q.pop();
		cout<<current->data<<" ";
		if(current->left!=NULL)
			Q.push(current->left);
		if(current->right!=NULL)
			Q.push(current->right);
	}
}
void PreOrder(BstNode *root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BstNode *root){
	if (root==NULL)
	{
		return;
	}
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}
void PostOrder(BstNode *root){
	if(root == NULL)
		return;
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}
/*Deleting a node from BST*/
BstNode *Delete(BstNode *root, int data){
	if(root == NULL){
		return root;
	}
	else if(data < root->data)
		root->left = Delete(root->left, data);
	else if(data > root->data)
		root->right = Delete(root->right, data);
	else{
		//Case 1: No Child
		if(root->left == NULL && root->right == NULL){
			delete root;
			root == NULL;
		}
		//Case 2: One child
		else if(root->left == NULL){
			BstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			BstNode *temp = root;
			root = root->left;
			delete temp;
		}
		//Case 3: 2 child
		else {
			BstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}
int main(){
	BstNode *root = NULL;
	root = Insert(root, 10);
	root = Insert(root, 9);
	root = Insert(root, 15);
	root = Insert(root, 8);
	root = Insert(root, 11);
	root = Insert(root, 19);
	int number;
	cout<<"Enter the number to be searched \n";
	cin>>number;
	if(Search(root, number)==true)
		cout<<"Found \n";
	else cout<<"Not Found \n";
	BstNode *min = FindMin(root);
	cout<<"Minimum element is "<<min->data<<"\n";
	int height = FindHeight(root);
	cout<<"Height of the tree is "<<height<<"\n";
	cout<<"LevelOrder\n";
	LevelOrder(root);
	cout<<"\nPreOrder\n";
	PreOrder(root);
	cout<<"\nInOrder\n";
	InOrder(root);
	cout<<"\nPostOrder\n";
	PostOrder(root);
	root = Delete(root, 15);
	cout<<"After deletion Inorder:\n";
	InOrder(root);
	cout<<"\n";
	return 0;
}