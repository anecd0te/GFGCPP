#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *left;
	Node *right;
};
Node *newNode(int data){
	Node *newNod = new Node();
	newNod->data = data;
	newNod->left = NULL;
	newNod->right = NULL;
	return newNod;
}
int maxDepth(Node *node){
	if(node == NULL){
		return -1;
	}
	else{
		int ldepth = maxDepth(node->left);
		int rdepth = maxDepth(node->right); 
		if(ldepth > rdepth)
			return ldepth+1;
		else return rdepth+1;
	}
}
int main(){
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout<<"Height of the tree is "<<maxDepth(root);
	return 0;
}