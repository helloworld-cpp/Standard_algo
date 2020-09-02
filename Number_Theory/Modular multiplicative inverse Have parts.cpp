// author -: Sheikh Farhan //
//Modular multiplicative inverse Have parts//
// O(mod) -: Workes on Any Input // 
//2 more algo 1:) when n,mod are coprime 2:) when mod is prime number//
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll find(ll n,ll mod){
	n= n%mod;
	for(ll i=1;i<mod;i++){
		if((n*i) % mod == 1) return i;
	}
	return 0;
}
int main(){
	ll n,mod; cin>>n>>mod;
	cout<<find(n,mod)<<endl;
}