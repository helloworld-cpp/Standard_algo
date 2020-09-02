// author -: Sheikh Farhan //
//Top View of a Binary Tree// 
// O(nlog(n)) //
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
void print(node* root){
	if(root == NULL) return;
	int hd = 0;
	map<int,int>m;
	queue <node*>q;
	root->hd  = hd;
	q.push(root);
		while(!q.empty()){
			node* temp = q.front();
			q.pop();
			hd = temp->hd;
			if(m.count(hd) == 0){m[hd] = temp->key;}
			if(temp->left != NULL){
				temp->left->hd = hd-1;
				q.push(temp->left);
			}
			if(temp->right != NULL){
				temp->right->hd = hd+1;
				q.push(temp->right);
			}
		}
	for(auto x:m){
		cout<<x.second<<" ";
	}

}
int main(){
	node* root = NULL;
	root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->right = new node(4); 
    root->left->right->right = new node(5); 
    root->left->right->right->right = new node(6); 
	print(root);
	cout<<endl;
}