// author -: Sheikh Farhan //
//Lowest Common Ancestor in a Binary Search Tree.// 
// O(h) //

# include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	int hd;
	node* left;
	node* right;
	node(int data){
		this->key = data;
		this->hd =  INT_MAX;
		this->left = NULL;
		this->right = NULL;
	}
};

int lca(node* root,int a,int b){
	if(root == NULL) {return -1;}
	if((a < root->key ) && (b < root->key)){
		return lca(root->left,a,b);
	}
	else if((a > root->key ) && (b > root->key)){
		return lca(root->right,a,b);
	}
	else{
		return root->key;
	}
}


int main(){
	node *root = new node(20);  
    root->left = new node(8);  
    root->right = new node(22);  
    root->left->left = new node(4);  
    root->left->right = new node(12);  
    root->left->right->left = new node(10);  
    root->left->right->right = new node(14);  

    int a,b; a=14; b=8;
    int res = lca(root,a,b);
    cout<<res<<endl;
}
