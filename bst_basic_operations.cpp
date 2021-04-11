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
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
BstNode *Insert(BstNode *root, int data){
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data<=root->data){
		root->left = Insert(root->left, data);
	}
	else root->right = Insert(root->right, data);
	return root;
}
bool Search(BstNode *root, int data){
	if(root == NULL){
		return false; 
	}
	else if(root->data == data)
		return true;
	else if(data<=root->data)
		return Search(root->left, data);
	else return Search(root->right, data);
}
int Min(BstNode *root){
	if(root == NULL){
		cout<<"Error: Tree is empty";
		return -1;
	}
	else if(root->left==NULL)
		return root->data;
	else return Min(root->left);
}
int FindHeight(BstNode *root){
	if(root == NULL){
		return -1;
	}
	else return max(FindHeight(root->left),FindHeight(root->right))+1;
}
int main(){
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,1);
	root = Insert(root,12);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
	int ans = Min(root);
	cout<<"minimum element is "<<ans<<"\n";
	int height = FindHeight(root);
	cout<<"Height is "<<height<<"\n";
}