// author -: sheikh farhan //
// Find the maximum subarray XOR in a given array //
// O(nlogn) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct tree{
	tree* left;
	tree* right;
	tree(){
		this->left = NULL;
		this->right = NULL;
	}
};
void insert(tree* head,int a){
	tree* current = head;
		for(int i=31;i>=0;i--){
			int temp  = (a>>i)&1;
			if(temp ==1){
				if(current->right == NULL){
					current->right = new tree();
				}
				current = current->right;

			}else{
				if(current->left == NULL){
					current->left = new tree();
				}
				current = current->left;
			}
		}
}
int find(tree* head,int a[], int n){
	int maxi = INT_MIN;
		for(int i=0;i<n;i++){
			tree* current = head;
			int curr_xor = 0;
				for(int j=31;j>=0;j--){
					int temp = (a[i]>>j)&1;
					if(temp ==1){
						if(current->left != NULL){
							curr_xor += pow(2,j);
							current = current->left;
						}
						else{
							current = current->right;
						}
					}else{
						if(current->right != NULL){
							curr_xor += pow(2,j);
							current = current->right;
						}
						else{
							current = current->left;
						}
					}
				}
			if(curr_xor > maxi){maxi = curr_xor;}
		}
	return maxi;	
}
int main(){
	int n; cin>>n;
	tree* head = new tree();
	int a[n],i; for(i=0;i<n;i++){cin>>a[i]; insert(head,a[i]);}
	cout<<find(head,a,n)<<endl;	
}
