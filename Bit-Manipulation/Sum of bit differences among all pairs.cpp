// author -: sheikh farhan //
// Sum of bit differences among all pairs //
// O(n) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int solve(int a[],int n){
	int res=0;
	for(int i=0;i<32;i++){
		int count =0;
		for(int j=0;j<n;j++){
			if(a[j] & 1<<i){
				count++;
			}
		}
		res += 	2*count*(n-count);
	}
	return res;
}
int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	cout<<solve(a,n)<<endl;
}