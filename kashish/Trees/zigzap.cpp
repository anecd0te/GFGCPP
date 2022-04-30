#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};
void zigzag(Node *root, vector<int> &v){
	if(!root)
		return;
	stack<Node*> s1;
	stack<Node *>s2;
	s1.push(root);
	while(!s1.empty()||!s2.empty()){
		while(!s1.empty()){
			Node *temp = s1.top();
			v.push_back(temp->data);
			s1.pop();
			if(temp->right)
				s2.push(temp->right);
			if(temp->left)
				s2.push(temp->left);
		}
		while(!s2.empty()){
			Node *temp = s2.top();
			v.push_back(temp->data);
			s2.pop();
			if(temp->left)
				s1.push(temp->left);
			if(temp->right)
				s1.push(temp->right);
		}
	}
}
int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	vector<int> v;
	zigzag(root, v);
	for(auto i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}