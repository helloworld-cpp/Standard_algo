// author -: sheikh farhan //
// Binary representation of a given number //
// O(logn) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void find(int n){
	for(int i=31;i>=0;i--){
		int temp = (n>>i)&1;
		if(temp){cout<<1;}
		else{cout<<0;}
	}
}

int main(){
	int n; cin>>n;
	find(n);
	cout<<endl;

}