// author - Sheikh Farhan //
//Subset Sum Problem//
//O(n*sum)//
# include <bits/stdc++.h>
using namespace std;

bool find(int a[],int n,int sum){
	bool res[n+1][sum+1]; 
	int i,j;
		for(i=0;i<=n;i++){res[i][0]=true;}
		for(i=1;i<=sum;i++){res[0][i]=false;}
			for(i=1;i<=n;i++){
				for(j=1;j<=sum;j++){
					if(a[i-1] > j){res[i][j]= res[i-1][j];}
					else{res[i][j] = res[i-1][j] || res[i-1][j-a[i-1]];}	
				}
			}
	return res[n][sum];
}

int main(){
	int n; cin>>n;
	int a[n],i; for(i=0;i<n;i++){cin>>a[i];}
	int sum; cin>>sum;
	if(find(a,n,sum)){cout<<"yes \n";}
	else{cout<<"No \n";}
}