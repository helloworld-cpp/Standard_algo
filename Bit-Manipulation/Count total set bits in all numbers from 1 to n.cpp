// author -: sheikh farhan //
// Count total set bits in all numbers from 1 to n //
// O(n) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int find(int n){
	vector <int> v(n+1);
	v[0]=0;
	for(int i=0;i<=n;i++){
		v[i]= (v[i/2] + i%2);
	}
	int sum=0;
		for(int i=0;i<n+1;i++){
			sum += v[i];
		}
	return sum;
}
int main(){
	int n; cin>>n;
	cout<<find(n)<<endl;
}