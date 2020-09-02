// author -: Sheikh Farhan //
//Check if a given array can represent Preorder Traversal of Binary Search Tree//
// O(n) using stack //
# include <bits/stdc++.h>
using namespace std;

bool check(int a[],int n){
	stack <int> s;
	int root = INT_MIN;
	int i;
		for(i=0;i<n;i++){
			if(a[i] < INT_MIN){return false;}
			else{
				while(!s.empty() && a[i] > s.top()){
				root = s.top();
				s.pop();
				}
				s.push(a[i]);
			}
		}
		return true;
}

int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	if(check(a,n)){
		cout<<"Yes \n";
	}
	else{
		cout<<"No \n";
	}
}