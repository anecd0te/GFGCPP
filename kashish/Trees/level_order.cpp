#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};
void right_to_left_levelOrder(Node *root, vector<int> &ans){
	if(!root)
		return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		vector<int> a;
		int size = q.size();
		Node *temp = q.front();
		q.pop();
		ans.push_back(temp->data);
		if(temp->right)
			q.push(temp->right);
		if(temp->left)
			q.push(temp->left);
	}
}
void levelOrder(Node *root, vector<int> &ans){
	if(!root)
		return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		vector<int> a;
		int size = q.size();
		Node *temp = q.front();
		q.pop();
		ans.push_back(temp->data);
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
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
	levelOrder(root, v);
	for(auto i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	vector<int> v1;
	right_to_left_levelOrder(root, v1);
	for(auto i = 0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	return 0;

}