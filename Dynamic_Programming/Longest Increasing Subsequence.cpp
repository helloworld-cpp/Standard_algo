// author - Sheikh Farhan //
//Longest Increasing Subsequence// 
//O(n*n) gud question//

# include <bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int list[]){
	int i,j;
	list[0]=1;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j] > a[i] && list[j] <= list[i]){
				list[j]=list[i]+1;
			}
		}
		
	}
	return *max_element(list,list+n);
}
int main(){
	int n; cin>>n;
	int a[n],i; for(i=0;i<n;i++){cin>>a[i];}
	int list[n]; for(i=0;i<n;i++){list[i]=0;}
	cout<<solve(a,n,list)<<endl;
}