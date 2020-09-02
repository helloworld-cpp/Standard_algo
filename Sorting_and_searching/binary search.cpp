// author -: sheikh farhan //
// binary search//
// log(n) //
# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t; cin>>t;
	while(t--){
		int n,f; cin>>n>>f;
		int a[n]; for(int i=0;i<n;i++){cin>>a[i];}
		int l=0,r=n-1,flag=0;
		while(l<=r){
			int m = (l+r)/2;
			if(a[m] == f){cout<<1<<endl; flag=1;break;}
			else if(a[m] > f){r = m-1;}	
			else{l = m+1;}
		}
		if(flag==0){cout<<-1<<endl;}
	}
}
