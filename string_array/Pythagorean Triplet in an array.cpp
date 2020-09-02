// author -: Sheikh Farhan //
//Pythagorean Triplet in an array//
// O(n*n) //
# include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int i,a[n],j,k;for(i=0;i<n;i++){cin>>j;a[i]=j*j;}
	sort(a,a+n);
	for(i=0;i<n-2;i++){
		j=i+1;
		k=n-1;
		while(j<k){
			if(a[i]+a[j] < a[k]){k--;}
			else if(a[i]+a[j] == a[k]){cout<<"True \n"; return 0;}
			else{j++;}
		}
	}
	cout<<"False \n"; return 0;
}