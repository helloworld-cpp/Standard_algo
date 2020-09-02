// author -: Sheikh Farhan //
//Length of the largest subarray with contiguous elementsy//
// O(n*n) //
# include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int i,j,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	int count=1;
		for(i=0;i<n-1;i++){
			int maxi = a[i];int mini = a[i];
			for(j=i+1;j<n;j++){
				maxi = max(maxi,a[j]);	mini = min(mini,a[j]);
				if(maxi-mini == (j-i)){count = max(count,j-i+1);}
			}
		}
	cout<<count<<endl;

}