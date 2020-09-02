// author -: Sheikh Farhan //
//Diameter of a Binary Tree//
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

int find(node* root,int& res){
	if(root == NULL) return 0; //base condition//

	int left = find(root->left,res); // hypothesis //
	int right = find(root->right,res);

	int temp = 1+max(left,right); // induction //
	int ans = max(temp,left+right+1);
	res = max(ans,res);
	return temp; // temp hi ans lake de raha hai na//
}


int main(){
	node* root = NULL;
	root= new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->right = new node(5);
	root->left->right->right = new node(6);
	root->left->right->right->right = new node(7);
	root->left->left = new node(4);
	root->left->left->left = new node(8);
	int res  = INT_MIN;
	find(root,res);
	cout<<res<<endl;
}