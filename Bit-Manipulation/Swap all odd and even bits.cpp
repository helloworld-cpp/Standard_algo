// author -: sheikh farhan //
// Swap all odd and even bits //
// O(1) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve(int n){
	int e_num = n & 0xAAAAAAAA;
	int o_num = n & 0x55555555;
	e_num = e_num >> 1;
	o_num = o_num << 1;
	return e_num | o_num ;
}
int main(){
	int n; cin>>n;
	cout<<solve(n)<<endl;
}
