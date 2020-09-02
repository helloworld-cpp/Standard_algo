// author -: Sheikh Farhan //
//Remove nodes on root to leaf paths of length < K// 
// O(n) //

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
node* modi(node* root,int level,int k){
	if(root == NULL) return NULL; //base condition//

	root->left = modi(root->left,level+1,k); // left ka ans //
	root->right = modi(root->right,level+1,k); // right ka ans //

	if(root->left==NULL && root->right==NULL && level<k){
		delete root;
		return NULL;
	}
	return root;

}
void inorder(node* root){
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}
int main(){
	int k = 4; 
    node *root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5); 
    root->left->left->left = new node(7); 
    root->right->right = new node(6); 
    root->right->right->left = new node(8); 
    inorder(root);
	cout<<endl;

    node* new_root = modi(root,1,k);

	inorder(new_root);
	cout<<endl;


}