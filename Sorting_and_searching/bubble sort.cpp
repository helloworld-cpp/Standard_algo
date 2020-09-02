// author -: sheikh farhan //
// bubble sort//
// O(n*n) //
# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int i,j,n; cin>>n; int a[n];
	for(i=0;i<n;i++){cin>>a[i];}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i] > a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	for(i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
}