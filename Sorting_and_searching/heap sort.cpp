// author -: sheikh farhan //
//heap sort//
// n*log(n)//
# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void heap(int a[],int n,int i){
	int largest  = i;
	int l = 2*i+1;
	int r =  2*i+2;
	if(l<n && a[l] > a[largest] ){
		largest = l;
	}
	if(r<n && a[r] > a[largest]){
		largest = r;
	}
	if(largest != i){
		swap(a[largest],a[i]);
		heap(a,n,largest);
	}
}
void heapsort(int a[],int n){
	int i;
	for(i = (n/2)-1 ; i>=0 ;i--){
		heap(a,n,i);
	}
	
	for(i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heap(a,i,0);

	}
}

int main(){
	int n; cin>>n;
	int i,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	heapsort(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;

}