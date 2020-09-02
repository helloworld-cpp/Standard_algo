// author -: sheikh farhan //
//Kth smallest element//
// averge O(n) - quick sort modification//
# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int quick(int a[],int l,int h){
	int pe = a[h];
	int j,i=l-1;
		for(j=l;j<h;j++){
			if(a[j] < pe){
				i++;
				swap(a[j],a[i]);
			}
		}
		swap(a[i+1],a[h]);
		return i+1;
}

int quicksort(int a[],int l,int h,int k){
	if(l<=h){
		int pivot = quick(a,l,h);
		if(pivot == k-1){return a[pivot];}
		else if(pivot < k-1){return quicksort(a,pivot+1,h,k);}
		else {return quicksort(a,l,pivot-1,k);}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
		int k; cin>>k;
		cout << quicksort(a,0,n-1,k) <<endl;
	}
}
