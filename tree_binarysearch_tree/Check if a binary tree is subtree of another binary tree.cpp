// author -: Sheikh Farhan //
//Check if a binary tree is subtree of another binary tree// 
// O(n) idea inorder And preorder/postorder must be subset of the big tree respectively //

# include <bits/stdc++.h>
using namespace std;
vector <int> i1,i2,p1,p2;
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


bool isSub(vector<int> v1, vector<int> v2){
	int i=0,j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i] == v2[j]){
			i++; j++;
			if(j==v2.size()){return true;}
		}
		else{
			i=i-j+1;
			j=0;
		}
	}
}

void preorder1(node* root){
	if(root == NULL) return;
	p1.push_back(root->key);
	preorder1(root->left);
	preorder1(root->right);
}
void preorder2(node* root){
	if(root == NULL) return;
	p2.push_back(root->key);
	preorder2(root->left);
	preorder2(root->right);
}
void inorder1(node* root){
	if(root == NULL) return;
	inorder1(root->left);
	i1.push_back(root->key);
	inorder1(root->right);
}
void inorder2(node* root){
	if(root == NULL) return;
	inorder2(root->left);
	i2.push_back(root->key);
	inorder2(root->right);
}

bool check(node* root1 ,node* root2){
	inorder1(root1); inorder2(root2);
	preorder1(root1); preorder2(root2);
	if(isSub(i1,i2) && isSub(p1,p2)){cout<<"Yes \n";}
	else{cout<<"No \n";}
}

int main(){
	node * root1 = NULL;
	root1 = new node(20);
	root1->left = new node(8);
	root1->right = new node(22);
	root1->left->left = new node(5);
	root1->left->right = new node(3);
	root1->left->right->left = new node(10);
	root1->left->right->right = new node(14);
	root1->right->left = new node(4);
	root1->right->right = new node(25);

	node* root2 = NULL;
	root2 = new node(3);
	root2->left = new node(10);
	root2->right = new node(14);
	check(root1,root2);
}
