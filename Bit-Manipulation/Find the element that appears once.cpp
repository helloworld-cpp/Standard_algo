// author -: sheikh farhan //
// Find the element that appears once //
// O(nlogn) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
	int n; cin>>n;
	map<int,int>m;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i]; m[a[i]]++;}
	for(auto x:m){
		if(x.second == 1){cout<<x.first<<endl; break;}
	}

}
