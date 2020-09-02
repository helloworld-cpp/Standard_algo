// author -: Sheikh Farhan //
//Check whether a binary tree is a full binary tree or not// 
// O(n) //

# include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node* left;
	node* right;
	node(int data){
		this->key = data;
		this->left = NULL;
		this->right = NULL;
	}
};

bool check(node* root){
	if(root->left ==  NULL && root->right == NULL){return true;}
	else if(root->left !=  NULL && root->right == NULL){return false;}
	else if(root->left ==  NULL && root->right != NULL){return false;}
	return check(root->left) && check(root->right);
}

int main(){
	node* root = NULL;
	root = new node(10);
	root->left = new node(2);
	root->right = new node(10);
	root->left->left = new node(20);
	root->left->right = new node(1);
	root->right->left = new node(3);
	root->right->right = new node(4);
	if(check(root)){
		cout<<"Complete \n";
	}
	else{
		cout<<"Incomplete \n";
	}
}