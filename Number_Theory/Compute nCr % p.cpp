// author -: Sheikh Farhan //
// Compute nCr % p //
// O(n) Using Fermat Little Theorem // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int fact(ll n,ll p){
	ll i,res=1;
		for(i=1;i<=n;i++){
			res = (res*i)%p;
		}
		res = res%p;
		return res;
}

int power(ll n,ll r,ll p){
	if(n%p == 0) return 0;
	ll res=1;
	while(r>0){
		if(r&1){res = (res*n)%p;}
		r = r>>1;
		n = (n*n)%p;
	}
	res = res%p;
	return res;
}

int find(ll n,ll r,ll p){
	ll a,b,c;
	a = fact(n,p);
	b = fact(r,p);
	c = fact(n-r,p);
	b = power(b,p-2,p);
	c = power(c,p-2,p);
	ll res = (a*b*c)%p;
	return res;
}

int main(){
	ll n,r,p; cin>>n>>r>>p;
	cout<<find(n,r,p)<<endl;
}

