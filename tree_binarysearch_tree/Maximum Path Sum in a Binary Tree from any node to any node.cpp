// author -: Sheikh Farhan //
//Maximum Path Sum in a Binary Tree from any node to any node//

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

	// induction //
	int temp = max(root->key, root->key+max(left,right));  // simply node is checking whether passes left||right sum will be fruitful or not//
	int ans = max(temp,left+right+root->key);
	res = max(ans,res);
	return temp; // temp hi ans lake de raha hai na//
}


int main(){
	node* root = NULL;
	root= new node(10);
	root->left = new node(2);
	root->right = new node(10);
	root->left->left = new node(20);
	root->left->right = new node(1);
	root->right->right = new node(-25);
	root->right->right->left = new node(3);
	root->right->right->right = new node(4);
	int res  = INT_MIN;
	find(root,res);
	cout<<res<<endl;
}