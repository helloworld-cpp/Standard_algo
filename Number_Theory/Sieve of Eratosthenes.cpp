// author -: Sheikh Farhan //
//Sieve of Eratosthenes//
//  O(n*log(log(n)))  // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
set<int>s;
void findPrime(int n){
	bool prime[n+1]; memset(prime,true,sizeof(prime));
	int i,j;
		for(i=2;i*i<=n;i++){
			if(prime[i]){
				for(j=i*i;j<=n;j+=i){
					prime[j]=false;
				}
			}
		}
		for(i=2;i<=n;i++){if(prime[i]){s.insert(i);}}
}
int main(){
	int n; cin>>n;
	findPrime(n);
	for(auto x:s){cout<<x<<" ";}cout<<endl;
}