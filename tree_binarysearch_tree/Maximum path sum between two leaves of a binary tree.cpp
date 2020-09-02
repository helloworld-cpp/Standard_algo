// author -: Sheikh Farhan //
//Maximum path sum between two leaves of a binary tree//

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
	int temp;
	if(root->left == NULL && root->right != NULL){temp = root->key+right;}
	else if (root->left != NULL && root->right == NULL){temp = root->key+left;}
	else{temp = root->key+ max(left,right);}
	// int ans = max(temp,left+right+root->key); // "ans" might store the path sum from a leaf node to current node //
	res = max(left+right+root->key,res);
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