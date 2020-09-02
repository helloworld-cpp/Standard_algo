// author -: Sheikh Farhan //
//Minimum Depth of a Binary Tree//
//O(log(n))//
# include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node* left = NULL;
	node* right = NULL;
	node(int data){
		this->key = data;
		this->left = NULL;
		this->right = NULL;
	}
};
int find(node* root){
	if(root == NULL) return 0;
	if((root->left != NULL && root->right == NULL)){return 1+find(root->left);}
	if((root->left == NULL && root->right != NULL)){return 1+find(root->right);}
	return min(1+find(root->left),1+find(root->right));
}

int main(){
	node* root = NULL;
	root= new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->right->right = new node(60);
	root->right->right->left = new node(2);
	root->left->right = new node(40);
	cout<<find(root);
	cout<<endl;
}
