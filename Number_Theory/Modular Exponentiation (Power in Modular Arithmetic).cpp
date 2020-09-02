// author -: Sheikh Farhan //
//Modular Exponentiation (Power in Modular Arithmetic)//
// O(log(y) //
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int power(ll x,ll y,ll mod){
	ll res=1;
	x = x%mod;
	if(x == 0) return 0;
	while(y>0){
		if(y&1){res = (res*x)%mod;}
		y = y>>1;
		x = (x*x)%mod;
	}
	return res;
}
int main(){
	ll x,y,mod; cin>>x>>y>>mod;
	cout<<power(x,y,mod)<<endl;
}