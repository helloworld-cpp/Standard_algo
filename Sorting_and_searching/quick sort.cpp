// author -: sheikh farhan //
//quick sort//
// n to n^2 //
// quick function implemention is good//
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

void quicksort(int a[],int l,int h){
	if(l<h){
		int pivot = quick(a,l,h);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,h);
	}
}

int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;

}