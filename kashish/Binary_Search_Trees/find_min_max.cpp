#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
struct Pair{
    int max;
    int min;
};
void mnmx(Node *root, Pair &minmax){
    Node *temp_min = root;
    Node *temp_max = root;
    while(temp_min->left)
        temp_min = temp_min->left;
    minmax.min = temp_min->data;
    while(temp_max->right)
        temp_max = temp_max->right;
    minmax.max = temp_max->data;
}
int main(){
    Node *root = new Node(70);
    root->left = new Node(60);
    root->right = new Node(80);
    root->left->left = new Node(55);
    root->left->right = new Node(65);
    root->right->left = new Node(75);
    root->right->right = new Node(85);
    Pair minmax;
    mnmx(root, minmax);
    cout<<"Minimum is "<<minmax.min<<endl;
    cout<<"Maximum is "<<minmax.max<<endl;
    return 0;
}