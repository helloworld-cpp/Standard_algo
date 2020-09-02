// author -: Sheikh Farhan //
//Count triplets with sum smaller than a given value//
// O(n*n) //
# include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int i,j,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	int sum; cin>>sum;
	sort(a,a+n);
	int ans=0;
		for(i=0;i<n-2;i++){
			int j=i+1,k=n-1;
			while(j<k){
				if(a[i]+a[j]+a[k] >= sum){k--;}
				else{ans += k-j;j++;}
			}
		}
		cout<<ans<<endl;
}