// author -: sheikh farhan //
//merge sort//
// n*log(n) //
# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void merge(int a[],int l,int m,int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int i,j,k;
	int left[n1],right[n2];
		for(i=0;i<n1;i++){
			left[i] = a[l+i];
		}
		for(i=0;i<n2;i++){
			right[i] = a[m+1+i];
		}
	i=0;j=0;k=l;

		while(i<n1 && j<n2){
			if(left[i] < right[j]){ a[k++] = left[i++];}
			else{a[k++] = right[j++];}
		}
		while(i<n1){
			a[k++] = left[i++];
		}
		while(j<n2){
			a[k++] = right[j++];
		}

}

void mergesort(int a[],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++){cout<<a[i]<<" ";}
	cout<<endl;
}