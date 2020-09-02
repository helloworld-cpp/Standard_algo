// author -: Sheikh Farhan //
//Convert array into Zig-Zag fashion//
// O(n) //
# include <bits/stdc++.h>
using namespace std;
void solve(int a[],int n){
	bool flag = true;
	int i;
	for(i=0;i<n-1;i++){
		if(flag){
			if(a[i]>a[i+1]){swap(a[i],a[i+1]);}
		}
		else{
			if(a[i]<a[i+1]){swap(a[i],a[i+1]);}
		}
		flag = !flag;
	}
}
int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	solve(a,n);
	for(i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;

}