// author -: Sheikh Farhan //
//Find the smallest positive integer value that cannot be represented as sum of any subset of a given array//
// O(n) //
# include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int i,j,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	int res=1;
	for(i=0;i<n && a[i]<=res;i++){
		res = res+a[i];
	}
	cout<<res<<endl;
}