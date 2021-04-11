#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *left;
	Node *right;
};
Node *newNode(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
int HeightBinary(Node *node){
	if(node==NULL)
		return -1;
	int lh = HeightBinary(node->left);
	int rh = HeightBinary(node->right);
	if(lh>rh){
		return lh+1;
	}
	else return rh+1;
}
int main(){
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout<<"Height of the binary tree is "<<HeightBinary(root);
	return 0;

}